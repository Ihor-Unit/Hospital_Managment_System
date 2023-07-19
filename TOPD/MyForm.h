#pragma once
#include <map>



System::Drawing::Drawing2D::GraphicsPath^ GetFigurePath(System::Drawing::RectangleF rect, float radius);



namespace TOPD {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace DataVisualization::Charting;
	using namespace System::Collections::Generic;
	using namespace System::Resources;
	using namespace System::Data::Common;

	using namespace MySql::Data::MySqlClient;



	static int Comparator(KeyValuePair<DateTime, size_t> pair1, KeyValuePair<DateTime, size_t> pair2) {
		return pair1.Key.CompareTo(pair2.Key);
	}
	static System::Void SortDict(Dictionary<DateTime, size_t>^ dict) {
		List<KeyValuePair<DateTime, size_t>>^ list = gcnew List<KeyValuePair<DateTime, size_t>>(dict);

		// sort the list by keys in ascending order
		list->Sort(gcnew Comparison<KeyValuePair<DateTime, size_t>>(
			Comparator
		));

		// clear the dictionary and copy the sorted key-value pairs back to it
		dict->Clear();
		for each (KeyValuePair<DateTime, size_t> pair in list) {
			dict->Add(pair.Key, pair.Value);
		}
	}

	template<typename T>
	System::Void MakeFigureRounded(T^ figure, System::Windows::Forms::PaintEventArgs^ e, float borderRadius = 20.f) {
		RectangleF rectSurface = RectangleF(0, 0, figure->Width, figure->Height);
		e->Graphics->SmoothingMode = SmoothingMode::AntiAlias;
		//Button surface
		GraphicsPath^ pathSurface = GetFigurePath(rectSurface, borderRadius);

		Pen^ penSurface = gcnew Pen(figure->Parent->BackColor, 2);

		//Button surface
		figure->Region = gcnew System::Drawing::Region(pathSurface);
		//Draw surface border for HD result
		e->Graphics->DrawPath(penSurface, pathSurface);
	}



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

		String^ permission;
		String^ connStr = nullptr;
	private: System::Windows::Forms::Panel^ Civil;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ Military;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;




	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Ratio;


	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;



	private: System::Windows::Forms::Button^ Update;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ patients;
	private: System::Windows::Forms::Button^ doctors;
	private: System::Windows::Forms::Button^ rooms;



	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ Statistics;
	private: System::Windows::Forms::TabPage^ TheTable;
	private: System::Windows::Forms::ComboBox^ comboFiltering;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ show;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Donut;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


		Dictionary<DateTime, size_t>^ dbDateTime = nullptr;
		Dictionary<String^, size_t>^ dbFieldRow = nullptr;
		Dictionary<String^, size_t>^ dbDiseaseRow = nullptr;
		Dictionary<String^, size_t>^ dbGenderRow = nullptr;
		MySqlConnection^ conn = nullptr;
		MySqlDataAdapter^ patientsDA = nullptr;
		MySqlDataAdapter^ doctorsDA = nullptr;
		MySqlDataAdapter^ roomsDA = nullptr;
		DataRow^ updateRow = nullptr;
		MySqlCommandBuilder^ build = nullptr;

		array<Button^>^ arrButStat = nullptr;
		array<Button^>^ arrButLowerSide = nullptr;
		

		DataTable^ baseDataSorce = nullptr;

		DataTable^ tAllData = nullptr;
		DataTable^ tFilteredData = nullptr;
		DataTable^ tCivilData = nullptr;
		DataTable^ tMilitaryData = nullptr;

		DataTable^ tDoctorData = nullptr;
		DataTable^ tRoomsData = nullptr;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
		
#pragma endregion	
	//updates the tables are used in the main form
	private: Void UpdateTheTables() {
		//try {
			if (baseDataSorce == tAllData || dataGridView1->DataSource == tAllData) {//updating dataGrid
				if (tAllData != safe_cast<DataTable^>(dataGridView1->DataSource)) {
					UpdateBy(tAllData, safe_cast<DataTable^>(dataGridView1->DataSource));
				}
				patientsDA->Update(tAllData);
			}
			else if (baseDataSorce == tDoctorData || dataGridView1->DataSource == tDoctorData) {
				if (tDoctorData != safe_cast<DataTable^>(dataGridView1->DataSource)) {
					UpdateBy(tDoctorData, safe_cast<DataTable^>(dataGridView1->DataSource));
				}
				doctorsDA->Update(tDoctorData);
			}
			else if (baseDataSorce == tRoomsData || dataGridView1->DataSource == tRoomsData) {
				if (tRoomsData != safe_cast<DataTable^>(dataGridView1->DataSource)) {
					UpdateBy(tRoomsData, safe_cast<DataTable^>(dataGridView1->DataSource));
				}
				roomsDA->Update(tRoomsData);
			}
		//}
		
	}
	private: Void UpdateBy(DataTable^ dest, DataTable^ source) {
		int cnt{ source->Rows->Count };

		
		array<DataColumn^>^ pri = gcnew array<DataColumn^>(1);
		pri[0] = dest->Columns[0];
		dest->PrimaryKey = pri;
		

		auto from = source->Rows->GetEnumerator();
		from->MoveNext();
		for (size_t i{}; i < cnt; i++) {

			auto st = Convert::ToString(source->Rows[i]->RowState);
			if (st == L"Modified") {
				DataRow^ row = dest->Rows->Find(source->Rows[i]->ItemArray[0]);
				int destIndx = dest->Rows->IndexOf(row);

				//Updating a row
				DataRow^ cells = safe_cast<DataRow^>(from->Current);
				if (dest != source) {//if the tables are identical then we need just to set the pk
					dest->Rows[destIndx]->Delete();
					dest->Rows->Add(cells->ItemArray);
				}

				patientsDA->InsertCommand->Parameters[patientsDA->InsertCommand->Parameters->Count-1]->Value 
					= cells->ItemArray[0];//set the pk of a row I need to insert


				//if the tables are identical then we have to accept changes of the source table
				if (dest != source) source->Rows[i]->AcceptChanges();
			}
			from->MoveNext();
		}
	}
	
	//Fills the comboFiltering object with the data from a row from the specified DataTable object
	private: Void FillComboFiltering(DataTable^ dt) {
		comboFiltering->Items->Clear();
		
		for (size_t i{}; i < dt->Columns->Count; i++) {
			comboFiltering->Items->Add(dt->Columns[i]->ColumnName);
		}
		comboFiltering->SelectedIndex = 0;
	}
	private: DataTable^ FilterTable(DataTable^ dt, int selcolum, String^ ftext, String^ secondText) {
		DataTable^ filtered = dt->Copy();
		filtered->Clear();


		auto enRow = dt->Rows->GetEnumerator();
		enRow->MoveNext();

		if (secondText == nullptr) {
			for (size_t i{}; i < dt->Rows->Count; i++) {
				if (dt->Rows[i]->ItemArray[selcolum]->ToString() == ftext) {
					filtered->Rows->Add((safe_cast<DataRow^>(enRow->Current))->ItemArray);
					filtered->Rows[filtered->Rows->Count - 1]->AcceptChanges();//?
				}

				enRow->MoveNext();
			}
		}
		else {
			DateTime^ dateLower = gcnew DateTime();
			dateLower = Convert::ToDateTime(ftext);

			DateTime^ dateUpper = gcnew DateTime();
			dateUpper = Convert::ToDateTime(secondText);

			DateTime^ object = gcnew DateTime();


			for (size_t i{}; i < dt->Rows->Count; i++) {
				object = Convert::ToDateTime(dt->Rows[i]->ItemArray[selcolum]);

				if (object->CompareTo(dateLower) >= 0 && object->CompareTo(dateUpper) <= 0) {
					filtered->Rows->Add((safe_cast<DataRow^>(enRow->Current))->ItemArray);
					filtered->Rows[filtered->Rows->Count - 1]->AcceptChanges();//?
				}

				enRow->MoveNext();
			}
		}
		return filtered;
	}
	private: System::Void StructurizeInfo() {
		//TO DO: NOT OPTIMIZED
		for (int row = 0; row < dataGridView1->RowCount; row++) {

			for (int col = 0; col < dataGridView1->ColumnCount; col++) {
				Object^ dbValObj = dataGridView1->Rows[row]->Cells[col]->Value;
				if (dbValObj != nullptr) {
					//counting the DateTime type values in the DB
					if (dataGridView1->Columns[col]->HeaderText == L"Дата прийняття") {
						DateTime date = Convert::ToDateTime(dbValObj);
						DateTime onlyDate(date.Year, date.Month, date.Day);
						if (dbDateTime->ContainsKey(onlyDate)) dbDateTime[onlyDate]++;
						else dbDateTime[onlyDate] = 1;
					}

					//counting the column named 'Field'(Область)
					if (dataGridView1->Columns[col]->HeaderText == L"Область") {
						if (dbFieldRow->ContainsKey(dbValObj->ToString())) dbFieldRow[dbValObj->ToString()]++;
						else  dbFieldRow[dbValObj->ToString()] = 1;
					}

					//counting the column named 'Disease'
					if (dataGridView1->Columns[col]->HeaderText == L"Діагноз") {
						if (dbDiseaseRow->ContainsKey(dbValObj->ToString())) dbDiseaseRow[dbValObj->ToString()]++;
						else dbDiseaseRow[dbValObj->ToString()] = 1;
					}

					if (dataGridView1->Columns[col]->HeaderText == L"Стать") {
						if (dbGenderRow->ContainsKey(dbValObj->ToString())) dbGenderRow[dbValObj->ToString()]++;
						else dbGenderRow[dbValObj->ToString()] = 1;
					}
				}
			}
		}
	}
	private: System::Void UpdateRatioChart() {
		Ratio->Series["Series1"]->Points->Clear();
		if (dbGenderRow->ContainsKey(L"Ч")) {
			Ratio->Series["Series1"]->Points->AddXY(L"Чоловіки", dbGenderRow[L"Ч"]);
		}
		if (dbGenderRow->ContainsKey(L"Ж")) {
			Ratio->Series["Series1"]->Points->AddXY(L"Жінки", dbGenderRow[L"Ж"]);
		}
	}
	private: System::Void UpdateDonutChart() {
		Donut->Series["Series1"]->Points->Clear();
		auto enKey = dbDiseaseRow->Keys->GetEnumerator();
		auto enVal = dbDiseaseRow->Values->GetEnumerator();
		enKey.MoveNext();
		enVal.MoveNext();
		for (size_t i{}; i < dbDiseaseRow->Count; i++) {
			Donut->Series["Series1"]->Points->AddXY(enKey.Current->ToString(), enVal.Current);
			enKey.MoveNext();
			enVal.MoveNext();
		}

		if (dbFieldRow->ContainsKey(L"Цивільний")) {
			label1->Text = dbFieldRow[L"Цивільний"].ToString();
		}
		else label1->Text = "0";
		if (dbFieldRow->ContainsKey(L"Військовий")) {
			label2->Text = dbFieldRow[L"Військовий"].ToString();
		}
		else label2->Text = "0";
	}
	private: System::Void ShowOnlyCivil() {
		dataGridView1->DataSource = nullptr;
		dataGridView1->DataSource = tCivilData;
	}
	private: System::Void ShowOnlyMilitary() {
		dataGridView1->DataSource = nullptr;
		dataGridView1->DataSource = tMilitaryData;
	}
		   //Brings all the data into the dataGrid
	private: System::Void ShowAll() {
		dataGridView1->DataSource = nullptr;
		dataGridView1->DataSource = tAllData;
	}
		   //Updates the tCivilData and tMilitaryData dicts
	private: System::Void UpdateDataTables() {
		//TO DO: not optimized
		auto cVal = tAllData->Columns->GetEnumerator();
		cVal->MoveNext();
		int indx{ -1 };
		for (size_t i{}; i < tAllData->Columns->Count - 1; i++) {
			if (cVal->Current->ToString() == L"Область") {
				indx = i;
				break;
			}
			cVal->MoveNext();
		}

		tCivilData = tAllData->Copy();
		tCivilData->Clear();//did this to copy the schema of the table
		tMilitaryData = tAllData->Copy();
		tMilitaryData->Clear();

		//How to copy a row
		auto rwVal = tAllData->Rows->GetEnumerator();
		rwVal->MoveNext();
		for (size_t i{}; i < tAllData->Rows->Count; i++) {
			DataRow^ cells = safe_cast<DataRow^>(rwVal->Current);
			String^ str = cells[indx]->ToString();
			if (str == L"Цивільний") {
				tCivilData->Rows->Add(cells->ItemArray);
			}
			else {
				tMilitaryData->Rows->Add(cells->ItemArray);
			}
			rwVal->MoveNext();
		}
	}
	private: System::Void DefaultButtons(array<Button^>^ arr ) {
		for each (auto but in arr) {
			but->BackColor = Color::FromArgb(0, 128, 255);
		}
	}
	private: System::Void StatSelectionLast(int last) {
		chart2->Series["Series1"]->Points->Clear();

		int iter{ -1 };
		if (last > dbDateTime->Count) {
			iter = dbDateTime->Count;
		}
		else if (last == 0) {
			iter = dbDateTime->Count;
		}


		SortDict(dbDateTime);


		auto key = dbDateTime->Keys->GetEnumerator();
		auto val = dbDateTime->Values->GetEnumerator();
		key.MoveNext();
		val.MoveNext();

		DateTime startPoint = key.Current;


		for (size_t i{}; i < iter; i++) {
			int days = (key.Current - startPoint).Days;
			String^ Xval = key.Current.Month.ToString() + "/" + key.Current.Day.ToString() + "/" + key.Current.Year.ToString();
			if (last == 0) {
				chart2->Series["Series1"]->Points->AddXY(Xval, val.Current);
				key.MoveNext();
				val.MoveNext();
			}
			else if (days < last) {
				chart2->Series["Series1"]->Points->AddXY(Xval, val.Current);
				key.MoveNext();
				val.MoveNext();
			}

		}
	}
	private: MySqlDataAdapter^ SelectTheQuery() {
		if (this->permission == L"Адміністратор") {
			return gcnew MySqlDataAdapter(L"SELECT patients.id_no, patients.full_name AS \'Повне ім\\'я\', patients.working_field as \'Область\' ,patients.age as \'Вік\', patients.gender as \'Стать\', patients.cause as \'Причина\', patients.disease as \'Діагноз\', patients.threatment as \'Лікування\' ,patients.admission_date as \'Дата прийняття\', patients.bill_no as \'№ рахунку\', patients.doctor_id as \'№ доктора\', patients.room_no as \'Палата\' FROM patients;", conn);
		}
		else if (this->permission == L"Медичний персонал") {
			return gcnew MySqlDataAdapter(L"SELECT patients.full_name AS \'Повне ім\\'я\', patients.working_field as \'Область\', patients.age AS \'Вік\', patients.gender AS \'Стать\', patients.cause as \'Обставини\', patients.threatment as \'Лікування\', patients.admission_date as \'Дата прийому\', patients.bill_no as \'№ рахунку\', patients.doctor_id as \'№ доктора\', patients.room_no as \'Палата\' FROM patients;", conn);
		}
		else if (this->permission == L"Волонтер") {
			return gcnew MySqlDataAdapter(L"SELECT patients.full_name AS \'Повне ім\\'я\', patients.age AS \'Вік\', patients.gender AS \'Стать\', patients.threatment AS \'Лікування\' FROM patients; ", conn);
		}
		else if (this->permission == L"Доктор") {
			this->permission = L"Адміністратор";//TODO
			return gcnew MySqlDataAdapter(L"SELECT patients.id_no, patients.full_name AS \'Повне ім\\'я\', patients.working_field as \'Область\' ,patients.age as \'Вік\', patients.gender as \'Стать\', patients.cause as \'Причина\', patients.disease as \'Діагноз\', patients.threatment as \'Лікування\' ,patients.admission_date as \'Дата прийняття\', patients.bill_no as \'№ рахунку\', patients.doctor_id as \'№ доктора\', patients.room_no as \'Палата\' FROM patients;", conn);
			//return gcnew MySqlDataAdapter(L"SELECT patients.full_name AS \'Повне ім\\'я\', patients.age AS \'Вік\', patients.gender AS \'Стать\', patients.disease as \'Діагноз\', patients.threatment as \'Лікування\', doctors.full_name as \'Ім\\'я доктора\' FROM patients LEFT JOIN doctors ON patients.doctor_id = doctors.doctor_id LEFT JOIN rooms ON patients.room_no = rooms.room_no; ", conn);
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
	
	//private: DataTable^ currentTable = nullptr;
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultButtons(arrButLowerSide);
		patients->BackColor = Color::FromArgb(128, 128, 255);

		dataGridView1->DataSource = tAllData;

		FillComboFiltering(tAllData);
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultButtons(arrButLowerSide);
		doctors->BackColor = Color::FromArgb(128, 128, 255);

		dataGridView1->DataSource = tDoctorData;

		FillComboFiltering(tDoctorData);
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultButtons(arrButLowerSide);
		rooms->BackColor = Color::FromArgb(128, 128, 255);

		dataGridView1->DataSource = tRoomsData;

		FillComboFiltering(tRoomsData);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultButtons(arrButStat);
		button7->BackColor = Color::FromArgb(128, 128, 255);
		StatSelectionLast(0);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultButtons(arrButStat);
		button5->BackColor = Color::FromArgb(128, 128, 255);
		StatSelectionLast(180);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultButtons(arrButStat);
		button6->BackColor = Color::FromArgb(128, 128, 255);
		StatSelectionLast(30);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultButtons(arrButStat);
		button4->BackColor = Color::FromArgb(128, 128, 255);
		StatSelectionLast(7);

	}
	private: System::Void show_Click(System::Object^ sender, System::EventArgs^ e) {
		auto str = Convert::ToString(comboFiltering->Items[comboFiltering->SelectedIndex]);
		if (str != L"Дата прийняття") {
			if ((safe_cast<DataTable^>(dataGridView1->DataSource)) != tAllData) {
				dataGridView1->ReadOnly = true;
			}
			else {
				dataGridView1->ReadOnly = false;
			}

			baseDataSorce = safe_cast<DataTable^>(dataGridView1->DataSource);
			dataGridView1->DataSource = FilterTable(safe_cast<DataTable^>(dataGridView1->DataSource), comboFiltering->SelectedIndex, textBox1->Text, nullptr);
		}
		else {
			if ((safe_cast<DataTable^>(dataGridView1->DataSource)) != tAllData) {
				dataGridView1->ReadOnly = true;
			}
			else {
				dataGridView1->ReadOnly = false;
			}

			baseDataSorce = safe_cast<DataTable^>(dataGridView1->DataSource);
			dataGridView1->DataSource = FilterTable(safe_cast<DataTable^>(dataGridView1->DataSource), comboFiltering->SelectedIndex, textBox1->Text, textBox2->Text);
		}
		DefaultButtons(arrButLowerSide);
		show->BackColor = Color::FromArgb(128, 128, 255);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateDataTables();

		ShowAll();

		dbDateTime = gcnew Dictionary<DateTime, size_t>();
		dbFieldRow = gcnew Dictionary<String^, size_t>();
		dbDiseaseRow = gcnew Dictionary<String^, size_t>();
		dbGenderRow = gcnew Dictionary<String^, size_t>();
		//The functions below must always come after the StructurizeInfo func
		StructurizeInfo();

		StatSelectionLast(0);//assuming that the button7 is initialy chosen

		UpdateRatioChart();

		UpdateDonutChart();
	}
	private: System::Void dataGridView1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		dataGridView1->Refresh();
	}
	private: System::Void Update_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->DataSource == tAllData) {//updating dataGrid
			tAllData->Clear();
			patientsDA->Fill(tAllData);
		}
		else if (dataGridView1->DataSource == tDoctorData) {
			tDoctorData->Clear();
			doctorsDA->Fill(tDoctorData);
		}
		else if (dataGridView1->DataSource == tRoomsData) {
			tRoomsData->Clear();
			roomsDA->Fill(tRoomsData);
		}
	}
	private: int rowBeginMod{ -1 };
	private: System::Void dataGridView1_CellBeginEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^ e);
	private: System::Void dataGridView1_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e);
	private: int lastRowSelected{ -1 };
	private: System::Void dataGridView1_RowLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: int lastSelection{ -1 };//local check for the selection variable 
	private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dataGridView1_DataError(System::Object^ sender, System::Windows::Forms::DataGridViewDataErrorEventArgs^ e);
	private: System::Void dataGridView1_RowEnter(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void dataGridView1_NewRowNeeded(System::Object^ sender, System::Windows::Forms::DataGridViewRowEventArgs^ e);
	
private: System::Void dataGridView1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(dataGridView1, e);
	}
	private: System::Void Civil_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(Civil, e);
	}
	private: System::Void Military_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(Military, e);
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(panel4, e);
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(panel1, e);
	}
	private: System::Void chart2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(chart2, e);
	}
	private: System::Void Ratio_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(Ratio, e);
	}
	private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(panel7, e);
	}
	private: System::Void button4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(button4, e, 50.f);
	}
	private: System::Void button6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(button6, e, 50.f);
	}
	private: System::Void button5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(button5, e, 50.f);
	}
	private: System::Void button7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(button7, e, 50.f);
	}
	private: System::Void Update_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(Update, e, 55.f);
	}
	private: System::Void button3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(button3, e, 55.f);
	}
	private: System::Void button11_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(rooms, e, 45.f);
	}
	private: System::Void button10_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(doctors, e, 45.f);
	}
	private: System::Void button9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(patients, e, 45.f);
	}
	private: System::Void button12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(show, e, 45.f);
	}
	private: System::Void Donut_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(Donut, e);
	}
	private: System::Void comboFiltering_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {
		if (comboFiltering->Items[comboFiltering->SelectedIndex]->ToString() == L"Дата прийняття") {
			label5->Visible = true;
			label7->Visible = true;
			textBox2->Visible = true;
			panel6->Visible = true;

			//default location
			textBox1->Location = Point(948, 73);
			panel5->Location = Point(946, 98);
			show->Location = Point(1241, 70);
		}
		else {
			label5->Visible = false;
			label7->Visible = false;
			textBox2->Visible = false;
			panel6->Visible = false;

			//chanched location
			textBox1->Location = Point(800, 73);
			panel5->Location = Point(798, 98);
			show->Location = Point(941, 70);
		}
	}
	private: System::Void comboFiltering_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"Автоматизована система обліку поранених цивільних і військових\n Розробники: \n - Процишин Ігор \n - Слюсаренко Гліб \n - Міщенко Олександр \n - Федорчук Єгор \n - Гайдучок Св\'ятослав", L"About", MessageBoxButtons::OK);
}
private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"Цілодобова допомога: +38(096) 151 8728 Св\'ятослав", L"Help", MessageBoxButtons::OK);
}
};
}

/*
* This code makes a button with rounded borders and traces the button's border with a custom line on choose 
* 
float borderSize = 0.f;
		float borderRadius = button1->Height - 5.f;
		//button1->BackColor = Color::LightBlue;
		Color borderColor = Color::PaleVioletRed;
		borderColor = button1->BackColor;


		RectangleF rectSurface = RectangleF(0, 0, button1->Width, button1->Height);
		RectangleF rectBorder = RectangleF::Inflate(rectSurface, -borderSize, -borderSize);

		if (borderSize >= 1) {
			e->Graphics->SmoothingMode = SmoothingMode::HighQuality;

			GraphicsPath^ pathSurface = GetFigurePath(rectSurface, borderRadius);
			GraphicsPath^ pathBorder = GetFigurePath(rectBorder, borderRadius - 1.f);
			Pen^ penSurface = gcnew Pen(button1->Parent->BackColor, 2);
			Pen^ penBorder = gcnew Pen(borderColor, borderSize);

			penBorder->Alignment = PenAlignment::Inset;
			//Button surface
			button1->Region = gcnew System::Drawing::Region(pathSurface);
			//Draw surface border for HD result
			e->Graphics->DrawPath(penSurface, pathSurface);
			e->Graphics->DrawPath(penBorder, pathBorder);
		}
		else {//borderless
			e->Graphics->SmoothingMode = SmoothingMode::HighQuality;
			//Button surface
			GraphicsPath^ pathSurface = GetFigurePath(rectSurface, borderRadius);

			Pen^ penSurface = gcnew Pen(button1->Parent->BackColor, 2);

			//Button surface
			button1->Region = gcnew System::Drawing::Region(pathSurface);
			//Draw surface border for HD result
			e->Graphics->DrawPath(penSurface, pathSurface);

		}
*/