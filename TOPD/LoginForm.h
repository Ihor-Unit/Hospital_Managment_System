#pragma once
#include "MyForm.h"

namespace TOPD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void) {
			InitializeComponent();

			textBox3->Text = serverIP;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->SetStyle(System::Windows::Forms::ControlStyles::AllPaintingInWmPaint | System::Windows::Forms::ControlStyles::UserPaint | System::Windows::Forms::ControlStyles::OptimizedDoubleBuffer, true);
			this->UpdateStyles();
			this->SetStyle(System::Windows::Forms::ControlStyles::AllPaintingInWmPaint | System::Windows::Forms::ControlStyles::UserPaint | System::Windows::Forms::ControlStyles::OptimizedDoubleBuffer | System::Windows::Forms::ControlStyles::ResizeRedraw, false);
			System::Drawing::Text::TextRenderingHint::ClearTypeGridFit;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

		TOPD::MyForm MainForm;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;

		   String^ passwd = gcnew String(L'●', 0);
		   String^ serverIP = "localhost";
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
		   String^ connStr = nullptr;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->panel3 = (gcnew System::Windows::Forms::Panel());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // textBox1
			   // 
			   this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBox1->Location = System::Drawing::Point(227, 171);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(200, 27);
			   this->textBox1->TabIndex = 1;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(222, 141);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(125, 27);
			   this->label2->TabIndex = 0;
			   this->label2->Text = L"Username";
			   // 
			   // textBox2
			   // 
			   this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBox2->Location = System::Drawing::Point(227, 271);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(200, 27);
			   this->textBox2->TabIndex = 1;
			   this->textBox2->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox2_TextChanged);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(222, 241);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(115, 27);
			   this->label3->TabIndex = 0;
			   this->label3->Text = L"Password";
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->button1->FlatAppearance->BorderSize = 0;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->ForeColor = System::Drawing::Color::White;
			   this->button1->Location = System::Drawing::Point(246, 362);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(167, 51);
			   this->button1->TabIndex = 2;
			   this->button1->Text = L"Log in";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			   this->button1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::button1_Paint);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->ForeColor = System::Drawing::Color::Firebrick;
			   this->label4->Location = System::Drawing::Point(190, 319);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(266, 19);
			   this->label4->TabIndex = 3;
			   this->label4->Text = L"Incorrect username or password";
			   this->label4->Visible = false;
			   // 
			   // textBox3
			   // 
			   this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBox3->Location = System::Drawing::Point(227, 44);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(200, 27);
			   this->textBox3->TabIndex = 1;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(222, 14);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(121, 27);
			   this->label5->TabIndex = 0;
			   this->label5->Text = L"Server\'s IP";
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->panel1->Location = System::Drawing::Point(222, 302);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(220, 8);
			   this->panel1->TabIndex = 4;
			   // 
			   // panel2
			   // 
			   this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->panel2->Location = System::Drawing::Point(222, 201);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(220, 8);
			   this->panel2->TabIndex = 4;
			   // 
			   // panel3
			   // 
			   this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->panel3->Location = System::Drawing::Point(222, 75);
			   this->panel3->Name = L"panel3";
			   this->panel3->Size = System::Drawing::Size(220, 8);
			   this->panel3->TabIndex = 4;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::Firebrick;
			   this->label1->Location = System::Drawing::Point(238, 89);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(168, 19);
			   this->label1->TabIndex = 3;
			   this->label1->Text = L"Incorrect server\'s IP";
			   this->label1->Visible = false;
			   // 
			   // LoginForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::White;
			   this->ClientSize = System::Drawing::Size(654, 441);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->panel3);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label2);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"LoginForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Authentication";
			   this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::LoginForm_Paint);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Boolean SqlCheckUser(String^ user, String^ pass) {
		this->connStr = "server=" + serverIP + ";port=3306;database=mydb;uid=" + user + ";password=" + pass;
		MySqlConnection^ conn = gcnew MySqlConnection(this->connStr);

		try {
			conn->Open();

			MySqlCommand^ users = gcnew MySqlCommand("SELECT users.user_name, users.password, roles.role_name FROM users JOIN roles ON users.roles_id_role = roles.id_role", conn);
			MySqlDataReader^ read = users->ExecuteReader();

			while (read->Read()) {
				String^ qRes = read->GetString(0) + read->GetString(1);

				if (user + pass == qRes) {
					MainForm.permission = read->GetString(2);
					conn->Close();
					return true;
				}
			}
		}
		catch (...) {
			//MessageBox::Show(L"Не вийшло під'єднатися до серверу", L"Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			conn->Close();
			return false;
		}
		return false;
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text->Length < passwd->Length) {//handle deleting
			passwd = passwd->Remove(textBox2->Text->Length);
		}
		if (textBox2->Text->Length != 0) {
			
			int pos = textBox2->Text->Length - 1;
			String^ ins = Convert::ToString(textBox2->Text[pos]);

			if (ins[0] != L'●') passwd = gcnew String(passwd + ins);

			String^ stars = gcnew String(L'●', textBox2->Text->Length);
			textBox2->Text = stars;
			textBox2->SelectionStart = textBox2->Text->Length;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ user = textBox1->Text;

		serverIP = textBox3->Text;

		//passwd = "1111";//DELETE

		try {
			MySqlConnection^ conn = gcnew MySqlConnection("server="+serverIP+";port=3306;database=mydb;uid=testconnection;password=1111");
			conn->Open();
			label1->Visible = false;
			conn->Close();
		}
		catch (MySqlException^ e) {
			String^ what = e->Message;
			label1->Visible = true;
			return;
		}


		if (SqlCheckUser(user, passwd)) {
			MainForm.connStr = this->connStr;
			MainForm.Show();
			this->Hide();
		}
		else {
			label4->Visible = true;

			textBox1->Text = "";
			textBox2->Text = "";
			passwd = "";

			passwd = gcnew String(L'●', 0);
		}
	}
	private: System::Void button1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		MakeFigureRounded(button1, e, 48);
		
	}
	private: System::Void LoginForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		e->Graphics->SmoothingMode = SmoothingMode::AntiAlias;
		e->Graphics->TextRenderingHint = System::Drawing::Text::TextRenderingHint::ClearTypeGridFit;
	}
};
};

