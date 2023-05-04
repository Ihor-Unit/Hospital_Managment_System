#include "MyForm.h"
using namespace System::Drawing::Drawing2D;
using namespace System::Drawing;


GraphicsPath^ GetFigurePath(RectangleF rect, float radius) {
	GraphicsPath^ path = gcnew GraphicsPath();
	path->StartFigure();
	path->AddArc(rect.X, rect.Y, radius, radius, 180, 90);
	path->AddArc(rect.Width - radius, rect.Y, radius, radius, 270, 90);
	path->AddArc(rect.Width - radius, rect.Height - radius, radius, radius, 0, 90);
	path->AddArc(rect.X, rect.Height - radius, radius, radius, 90, 90);
	path->CloseFigure();

	return path;
}

System::Void TOPD::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e){
	////initial preferences
	Ratio->ChartAreas[0]->AxisX->LabelStyle->Font = gcnew System::Drawing::Font("Century Gothic", 10);
	Ratio->ChartAreas[0]->AxisY->LabelStyle->Font = gcnew System::Drawing::Font("Century Gothic", 10);

	chart2->ChartAreas[0]->AxisX->LabelStyle->Font = gcnew System::Drawing::Font("Century Gothic", 10);
	chart2->ChartAreas[0]->AxisY->LabelStyle->Font = gcnew System::Drawing::Font("Century Gothic", 10);

	Donut->ChartAreas[0]->AxisX->LabelStyle->Font = gcnew System::Drawing::Font("Century Gothic", 10);
	Donut->ChartAreas[0]->AxisY->LabelStyle->Font = gcnew System::Drawing::Font("Century Gothic", 10);

	dbDateTime = gcnew Dictionary<DateTime, size_t>();
	dbFieldRow = gcnew Dictionary<String^, size_t>();
	dbDiseaseRow = gcnew Dictionary<String^, size_t>();
	dbGenderRow = gcnew Dictionary<String^, size_t>();

	button7->BackColor = Color::FromArgb(128, 128, 255);
	patients->BackColor = Color::FromArgb(128, 128, 255);

	tAllData = gcnew DataTable();
	tFilteredData = gcnew DataTable();
	tDoctorData = gcnew DataTable();
	tRoomsData = gcnew DataTable();

	arrButStat = gcnew array<Button^>(4);
	arrButLowerSide = gcnew array<Button^>(4);

	arrButStat[0] = button7;
	arrButStat[1] = button5;
	arrButStat[2] = button6;
	arrButStat[3] = button4;

	arrButLowerSide[0] = patients;
	arrButLowerSide[1] = doctors;
	arrButLowerSide[2] = rooms;
	arrButLowerSide[3] = show;

	label5->Visible = false;
	label7->Visible = false;
	textBox2->Visible = false;
	panel6->Visible = false;

	//chanched location
	textBox1->Location = Point(800, 73);
	panel5->Location = Point(798, 98);
	show->Location = Point(941, 70);
	////bringing information from the db to the form
	conn = gcnew MySqlConnection(this->connStr);
	conn->Open();

	patientsDA = SelectTheQuery();
	if (this->permission == L"Адміністратор") {
		doctorsDA = gcnew MySqlDataAdapter(L"SELECT doctor_id, full_name as \'Ім\\'я\', age as \'Вік\', field_of_occ as \'Спеціальність\' FROM doctors", conn);
		doctorsDA->Fill(tDoctorData);

		MySqlCommandBuilder^ buildDoc = gcnew MySqlCommandBuilder(doctorsDA);
		doctorsDA->UpdateCommand = buildDoc->GetUpdateCommand();
		doctorsDA->DeleteCommand = buildDoc->GetDeleteCommand();
		doctorsDA->InsertCommand =
		gcnew MySqlCommand(L"INSERT INTO `doctors` (`doctor_id`, `full_name`, `age`, `field_of_occ`) VALUES (@pk, @p1, @p2, @p3)");
		for each (auto par in buildDoc->GetInsertCommand()->Parameters) {
			doctorsDA->InsertCommand->Parameters->Add(par);
		}
		MySqlParameter^ pk = gcnew MySqlParameter();
		pk->ParameterName = "@pk";
		pk->DbType = DbType::Int32;
		pk->SourceColumn = "id_no";
		pk->Value = -1;//init val
		doctorsDA->InsertCommand->Parameters->Add(pk);
	}
	if (this->permission == L"Адміністратор") {
		roomsDA = gcnew MySqlDataAdapter(L"SELECT id, room_no as \'Номер палати\', room_type as \'Тип палати\' FROM rooms", conn);
		roomsDA->Fill(tRoomsData);

		MySqlCommandBuilder^ buildRoo = gcnew MySqlCommandBuilder(roomsDA);
		roomsDA->UpdateCommand = buildRoo->GetUpdateCommand();
		roomsDA->DeleteCommand = buildRoo->GetDeleteCommand();
		roomsDA->InsertCommand =
		gcnew MySqlCommand(L"INSERT INTO `rooms` (`id`, `room_no`, `room_type`) VALUES (@pk, @p1, @p2)");
		for each (auto par in buildRoo->GetInsertCommand()->Parameters) {
			roomsDA->InsertCommand->Parameters->Add(par);
		}
		MySqlParameter^ pk = gcnew MySqlParameter();
		pk->ParameterName = "@pk";
		pk->DbType = DbType::Int32;
		pk->SourceColumn = "id_no";
		pk->Value = -1;//init val
		roomsDA->InsertCommand->Parameters->Add(pk);
	}

	//the query string
	patientsDA->Fill(tAllData);
	patientsDA->UpdateBatchSize = 1;
	build = gcnew MySqlCommandBuilder(patientsDA);

	patientsDA->UpdateCommand = build->GetUpdateCommand();
	patientsDA->DeleteCommand = build->GetDeleteCommand();
	patientsDA->InsertCommand = /*build->GetInsertCommand();*/
	gcnew MySqlCommand(L"INSERT INTO `patients` (`id_no`, `full_name`, `working_field`, `age`, `gender`, `cause`, `disease`, `threatment`, `admission_date`, `bill_no`, `doctor_id`, `room_no`) VALUES (@pk, @p1, @p2, @p3, @p4, @p5, @p6, @p7, @p8, @p9, @p10, @p11)");
	for each (auto par in build->GetInsertCommand()->Parameters) {
		patientsDA->InsertCommand->Parameters->Add(par);
	}
	MySqlParameter^ pk = gcnew MySqlParameter();
	pk->ParameterName = "@pk";
	pk->DbType = DbType::Int32;
	pk->SourceColumn = "id_no";
	pk->Value = -1;//init val
	patientsDA->InsertCommand->Parameters->Add(pk);
	//patientsDA->UpdateCommand->Parameters->Add(pk);


	UpdateDataTables();

	ShowAll();

	FillComboFiltering(tAllData);

	//The functions below must always come after the StructurizeInfo func
	StructurizeInfo();

	StatSelectionLast(0);//assuming that the button7 is initialy chosen

	UpdateRatioChart();

	UpdateDonutChart();
}
System::Void TOPD::MyForm::MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e){
	conn->Close();
	Application::Exit();
}