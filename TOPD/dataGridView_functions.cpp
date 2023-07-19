#include "MyForm.h"

System::Void TOPD::MyForm::dataGridView1_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e) {
	try {
		if (dataGridView1->Focused) {
			if (dataGridView1->DataSource == tAllData) {//updating dataGrid
				//patientsDA->Update(safe_cast<DataTable^>(dataGridView1->DataSource));
				patientsDA->Update(tAllData);
			}
			else if (dataGridView1->DataSource == tDoctorData) {
				doctorsDA->Update(tDoctorData);
			}
			else if (dataGridView1->DataSource == tRoomsData) {
				roomsDA->Update(tRoomsData);
			}
		}
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->Message, L"Unhandled exception in the dataGridView1_RowsRemoved", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

//you have to call the Update method twice to update properly the data from the first attept
System::Void TOPD::MyForm::dataGridView1_RowLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e){
	//do not touch section
	lastRowSelected = e->RowIndex;
	dataGridView1->EndEdit();
	dataGridView1->CommitEdit(DataGridViewDataErrorContexts());
	//do not touch section


	try {
		UpdateTheTables();
	}
	catch (MySqlException^ ex) {
		auto text = ex->Message;
		if (text == L"Field \'bill_no\' doesn\'t have a default value") {
			MessageBox::Show(L"Заповніть рядок повністю", L"Створення рядка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			auto ds = safe_cast<DataTable^>(dataGridView1->DataSource);
			ds->Rows[e->RowIndex]->Delete();
		}
		else if (text == L"Column \'bill_no\' cannot be null" && e->RowIndex == dataGridView1->Rows->Count-3) {
			tAllData->Rows->RemoveAt(e->RowIndex + 1);
		}
		else {
			MessageBox::Show(ex->Message, L"Unhandled exception in the dataGridView1_RowLeave", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	
}

//you have to call the Update method twice to update properly the data from the first attept
System::Void TOPD::MyForm::dataGridView1_RowEnter(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	/*if (dataGridView1->DataSource == tRoomsData && e->RowIndex > 1) {
		roomsDA->UpdateCommand->Parameters[4]->Value =
			Convert::ToInt32(tRoomsData->Rows[e->RowIndex - 1]->ItemArray[0]);
	}//?????????*/
	//not allowing to select the last row automatically 

	//skip adding an empy row
	auto currDataSource = safe_cast<DataTable^>(dataGridView1->DataSource);
	if (currDataSource->Rows->Count >= e->RowIndex) {
		try {
			UpdateTheTables();
		}
		catch (MySqlException^ ex) {
			auto text = ex->Message;
			if (text == L"Field \'bill_no\' doesn\'t have a default value") {
				MessageBox::Show(L"Заповніть рядок повністю", L"Створення рядка", MessageBoxButtons::OK, MessageBoxIcon::Information);
				auto ds = safe_cast<DataTable^>(dataGridView1->DataSource);
				ds->Rows[e->RowIndex]->Delete();
			}
			else if (text == L"Column \'bill_no\' cannot be null" && e->RowIndex == dataGridView1->Rows->Count - 1) {
				tAllData->Rows->RemoveAt(e->RowIndex);
			}
			else {
				MessageBox::Show(ex->Message, L"Unhandled exception in the dataGridView1_RowEnter", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
}

System::Void TOPD::MyForm::dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e){
	auto cnt = dataGridView1->Rows->Count;
	auto diff = lastRowSelected - lastSelection;
	if (cnt > lastRowSelected &&
		lastRowSelected >= 0 &&
		lastRowSelected != cnt - 1 &&
		dataGridView1->Rows[lastRowSelected + 1]->IsNewRow) {//if the next row is the lower new row

		if (cnt <= 2)dataGridView1->CurrentCell = dataGridView1->Rows[cnt - 2]->Cells[1];
		else		 dataGridView1->CurrentCell = dataGridView1->Rows[cnt - 3]->Cells[1];//?


		return;
	}

}

System::Void TOPD::MyForm::dataGridView1_DataError(System::Object^ sender, System::Windows::Forms::DataGridViewDataErrorEventArgs^ e){
	if (e->Exception->Message == L"Input string was not in a correct format.") {
		MessageBox::Show(L"Невірний тип даних", L"Створення рядка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		if (dataGridView1->Columns[e->ColumnIndex]->HeaderText == L"Вік") {
			MessageBox::Show(L"Тип даних має бути ціле число", L"Створення рядка", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = nullptr;
	}
	else if (e->Exception->Message == L"The string was not recognized as a valid DateTime. There is an unknown word starting at index 0.") {
		if (dataGridView1->Columns[e->ColumnIndex]->HeaderText == L"Дата прийняття") {
			MessageBox::Show(L"Тип даних має бути дата (місяць-день-рік або місяць/день/рік)", L"Створення рядка", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = nullptr;
	}
}


System::Void TOPD::MyForm::dataGridView1_CellBeginEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^ e){
	auto ds = safe_cast<DataTable^>(dataGridView1->DataSource);

	//if(e->RowIndex < ds->Rows->Count && Convert::ToString(ds->Rows[e->RowIndex]->RowState) == L"Unchanged") 
	//	ds->Rows[e->RowIndex]->SetModified();//?
	
	rowBeginMod = e->RowIndex;

	// Check if the cell belongs to the specific row you want to restrict
	if (e->ColumnIndex == 0) {
		e->Cancel = true;
	}
}

System::Void TOPD::MyForm::dataGridView1_NewRowNeeded(System::Object^ sender, System::Windows::Forms::DataGridViewRowEventArgs^ e){
	
}