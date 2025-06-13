#pragma once
#include"LOCATION.h"
#include<fstream>
#include<string>
#include<msclr/marshal_cppstd.h>
#include"dashboard.h"
namespace JOURNEZ {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HOME
	/// </summary>
	public ref class HOME : public System::Windows::Forms::Form
	{
	Form^ prevform;

	String^ revname;
	/*String^ name;
	String^ phone_no;
	String^ Email;*/
	private: System::Windows::Forms::TextBox^ COMMENTBOX;
	private: System::Windows::Forms::Button^ button10;
		   

	public:
		String^ name;
		String^ phone_no;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox2;
	public:
		String^ Email;

		//function for getting name-----------------
		void setproperties(String^nam,String^no,String^mail)
		{
			name = nam;
			phone_no = no;
			Email = mail;
		}
		void properties(String^ nam)
		{
			name = nam;
		}

		//function 2 for storing review----------------------
		void SaveTextFile(String^ text)
		{
			String^ n = name;
			string COMMENTOR = msclr::interop::marshal_as<string>(n);
			string comment = msclr::interop::marshal_as<string>(text);
			ofstream outFile("1.txt");
			if (outFile.is_open())
			{
				outFile << COMMENTOR << endl;
				outFile << comment;
				outFile.close();
			}
		}

		//function 3 for loading review----------------------------------
		String^ loadtextfromfile(String^ filepath)
		{
			string PATH = msclr::interop::marshal_as<string>(filepath);
			string naaaaam;
			string COMMENT;

			ifstream inFile(PATH);

			if (inFile.is_open())
			{
				getline(inFile, naaaaam);
				getline(inFile, COMMENT);
				inFile.close();
			}
			revname = msclr::interop::marshal_as<String^>(naaaaam);
			return gcnew String(COMMENT.c_str());
		}

		//constructor
		HOME(Form^temp)
		{
			prevform = temp;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			COMMENTBOX->Text = loadtextfromfile("1.txt");//Revire Loading into reviewe section
			NAMELAB->Text = revname;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HOME()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ customerbtn;
	private: System::Windows::Forms::Panel^ CUSTOMER;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ QNA;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Panel^ SUPPORT;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ REVIEWS;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ NAMELAB;

	private: System::Windows::Forms::Button^ button9;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HOME::typeid));
			this->customerbtn = (gcnew System::Windows::Forms::Button());
			this->CUSTOMER = (gcnew System::Windows::Forms::Panel());
			this->QNA = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SUPPORT = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->REVIEWS = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->COMMENTBOX = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->NAMELAB = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->CUSTOMER->SuspendLayout();
			this->QNA->SuspendLayout();
			this->SUPPORT->SuspendLayout();
			this->REVIEWS->SuspendLayout();
			this->SuspendLayout();
			// 
			// customerbtn
			// 
			this->customerbtn->BackColor = System::Drawing::Color::Transparent;
			this->customerbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->customerbtn->FlatAppearance->BorderSize = 0;
			this->customerbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->customerbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->customerbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->customerbtn->Location = System::Drawing::Point(479, 700);
			this->customerbtn->Name = L"customerbtn";
			this->customerbtn->Size = System::Drawing::Size(201, 13);
			this->customerbtn->TabIndex = 0;
			this->customerbtn->UseVisualStyleBackColor = false;
			this->customerbtn->Click += gcnew System::EventHandler(this, &HOME::customerbtn_Click);
			// 
			// CUSTOMER
			// 
			this->CUSTOMER->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CUSTOMER.BackgroundImage")));
			this->CUSTOMER->Controls->Add(this->QNA);
			this->CUSTOMER->Controls->Add(this->SUPPORT);
			this->CUSTOMER->Controls->Add(this->button3);
			this->CUSTOMER->Controls->Add(this->button2);
			this->CUSTOMER->Controls->Add(this->button1);
			this->CUSTOMER->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CUSTOMER->Location = System::Drawing::Point(0, 0);
			this->CUSTOMER->Name = L"CUSTOMER";
			this->CUSTOMER->Size = System::Drawing::Size(1280, 720);
			this->CUSTOMER->TabIndex = 1;
			this->CUSTOMER->Visible = false;
			// 
			// QNA
			// 
			this->QNA->BackColor = System::Drawing::SystemColors::Window;
			this->QNA->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QNA.BackgroundImage")));
			this->QNA->Controls->Add(this->button5);
			this->QNA->Controls->Add(this->button4);
			this->QNA->Controls->Add(this->richTextBox1);
			this->QNA->Dock = System::Windows::Forms::DockStyle::Fill;
			this->QNA->Location = System::Drawing::Point(0, 0);
			this->QNA->Name = L"QNA";
			this->QNA->Size = System::Drawing::Size(1280, 720);
			this->QNA->TabIndex = 3;
			this->QNA->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(964, 600);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(133, 56);
			this->button5->TabIndex = 1;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &HOME::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(198, 600);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 56);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &HOME::button4_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->richTextBox1->Location = System::Drawing::Point(198, 417);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(883, 131);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"  Type here....";
			this->richTextBox1->Click += gcnew System::EventHandler(this, &HOME::richTextBox1_Click);
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &HOME::richTextBox1_TextChanged);
			// 
			// SUPPORT
			// 
			this->SUPPORT->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SUPPORT.BackgroundImage")));
			this->SUPPORT->Controls->Add(this->textBox1);
			this->SUPPORT->Controls->Add(this->button6);
			this->SUPPORT->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SUPPORT->Location = System::Drawing::Point(0, 0);
			this->SUPPORT->Name = L"SUPPORT";
			this->SUPPORT->Size = System::Drawing::Size(1280, 720);
			this->SUPPORT->TabIndex = 3;
			this->SUPPORT->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Red;
			this->textBox1->Location = System::Drawing::Point(80, 218);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(1121, 417);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(578, 641);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 50);
			this->button6->TabIndex = 0;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &HOME::button6_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(684, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(384, 419);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &HOME::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(210, 201);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(384, 419);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &HOME::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(32, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 59);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &HOME::button1_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(77, 526);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(534, 134);
			this->button7->TabIndex = 2;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &HOME::button7_Click);
			// 
			// REVIEWS
			// 
			this->REVIEWS->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"REVIEWS.BackgroundImage")));
			this->REVIEWS->Controls->Add(this->textBox2);
			this->REVIEWS->Controls->Add(this->COMMENTBOX);
			this->REVIEWS->Controls->Add(this->button9);
			this->REVIEWS->Controls->Add(this->NAMELAB);
			this->REVIEWS->Controls->Add(this->richTextBox2);
			this->REVIEWS->Controls->Add(this->button8);
			this->REVIEWS->Dock = System::Windows::Forms::DockStyle::Fill;
			this->REVIEWS->Location = System::Drawing::Point(0, 0);
			this->REVIEWS->Name = L"REVIEWS";
			this->REVIEWS->Size = System::Drawing::Size(1280, 720);
			this->REVIEWS->TabIndex = 3;
			this->REVIEWS->Visible = false;
			this->REVIEWS->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &HOME::REVIEWS_Paint);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox2->Location = System::Drawing::Point(733, 555);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(466, 98);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"Best Experience! Very Good app!";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &HOME::textBox2_KeyPress);
			// 
			// COMMENTBOX
			// 
			this->COMMENTBOX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->COMMENTBOX->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->COMMENTBOX->Cursor = System::Windows::Forms::Cursors::Default;
			this->COMMENTBOX->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->COMMENTBOX->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->COMMENTBOX->Location = System::Drawing::Point(77, 554);
			this->COMMENTBOX->Multiline = true;
			this->COMMENTBOX->Name = L"COMMENTBOX";
			this->COMMENTBOX->Size = System::Drawing::Size(466, 98);
			this->COMMENTBOX->TabIndex = 5;
			this->COMMENTBOX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &HOME::COMMENTBOX_KeyPress);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(944, 339);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(111, 45);
			this->button9->TabIndex = 4;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &HOME::button9_Click);
			// 
			// NAMELAB
			// 
			this->NAMELAB->AutoSize = true;
			this->NAMELAB->BackColor = System::Drawing::Color::Transparent;
			this->NAMELAB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NAMELAB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->NAMELAB->Location = System::Drawing::Point(109, 497);
			this->NAMELAB->Name = L"NAMELAB";
			this->NAMELAB->Size = System::Drawing::Size(0, 20);
			this->NAMELAB->TabIndex = 2;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->richTextBox2->Location = System::Drawing::Point(221, 228);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(834, 88);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"Type here ...";
			this->richTextBox2->Click += gcnew System::EventHandler(this, &HOME::richTextBox2_Click);
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &HOME::richTextBox2_TextChanged);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(36, 24);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(122, 54);
			this->button8->TabIndex = 0;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &HOME::button8_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(77, 205);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(534, 139);
			this->button10->TabIndex = 4;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &HOME::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(77, 368);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(534, 139);
			this->button11->TabIndex = 5;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &HOME::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(1213, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(57, 69);
			this->button12->TabIndex = 6;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &HOME::button12_Click);
			// 
			// HOME
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->REVIEWS);
			this->Controls->Add(this->CUSTOMER);
			this->Controls->Add(this->customerbtn);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"HOME";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HOME";
			this->CUSTOMER->ResumeLayout(false);
			this->QNA->ResumeLayout(false);
			this->SUPPORT->ResumeLayout(false);
			this->SUPPORT->PerformLayout();
			this->REVIEWS->ResumeLayout(false);
			this->REVIEWS->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void customerbtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		CUSTOMER->Visible = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		CUSTOMER->Visible = false;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	QNA->Visible = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	QNA->Visible = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	// submit query button
	//Error Checking

	string temp = msclr::interop::marshal_as<string>(richTextBox1->Text);
	int count1 = 0;

	bool hasMultipleSpaces = false;
	

	for (int i = 0; temp[i] != '\0'; i++) {
		count1++;
	}
	//consective spaces
	for (int i = 0; temp[i] != '\0'; i++) {
		if (i >= 1 && temp[i - 1] == ' ' && temp[i] == ' ') {
			hasMultipleSpaces = true;
			break;
		}
	}

	if (richTextBox1->Text == "  Type here...." || richTextBox1->Text == "" || count1 <= 15)
	{
		MessageBox::Show("Please Enter Something, atleast 15 characters long! ");
	}
	else if (hasMultipleSpaces) {
		MessageBox::Show("Too many spaces!");
	}
	else
	{
		MessageBox::Show("Your query has been sent ,we will answer you question as soon as possible on the your email ");
		richTextBox1->Text = "Type here....";
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SUPPORT->Visible = true;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	SUPPORT->Visible = false;
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void richTextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Text = ""; // Clear the text
	richTextBox1->Enabled = true; // Enable the RichTextBox for keyboard input
	richTextBox1->Focus();   // Set focus to the RichTextBox for keyboard input
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	REVIEWS->Visible = true;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	REVIEWS->Visible = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	//Review submition
	//Error checking same as query submition
	std::string temp = msclr::interop::marshal_as<std::string>(richTextBox2->Text);
	int count = 0;
	bool hasMultipleSpaces = false;
	for (int i = 0; temp[i] != '\0'; i++) { 
		count++; 
	}
	for (int i = 0; temp[i] != '\0'; i++) {
		if (i >= 1 && temp[i - 1] == ' ' && temp[i] == ' ') {
			hasMultipleSpaces = true;
			break;
		}
	}
	if (richTextBox2->Text == "Type here ..." || richTextBox2->Text == ""|| count<=15)
	{
		MessageBox::Show("Please Enter Something, atleast 15 characters long!");
	}
	else if (hasMultipleSpaces) {
		MessageBox::Show("Too many spaces!");
	}
	else
	{
		MessageBox::Show("Your response has been submitted successfully ");
		SaveTextFile(richTextBox2->Text);
		COMMENTBOX->Text = richTextBox2->Text;
		NAMELAB->Text = name;
		richTextBox2->Text = "Type here....";
	}

}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void richTextBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox2->Text = "";
}
private: System::Void REVIEWS_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void COMMENTBOX_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
     e->Handled=true;
}

	   //Book a ticket button
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	LOCATION^ D = gcnew LOCATION(this);
	this->Hide();
	D->setproperties(name, phone_no, Email);
	D->Show();
}

	   //Dashboard button
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	dashboard^ form = gcnew dashboard();
	this->Hide();
	form->setname(name);
	form->reverse(this);//going back to home
	form->Show();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	prevform->Show();
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = true;
}
};

}
