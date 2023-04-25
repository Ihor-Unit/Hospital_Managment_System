#include "MyForm.h"
void TOPD::MyForm::InitializeComponent(void){
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
    this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
    this->Update = (gcnew System::Windows::Forms::Button());
    this->button3 = (gcnew System::Windows::Forms::Button());
    this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
    this->Ratio = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
    this->panel7 = (gcnew System::Windows::Forms::Panel());
    this->label9 = (gcnew System::Windows::Forms::Label());
    this->label10 = (gcnew System::Windows::Forms::Label());
    this->button4 = (gcnew System::Windows::Forms::Button());
    this->button5 = (gcnew System::Windows::Forms::Button());
    this->button6 = (gcnew System::Windows::Forms::Button());
    this->button7 = (gcnew System::Windows::Forms::Button());
    this->label8 = (gcnew System::Windows::Forms::Label());
    this->patients = (gcnew System::Windows::Forms::Button());
    this->doctors = (gcnew System::Windows::Forms::Button());
    this->rooms = (gcnew System::Windows::Forms::Button());
    this->panel1 = (gcnew System::Windows::Forms::Panel());
    this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
    this->Statistics = (gcnew System::Windows::Forms::TabPage());
    this->TheTable = (gcnew System::Windows::Forms::TabPage());
    this->panel6 = (gcnew System::Windows::Forms::Panel());
    this->panel5 = (gcnew System::Windows::Forms::Panel());
    this->textBox2 = (gcnew System::Windows::Forms::TextBox());
    this->textBox1 = (gcnew System::Windows::Forms::TextBox());
    this->comboFiltering = (gcnew System::Windows::Forms::ComboBox());
    this->show = (gcnew System::Windows::Forms::Button());
    this->label7 = (gcnew System::Windows::Forms::Label());
    this->label11 = (gcnew System::Windows::Forms::Label());
    this->label5 = (gcnew System::Windows::Forms::Label());
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Donut))->BeginInit();
    this->Civil->SuspendLayout();
    this->Military->SuspendLayout();
    this->panel3->SuspendLayout();
    this->panel4->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ratio))->BeginInit();
    this->panel7->SuspendLayout();
    this->panel1->SuspendLayout();
    this->tabControl1->SuspendLayout();
    this->Statistics->SuspendLayout();
    this->TheTable->SuspendLayout();
    this->SuspendLayout();
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
    this->dataGridView1->Location = System::Drawing::Point(8, 127);
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
    this->dataGridView1->Size = System::Drawing::Size(1465, 473);
    this->dataGridView1->TabIndex = 3;
    this->dataGridView1->CellBeginEdit += gcnew System::Windows::Forms::DataGridViewCellCancelEventHandler(this, &MyForm::dataGridView1_CellBeginEdit);
    this->dataGridView1->DataError += gcnew System::Windows::Forms::DataGridViewDataErrorEventHandler(this, &MyForm::dataGridView1_DataError);
    this->dataGridView1->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_RowEnter);
    this->dataGridView1->RowLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_RowLeave);
    this->dataGridView1->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &MyForm::dataGridView1_RowsRemoved);
    this->dataGridView1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::dataGridView1_Scroll);
    this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &MyForm::dataGridView1_SelectionChanged);
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
    this->Donut->Location = System::Drawing::Point(1178, 6);
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
    this->Donut->Size = System::Drawing::Size(317, 520);
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
    this->panel3->Location = System::Drawing::Point(8, 6);
    this->panel3->Name = L"panel3";
    this->panel3->Size = System::Drawing::Size(726, 160);
    this->panel3->TabIndex = 6;
    // 
    // panel4
    // 
    this->panel4->BackColor = System::Drawing::Color::White;
    this->panel4->Controls->Add(this->pictureBox5);
    this->panel4->Controls->Add(this->Update);
    this->panel4->Location = System::Drawing::Point(8, 6);
    this->panel4->Name = L"panel4";
    this->panel4->Size = System::Drawing::Size(241, 115);
    this->panel4->TabIndex = 7;
    this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
    // 
    // pictureBox5
    // 
    this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
    this->pictureBox5->Location = System::Drawing::Point(15, 33);
    this->pictureBox5->Name = L"pictureBox5";
    this->pictureBox5->Size = System::Drawing::Size(48, 45);
    this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
    this->pictureBox5->TabIndex = 3;
    this->pictureBox5->TabStop = false;
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
    this->Update->Location = System::Drawing::Point(76, 25);
    this->Update->Name = L"Update";
    this->Update->Size = System::Drawing::Size(144, 58);
    this->Update->TabIndex = 1;
    this->Update->Text = L"Зберегти додані рядки";
    this->Update->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
    this->Update->UseVisualStyleBackColor = false;
    this->Update->Click += gcnew System::EventHandler(this, &MyForm::Update_Click);
    this->Update->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Update_Paint);
    // 
    // button3
    // 
    this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(255)));
    this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
    this->button3->FlatAppearance->BorderSize = 0;
    this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->button3->ForeColor = System::Drawing::Color::White;
    this->button3->Location = System::Drawing::Point(564, 539);
    this->button3->Name = L"button3";
    this->button3->Size = System::Drawing::Size(417, 58);
    this->button3->TabIndex = 1;
    this->button3->Text = L"Оновити всі метрики відповідно до таблиці";
    this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
    this->button3->UseVisualStyleBackColor = false;
    this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
    this->button3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button3_Paint);
    // 
    // chart2
    // 
    this->chart2->BackImageTransparentColor = System::Drawing::SystemColors::Control;
    this->chart2->BackSecondaryColor = System::Drawing::SystemColors::Control;
    this->chart2->BorderlineColor = System::Drawing::SystemColors::Control;
    this->chart2->BorderSkin->PageColor = System::Drawing::SystemColors::Control;
    chartArea2->AxisX->MajorGrid->Enabled = false;
    chartArea2->AxisY->Interval = 1;
    chartArea2->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
    chartArea2->AxisY->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
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
    this->chart2->Location = System::Drawing::Point(8, 232);
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
    this->chart2->Size = System::Drawing::Size(1164, 293);
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
    chartArea3->AxisY->Interval = 1;
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
    this->Ratio->Location = System::Drawing::Point(2, 35);
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
    this->panel7->Controls->Add(this->Ratio);
    this->panel7->Location = System::Drawing::Point(740, 5);
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
    this->label10->Location = System::Drawing::Point(22, 188);
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
    this->button4->Location = System::Drawing::Point(364, 177);
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
    this->button5->Location = System::Drawing::Point(764, 177);
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
    this->button6->Location = System::Drawing::Point(564, 177);
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
    this->button7->Location = System::Drawing::Point(964, 177);
    this->button7->Name = L"button7";
    this->button7->Size = System::Drawing::Size(159, 49);
    this->button7->TabIndex = 1;
    this->button7->Text = L"Весь час";
    this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
    this->button7->UseVisualStyleBackColor = false;
    this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
    this->button7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button7_Paint);
    // 
    // label8
    // 
    this->label8->AutoSize = true;
    this->label8->BackColor = System::Drawing::Color::Transparent;
    this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label8->ForeColor = System::Drawing::Color::Black;
    this->label8->Location = System::Drawing::Point(54, 15);
    this->label8->Name = L"label8";
    this->label8->Size = System::Drawing::Size(377, 26);
    this->label8->TabIndex = 11;
    this->label8->Text = L"Оберіть таблицю для перегляду:";
    // 
    // patients
    // 
    this->patients->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(255)));
    this->patients->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
    this->patients->FlatAppearance->BorderSize = 0;
    this->patients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->patients->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->patients->ForeColor = System::Drawing::Color::White;
    this->patients->Location = System::Drawing::Point(482, 6);
    this->patients->Name = L"patients";
    this->patients->Size = System::Drawing::Size(144, 45);
    this->patients->TabIndex = 12;
    this->patients->Text = L"Пацієнти";
    this->patients->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
    this->patients->UseVisualStyleBackColor = false;
    this->patients->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
    this->patients->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button9_Paint);
    // 
    // doctors
    // 
    this->doctors->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(255)));
    this->doctors->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
    this->doctors->FlatAppearance->BorderSize = 0;
    this->doctors->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->doctors->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->doctors->ForeColor = System::Drawing::Color::White;
    this->doctors->Location = System::Drawing::Point(722, 6);
    this->doctors->Name = L"doctors";
    this->doctors->Size = System::Drawing::Size(144, 45);
    this->doctors->TabIndex = 12;
    this->doctors->Text = L"Доктори";
    this->doctors->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
    this->doctors->UseVisualStyleBackColor = false;
    this->doctors->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
    this->doctors->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button10_Paint);
    // 
    // rooms
    // 
    this->rooms->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(255)));
    this->rooms->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
    this->rooms->FlatAppearance->BorderSize = 0;
    this->rooms->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->rooms->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->rooms->ForeColor = System::Drawing::Color::White;
    this->rooms->Location = System::Drawing::Point(962, 6);
    this->rooms->Name = L"rooms";
    this->rooms->Size = System::Drawing::Size(144, 45);
    this->rooms->TabIndex = 12;
    this->rooms->Text = L"Палати";
    this->rooms->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
    this->rooms->UseVisualStyleBackColor = false;
    this->rooms->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
    this->rooms->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button11_Paint);
    // 
    // panel1
    // 
    this->panel1->BackColor = System::Drawing::Color::White;
    this->panel1->Controls->Add(this->doctors);
    this->panel1->Controls->Add(this->rooms);
    this->panel1->Controls->Add(this->label8);
    this->panel1->Controls->Add(this->patients);
    this->panel1->Location = System::Drawing::Point(255, 6);
    this->panel1->Name = L"panel1";
    this->panel1->Size = System::Drawing::Size(1218, 58);
    this->panel1->TabIndex = 13;
    this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
    // 
    // tabControl1
    // 
    this->tabControl1->Controls->Add(this->Statistics);
    this->tabControl1->Controls->Add(this->TheTable);
    this->tabControl1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->tabControl1->Location = System::Drawing::Point(0, 0);
    this->tabControl1->Name = L"tabControl1";
    this->tabControl1->SelectedIndex = 0;
    this->tabControl1->Size = System::Drawing::Size(1495, 645);
    this->tabControl1->TabIndex = 9;
    // 
    // Statistics
    // 
    this->Statistics->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
        static_cast<System::Int32>(static_cast<System::Byte>(251)));
    this->Statistics->Controls->Add(this->button3);
    this->Statistics->Controls->Add(this->panel3);
    this->Statistics->Controls->Add(this->chart2);
    this->Statistics->Controls->Add(this->label10);
    this->Statistics->Controls->Add(this->panel7);
    this->Statistics->Controls->Add(this->button7);
    this->Statistics->Controls->Add(this->button6);
    this->Statistics->Controls->Add(this->Donut);
    this->Statistics->Controls->Add(this->button5);
    this->Statistics->Controls->Add(this->button4);
    this->Statistics->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Statistics->Location = System::Drawing::Point(4, 30);
    this->Statistics->Name = L"Statistics";
    this->Statistics->Padding = System::Windows::Forms::Padding(3);
    this->Statistics->Size = System::Drawing::Size(1487, 611);
    this->Statistics->TabIndex = 0;
    this->Statistics->Text = L"Статистика";
    // 
    // TheTable
    // 
    this->TheTable->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
        static_cast<System::Int32>(static_cast<System::Byte>(251)));
    this->TheTable->Controls->Add(this->panel6);
    this->TheTable->Controls->Add(this->panel5);
    this->TheTable->Controls->Add(this->textBox2);
    this->TheTable->Controls->Add(this->textBox1);
    this->TheTable->Controls->Add(this->comboFiltering);
    this->TheTable->Controls->Add(this->show);
    this->TheTable->Controls->Add(this->dataGridView1);
    this->TheTable->Controls->Add(this->label7);
    this->TheTable->Controls->Add(this->label11);
    this->TheTable->Controls->Add(this->label5);
    this->TheTable->Controls->Add(this->panel1);
    this->TheTable->Controls->Add(this->panel4);
    this->TheTable->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->TheTable->Location = System::Drawing::Point(4, 30);
    this->TheTable->Name = L"TheTable";
    this->TheTable->Padding = System::Windows::Forms::Padding(3);
    this->TheTable->Size = System::Drawing::Size(1487, 611);
    this->TheTable->TabIndex = 1;
    this->TheTable->Text = L"Таблиця";
    // 
    // panel6
    // 
    this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(255)));
    this->panel6->Location = System::Drawing::Point(1056, 101);
    this->panel6->Name = L"panel6";
    this->panel6->Size = System::Drawing::Size(105, 8);
    this->panel6->TabIndex = 17;
    // 
    // panel5
    // 
    this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(255)));
    this->panel5->Location = System::Drawing::Point(904, 101);
    this->panel5->Name = L"panel5";
    this->panel5->Size = System::Drawing::Size(105, 8);
    this->panel5->TabIndex = 17;
    // 
    // textBox2
    // 
    this->textBox2->BackColor = System::Drawing::Color::White;
    this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
    this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->textBox2->Location = System::Drawing::Point(1058, 73);
    this->textBox2->Name = L"textBox2";
    this->textBox2->Size = System::Drawing::Size(100, 25);
    this->textBox2->TabIndex = 16;
    // 
    // textBox1
    // 
    this->textBox1->BackColor = System::Drawing::Color::White;
    this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
    this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->textBox1->Location = System::Drawing::Point(906, 73);
    this->textBox1->Name = L"textBox1";
    this->textBox1->Size = System::Drawing::Size(100, 25);
    this->textBox1->TabIndex = 16;
    // 
    // comboFiltering
    // 
    this->comboFiltering->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
    this->comboFiltering->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->comboFiltering->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->comboFiltering->FormattingEnabled = true;
    this->comboFiltering->Location = System::Drawing::Point(565, 75);
    this->comboFiltering->Name = L"comboFiltering";
    this->comboFiltering->Size = System::Drawing::Size(143, 31);
    this->comboFiltering->TabIndex = 15;
    this->comboFiltering->SelectionChangeCommitted += gcnew System::EventHandler(this, &MyForm::comboFiltering_SelectionChangeCommitted);
    this->comboFiltering->SelectedValueChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedValueChanged);
    // 
    // show
    // 
    this->show->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
        static_cast<System::Int32>(static_cast<System::Byte>(255)));
    this->show->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
    this->show->FlatAppearance->BorderSize = 0;
    this->show->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->show->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->show->ForeColor = System::Drawing::Color::White;
    this->show->Location = System::Drawing::Point(1201, 73);
    this->show->Name = L"show";
    this->show->Size = System::Drawing::Size(173, 45);
    this->show->TabIndex = 12;
    this->show->Text = L"Фільтрувати";
    this->show->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
    this->show->UseVisualStyleBackColor = false;
    this->show->Click += gcnew System::EventHandler(this, &MyForm::show_Click);
    this->show->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::button12_Paint);
    // 
    // label7
    // 
    this->label7->AutoSize = true;
    this->label7->BackColor = System::Drawing::Color::Transparent;
    this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label7->ForeColor = System::Drawing::Color::Black;
    this->label7->Location = System::Drawing::Point(1013, 78);
    this->label7->Name = L"label7";
    this->label7->Size = System::Drawing::Size(39, 26);
    this->label7->TabIndex = 11;
    this->label7->Text = L"по";
    // 
    // label11
    // 
    this->label11->AutoSize = true;
    this->label11->BackColor = System::Drawing::Color::Transparent;
    this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label11->ForeColor = System::Drawing::Color::Black;
    this->label11->Location = System::Drawing::Point(255, 80);
    this->label11->Name = L"label11";
    this->label11->Size = System::Drawing::Size(307, 26);
    this->label11->TabIndex = 11;
    this->label11->Text = L"Оберіть рядок для пошуку";
    // 
    // label5
    // 
    this->label5->AutoSize = true;
    this->label5->BackColor = System::Drawing::Color::Transparent;
    this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label5->ForeColor = System::Drawing::Color::Black;
    this->label5->Location = System::Drawing::Point(714, 78);
    this->label5->Name = L"label5";
    this->label5->Size = System::Drawing::Size(187, 26);
    this->label5->TabIndex = 11;
    this->label5->Text = L"Показати дані з";
    // 
    // MyForm
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->AutoSize = true;
    this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
    this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
        static_cast<System::Int32>(static_cast<System::Byte>(251)));
    this->ClientSize = System::Drawing::Size(1503, 655);
    this->Controls->Add(this->tabControl1);
    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
    this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
    this->MaximumSize = System::Drawing::Size(1900, 1080);
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
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ratio))->EndInit();
    this->panel7->ResumeLayout(false);
    this->panel7->PerformLayout();
    this->panel1->ResumeLayout(false);
    this->panel1->PerformLayout();
    this->tabControl1->ResumeLayout(false);
    this->Statistics->ResumeLayout(false);
    this->Statistics->PerformLayout();
    this->TheTable->ResumeLayout(false);
    this->TheTable->PerformLayout();
    this->ResumeLayout(false);

}