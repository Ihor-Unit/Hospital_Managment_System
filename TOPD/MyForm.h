#pragma once
#include <map>


System::Drawing::Drawing2D::GraphicsPath^ GetFigurePath(System::Drawing::RectangleF rect, float radius);

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

	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ Ratio;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ Update;

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
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

		Dictionary<DateTime, size_t>^ dbDateTime;
		Dictionary<String^, size_t>^ dbFieldRow;
		Dictionary<String^, size_t>^ dbDiseaseRow;
		Dictionary<String^, size_t>^ dbGenderRow;
		DataTable^ tAllData;
		DataTable^ tCivilData;
		DataTable^ tMilitaryData;
		MySqlConnection^ conn;
		MySqlDataAdapter^ da;
		DataRow^ updateRow;
		MySqlCommandBuilder^ build;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Donut = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Civil = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Military = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Update = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Ratio = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Donut))->BeginInit();
			this->Civil->SuspendLayout();
			this->Military->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ratio))->BeginInit();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(81, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 58);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Цивільні";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button1_Paint);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::LightGray;
			this->dataGridView1->Location = System::Drawing::Point(0, 544);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1767, 247);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellBeginEdit += gcnew System::Windows::Forms::DataGridViewCellCancelEventHandler(this, &MyForm::dataGridView1_CellBeginEdit);
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			this->dataGridView1->RowLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_RowLeave);
			this->dataGridView1->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &MyForm::dataGridView1_RowsRemoved);
			this->dataGridView1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::dataGridView1_Scroll);
			this->dataGridView1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::dataGridView1_Paint);
			// 
			// Donut
			// 
			this->Donut->BackImageTransparentColor = System::Drawing::SystemColors::Control;
			this->Donut->BackSecondaryColor = System::Drawing::SystemColors::Control;
			this->Donut->BorderlineColor = System::Drawing::SystemColors::Control;
			this->Donut->BorderSkin->PageColor = System::Drawing::SystemColors::Control;
			chartArea1->AxisY->MajorTickMark->LineWidth = 0;
			chartArea1->BackColor = System::Drawing::Color::White;
			chartArea1->Name = L"ChartArea1";
			this->Donut->ChartAreas->Add(chartArea1);
			legend1->Alignment = System::Drawing::StringAlignment::Center;
			legend1->BackColor = System::Drawing::Color::White;
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend1->InterlacedRowsColor = System::Drawing::SystemColors::Control;
			legend1->IsTextAutoFit = false;
			legend1->LegendStyle = System::Windows::Forms::DataVisualization::Charting::LegendStyle::Column;
			legend1->Name = L"Legend1";
			legend1->TitleBackColor = System::Drawing::SystemColors::Control;
			this->Donut->Legends->Add(legend1);
			this->Donut->Location = System::Drawing::Point(1450, 72);
			this->Donut->Name = L"Donut";
			this->Donut->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->Donut->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(8) {
				System::Drawing::Color::RoyalBlue, System::Drawing::Color::SkyBlue,
					System::Drawing::Color::LightGreen, System::Drawing::Color::DodgerBlue, System::Drawing::Color::LightSeaGreen, System::Drawing::Color::LightPink,
					System::Drawing::Color::ForestGreen, System::Drawing::Color::MediumSlateBlue
			};
			series1->BackImageTransparentColor = System::Drawing::SystemColors::Control;
			series1->BackSecondaryColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series1->BorderColor = System::Drawing::Color::White;
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Doughnut;
			series1->Color = System::Drawing::Color::White;
			series1->CustomProperties = L"PieLineColor=Control, CollectedColor=Control";
			series1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->IsValueShownAsLabel = true;
			series1->LabelForeColor = System::Drawing::Color::White;
			series1->Legend = L"Legend1";
			series1->MarkerBorderColor = System::Drawing::Color::White;
			series1->Name = L"Series1";
			series1->ShadowColor = System::Drawing::SystemColors::Control;
			series1->YValuesPerPoint = 3;
			this->Donut->Series->Add(series1);
			this->Donut->Size = System::Drawing::Size(317, 466);
			this->Donut->TabIndex = 4;
			this->Donut->Text = L"Donut";
			this->Donut->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Donut_Paint);
			// 
			// Civil
			// 
			this->Civil->BackColor = System::Drawing::Color::White;
			this->Civil->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Civil.BackgroundImage")));
			this->Civil->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Civil->Controls->Add(this->label3);
			this->Civil->Controls->Add(this->label1);
			this->Civil->Location = System::Drawing::Point(78, 55);
			this->Civil->Name = L"Civil";
			this->Civil->Size = System::Drawing::Size(218, 88);
			this->Civil->TabIndex = 5;
			this->Civil->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Civil_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(19, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 27);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Цивільні";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(19, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"-0";
			// 
			// Military
			// 
			this->Military->BackColor = System::Drawing::Color::White;
			this->Military->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Military.BackgroundImage")));
			this->Military->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Military->Controls->Add(this->label4);
			this->Military->Controls->Add(this->label2);
			this->Military->Location = System::Drawing::Point(422, 55);
			this->Military->Name = L"Military";
			this->Military->Size = System::Drawing::Size(217, 88);
			this->Military->TabIndex = 5;
			this->Military->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Military_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(19, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 27);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Військові";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(19, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 27);
			this->label2->TabIndex = 0;
			this->label2->Text = L"-0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(157, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(358, 27);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Загальна кількість поранених";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->panel3->Controls->Add(this->Military);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->Civil);
			this->panel3->Location = System::Drawing::Point(280, 69);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(726, 160);
			this->panel3->TabIndex = 6;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Controls->Add(this->Update);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Location = System::Drawing::Point(0, 124);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(241, 412);
			this->panel4->TabIndex = 7;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 24);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(62, 58);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(12, 197);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(62, 58);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 2;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(13, 110);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(62, 58);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// Update
			// 
			this->Update->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Update->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Update->FlatAppearance->BorderSize = 0;
			this->Update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Update->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Update->ForeColor = System::Drawing::Color::White;
			this->Update->Location = System::Drawing::Point(81, 301);
			this->Update->Name = L"Update";
			this->Update->Size = System::Drawing::Size(144, 58);
			this->Update->TabIndex = 1;
			this->Update->Text = L"Оновити таблицю";
			this->Update->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->Update->UseVisualStyleBackColor = false;
			this->Update->Click += gcnew System::EventHandler(this, &MyForm::Update_Click);
			this->Update->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Update_Paint);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(81, 197);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(144, 58);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Показати все";
			this->button8->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			this->button8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button8_Paint);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(81, 110);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 58);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Військові";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button2_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(26, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 43);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(96, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 27);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Menu";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Controls->Add(this->label5);
			this->panel6->Controls->Add(this->pictureBox1);
			this->panel6->Location = System::Drawing::Point(0, -7);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1767, 73);
			this->panel6->TabIndex = 8;
			// 
			// chart2
			// 
			this->chart2->BackImageTransparentColor = System::Drawing::SystemColors::Control;
			this->chart2->BackSecondaryColor = System::Drawing::SystemColors::Control;
			this->chart2->BorderlineColor = System::Drawing::SystemColors::Control;
			this->chart2->BorderSkin->PageColor = System::Drawing::SystemColors::Control;
			chartArea2->AxisX->MajorGrid->Enabled = false;
			chartArea2->AxisY->MajorGrid->Enabled = false;
			chartArea2->AxisY->MajorTickMark->LineWidth = 0;
			chartArea2->BackColor = System::Drawing::Color::White;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Alignment = System::Drawing::StringAlignment::Center;
			legend2->BackColor = System::Drawing::Color::White;
			legend2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend2->Enabled = false;
			legend2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend2->InterlacedRowsColor = System::Drawing::SystemColors::Control;
			legend2->IsTextAutoFit = false;
			legend2->Name = L"Legend1";
			legend2->TitleBackColor = System::Drawing::SystemColors::Control;
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(280, 309);
			this->chart2->Name = L"chart2";
			series2->BackImageTransparentColor = System::Drawing::SystemColors::Control;
			series2->BackSecondaryColor = System::Drawing::SystemColors::Control;
			series2->BorderColor = System::Drawing::SystemColors::Control;
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series2->CustomProperties = L"PieLineColor=Control, CollectedColor=Control";
			series2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series2->IsValueShownAsLabel = true;
			series2->LabelForeColor = System::Drawing::Color::White;
			series2->Legend = L"Legend1";
			series2->MarkerBorderColor = System::Drawing::Color::White;
			series2->MarkerBorderWidth = 2;
			series2->MarkerSize = 9;
			series2->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			series2->Name = L"Series1";
			series2->ShadowColor = System::Drawing::SystemColors::Control;
			series2->YValuesPerPoint = 3;
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(1164, 229);
			this->chart2->TabIndex = 4;
			this->chart2->Text = L"Donut";
			this->chart2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::chart2_Paint);
			// 
			// Ratio
			// 
			this->Ratio->BackImageTransparentColor = System::Drawing::SystemColors::Control;
			this->Ratio->BackSecondaryColor = System::Drawing::SystemColors::Control;
			this->Ratio->BorderlineColor = System::Drawing::SystemColors::Control;
			this->Ratio->BorderSkin->PageColor = System::Drawing::SystemColors::Control;
			chartArea3->AxisX->LineWidth = 0;
			chartArea3->AxisX->MajorGrid->Enabled = false;
			chartArea3->AxisX->MajorTickMark->Enabled = false;
			chartArea3->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea3->AxisY->LineWidth = 0;
			chartArea3->AxisY->MajorGrid->Enabled = false;
			chartArea3->AxisY->MajorTickMark->LineWidth = 0;
			chartArea3->BackColor = System::Drawing::Color::White;
			chartArea3->Name = L"ChartArea1";
			this->Ratio->ChartAreas->Add(chartArea3);
			legend3->Alignment = System::Drawing::StringAlignment::Center;
			legend3->BackColor = System::Drawing::Color::White;
			legend3->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend3->Enabled = false;
			legend3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend3->InterlacedRowsColor = System::Drawing::SystemColors::Control;
			legend3->IsTextAutoFit = false;
			legend3->Name = L"Legend1";
			legend3->TitleBackColor = System::Drawing::SystemColors::Control;
			legend3->TitleFont = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ratio->Legends->Add(legend3);
			this->Ratio->Location = System::Drawing::Point(1012, 108);
			this->Ratio->Name = L"Ratio";
			this->Ratio->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->Ratio->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(2) { System::Drawing::Color::LimeGreen, System::Drawing::Color::Pink };
			series3->BackImageTransparentColor = System::Drawing::SystemColors::Control;
			series3->BackSecondaryColor = System::Drawing::SystemColors::Control;
			series3->BorderColor = System::Drawing::SystemColors::Control;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			series3->Color = System::Drawing::SystemColors::ButtonShadow;
			series3->CustomProperties = L"PieLineColor=Control, CollectedColor=Control";
			series3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series3->IsValueShownAsLabel = true;
			series3->IsXValueIndexed = true;
			series3->LabelForeColor = System::Drawing::Color::White;
			series3->Legend = L"Legend1";
			series3->MarkerBorderColor = System::Drawing::Color::White;
			series3->Name = L"Series1";
			series3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::BrightPastel;
			series3->ShadowColor = System::Drawing::SystemColors::Control;
			series3->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::String;
			series3->YValuesPerPoint = 3;
			this->Ratio->Series->Add(series3);
			this->Ratio->Size = System::Drawing::Size(429, 113);
			this->Ratio->TabIndex = 4;
			this->Ratio->Text = L"Donut";
			this->Ratio->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Ratio_Paint);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Controls->Add(this->label9);
			this->panel7->Location = System::Drawing::Point(1012, 72);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(432, 152);
			this->panel7->TabIndex = 10;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel7_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(169, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(119, 27);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Пацієнти";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(296, 256);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(269, 26);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Показати останні дані:";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(638, 245);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(159, 49);
			this->button4->TabIndex = 1;
			this->button4->Text = L"7 днів";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			this->button4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button4_Paint);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(1038, 245);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(159, 49);
			this->button5->TabIndex = 1;
			this->button5->Text = L"6 місяців";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			this->button5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button5_Paint);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(838, 245);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(159, 49);
			this->button6->TabIndex = 1;
			this->button6->Text = L"1 місяця";
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			this->button6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button6_Paint);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(1238, 245);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(159, 49);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Весь час";
			this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			this->button7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button7_Paint);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(12, 83);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(215, 27);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Робота з даними:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(1779, 803);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Ratio);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->Donut);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Система обліку пораненних";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Donut))->EndInit();
			this->Civil->ResumeLayout(false);
			this->Civil->PerformLayout();
			this->Military->ResumeLayout(false);
			this->Military->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ratio))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion	
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
		Ratio->Series["Series1"]->Points->AddXY(L"Чоловіки", dbGenderRow[L"Ч"]);
		Ratio->Series["Series1"]->Points->AddXY(L"Жінки", dbGenderRow[L"Ж"]);
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
		if (dbFieldRow->ContainsKey(L"Військовий")) {
			label2->Text = dbFieldRow[L"Військовий"].ToString();
		}
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
	private: System::Void DefaultChartButtons() {
		button7->BackColor = Color::FromArgb(0, 128, 255);
		button6->BackColor = Color::FromArgb(0, 128, 255);
		button5->BackColor = Color::FromArgb(0, 128, 255);
		button4->BackColor = Color::FromArgb(0, 128, 255);
	}
	private: System::Void DefaultFilterButtons() {
		button1->BackColor = Color::FromArgb(0, 128, 255);
		button2->BackColor = Color::FromArgb(0, 128, 255);
		button8->BackColor = Color::FromArgb(0, 128, 255);
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
	private: MySqlDataAdapter^ SelectTheQuery(MySqlConnection^ const conn) {
		if (this->permission == L"Адміністратор") {
			return gcnew MySqlDataAdapter(L"SELECT patients.id_no, patients.full_name AS \'Повне ім\\'я\', patients.working_field as \'Область\' ,patients.age as \'Вік\', patients.gender as \'Стать\', patients.cause as \'Причина\', patients.disease as \'Діагноз\', patients.threatment as \'Лікування\' ,patients.admission_date as \'Дата прийняття\', patients.bill_no as \'№ рахунку\', patients.doctor_id as \'№ доктора\', patients.room_no as \'Палата\' FROM patients;", conn);
			//return gcnew MySqlDataAdapter(L"SELECT patients.id_no, patients.full_name AS \'Повне ім\\'я\', patients.working_field as \'Область\' ,patients.age as \'Вік\', patients.gender as \'Стать\', patients.cause as \'Причина\', patients.disease as \'Діагноз\', patients.threatment as \'Лікування\' ,patients.admission_date as \'Дата прийняття\', bills.amount as \'Сума\', doctors.full_name as \'Ім\\'я доктора\', patients.room_no as \'Палата\', rooms.room_type as \'Тип палати\' FROM patients LEFT JOIN bills ON patients.bill_no = bills.bill_no LEFT JOIN doctors ON patients.doctor_id = doctors.doctor_id LEFT JOIN rooms ON patients.room_no = rooms.room_no; ", conn);
		}
		else if (this->permission == L"Медичний персонал") {
			return gcnew MySqlDataAdapter(L"SELECT patients.full_name AS \'Повне ім\\'я\', patients.working_field as \'Область\', patients.age AS \'Вік\', patients.gender AS \'Стать\', patients.cause as \'Обставини\', patients.threatment as \'Лікування\', patients.admission_date as \'Дата прийому\', bills.amount as \'Сума\', doctors.full_name as \'Ім\\'я доктора\', patients.room_no as \'Палата\', rooms.room_type as \'Тип палати\' FROM patients LEFT JOIN bills ON patients.bill_no = bills.bill_no LEFT JOIN doctors ON patients.doctor_id = doctors.doctor_id LEFT JOIN rooms ON patients.room_no = rooms.room_no; ", conn);
		}
		else if (this->permission == L"Волонтер") {
			return gcnew MySqlDataAdapter(L"SELECT patients.full_name AS \'Повне ім\\'я\', patients.age AS \'Вік\', patients.gender AS \'Стать\', patients.threatment AS \'Лікування\' FROM patients; ", conn);
		}
		else if (this->permission == L"Доктор") {
			return gcnew MySqlDataAdapter(L"SELECT patients.full_name AS \'Повне ім\\'я\', patients.age AS \'Вік\', patients.gender AS \'Стать\', patients.disease as \'Діагноз\', patients.threatment as \'Лікування\', doctors.full_name as \'Ім\\'я доктора\' FROM patients LEFT JOIN doctors ON patients.doctor_id = doctors.doctor_id LEFT JOIN rooms ON patients.room_no = rooms.room_no; ", conn);
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
		button8->BackColor = Color::FromArgb(128, 128, 255);

		tAllData = gcnew DataTable();

		////bringing information from the db to the form
		conn = gcnew MySqlConnection(this->connStr);
		conn->Open();

		da = SelectTheQuery(conn);

		//the query string
		da->Fill(tAllData);
		build = gcnew MySqlCommandBuilder(da);
		
		UpdateDataTables();

		ShowAll();
		
		//The functions below must always come after the StructurizeInfo func
		StructurizeInfo();

		StatSelectionLast(0);//assuming that the button7 is initialy chosen

		UpdateRatioChart();

		UpdateDonutChart();
	}


	private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
		conn->Close();
	}
	private: System::Void Donut_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(Donut, e);
	}
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
	private: System::Void chart2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(chart2, e);
	}
	private: System::Void button2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(button2, e, button2->Height - 5.f);
	}
	private: System::Void Ratio_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(Ratio, e);
	}
	private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(panel7, e);
	}
	private: System::Void button4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(button4, e, 45.f);
	}
	private: System::Void button6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(button6, e, 45.f);
	}
	private: System::Void button5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(button5, e, 45.f);
	}
	private: System::Void button7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(button7, e, 45.f);
	}
	private: System::Void button8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(button8, e, 55.f);
	}
	private: System::Void Update_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(Update, e, 55.f);
	}
	private: System::Void button1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
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
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultChartButtons();
		button7->BackColor = Color::FromArgb(128, 128, 255);
		StatSelectionLast(0);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultChartButtons();
		button5->BackColor = Color::FromArgb(128, 128, 255);
		StatSelectionLast(180);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultChartButtons();
		button6->BackColor = Color::FromArgb(128, 128, 255);
		StatSelectionLast(30);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultChartButtons();
		button4->BackColor = Color::FromArgb(128, 128, 255);
		StatSelectionLast(7);

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

		DefaultFilterButtons();
		button1->BackColor = Color::FromArgb(128, 128, 255);

		ShowOnlyCivil();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultFilterButtons();
		button2->BackColor = Color::FromArgb(128, 128, 255);

		ShowOnlyMilitary();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		DefaultFilterButtons();
		button8->BackColor = Color::FromArgb(128, 128, 255);

		ShowAll();
	}
	private: int currRow{-1};
	private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int colIdx = e->ColumnIndex;
		int rowIdx = e->RowIndex;
		//auto a = dataGridView1->Rows[rowIdx]->Cells[colIdx]->Value;
		//tAllData->Rows->Add(8, L"Петр Вишовок", L"Цивільний", 54, L'Ч', L"Нехтування правилами безпеки", L"Відчленування руки", L"Опреація", Convert::ToDateTime(L"2023-08-01"), 7, 1, 101);
		//auto s = tAllData->Rows[rowIdx]->RowState;
		
		//tAllData->Rows[rowIdx]->EndEdit();
		auto succ = da->Update(tAllData);//can't update primary keys
	}
	private: System::Void dataGridView1_RowLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int colIdx = e->ColumnIndex;
		int rowIdx = e->RowIndex;

		//DataTable^ newTable = gcnew DataTable();
		////add columns
		//for each (DataGridViewColumn ^ column in updGrid->Columns) {
		//	newTable->Columns->Add(column->HeaderText, column->ValueType);
		//}
		////add data to the rows
		//for each (DataGridViewRow ^ row in updGrid->Rows)		{
		//	DataRow^ drow = newTable->NewRow();
		//
		//	for (int i = 0; i < newTable->Columns->Count; i++)			{
		//		if(row->Cells[i]->Value != nullptr)
		//			drow[i] = row->Cells[i]->Value;
		//	}
		//	if (drow[0]->ToString() != L"") {
		//		newTable->Rows->Add(drow);//add only meaningful rows
		//	}
		//}
		
	}
	private: System::Void dataGridView1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		dataGridView1->Refresh();
	}
	private: System::Void dataGridView1_CellBeginEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^ e) {
		int colIdx = e->ColumnIndex;
		int rowIdx = e->RowIndex;
		// Check if the cell belongs to the specific row you want to restrict
		if (e->ColumnIndex == 0){
			e->Cancel = true;
		}
	}
	private: System::Void dataGridView1_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e) {
		if (dataGridView1->Focused) {
			da->Update(tAllData);
		}
	}
	private: System::Void Update_Click(System::Object^ sender, System::EventArgs^ e) {
		//MySqlDataAdapter^ adap = SelectTheQuery(conn);
		//adap->Fill();
		tAllData->Clear();
		da->Fill(tAllData);
	}
};
}