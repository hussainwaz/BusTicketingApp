#pragma once
#include"reception.h"
#include<cmath>
#include<msclr/marshal_cppstd.h>
#include<fstream>
namespace JOURNEZ {

	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for SEAT_PAYMENT
	/// </summary>
	public ref class SEAT_PAYMENT : public System::Windows::Forms::Form
	{
		

		Form^ prevform;
		String^ name;
		String^ phone;
		String^ Email;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;

		   Form^ homee;
		   int z;
		   int x;
		   int y;
		   int price;
		   int pricecopy;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label14;
		  
	public:
		String^ convertTonet(string CONVERTER)
		{
			return msclr::interop::marshal_as<String^>(CONVERTER);
		}
		string converttostd(String^ CONVERTER)
		{
			return msclr::interop::marshal_as<string>(CONVERTER);
		}
		void showprice()
		{
			price = 0;
			z = abs(y - x);
			 price = z * 5;
			 if (value == 2)
			 {
				 price += price*0.30;
			 }
			 else if (value == 3)
			 {
				 price += price*0.15;
			 }
			 pricecopy = price;

		}
		void setprice(int c, int d)
		{
			price = 0;
			this->x = c;
			this->y = d;
		}
		void settime(String^ timee)
		{
			label11->Text = timee;
			label12->Text = timee;
			label13->Text = timee;
			label17->Text = timee;
		}
		void setdate(String^ datee) 
		{
			label10->Text = datee;
		}
		void sethome(Form^temp)
		{
			homee = temp;
		}
		void setdest(String^ dest)
		{
			this->dest1->Text = dest;
			this->dest2->Text = dest;
			this->dest3->Text = dest;
			this->label8->Text = dest;
		}
		void setcurr(String^ curr)
		{
			this->curr1->Text = curr;
			this->curr2->Text = curr;
			this->curr3->Text = curr;
			this->label7->Text = curr;

		}
		void setproperties(String^ nam, String^ no, String^ mail)
		{
			name = nam;
			phone = no;
			Email = mail;
		}
		SEAT_PAYMENT(Form^prev)
		{
			prevform = prev;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SEAT_PAYMENT()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ curr1;
	protected:

	private: System::Windows::Forms::Label^ dest1;
	private: System::Windows::Forms::Label^ curr2;
	protected:


	private: System::Windows::Forms::Label^ dest2;
	private: System::Windows::Forms::Label^ curr3;


	private: System::Windows::Forms::Label^ dest3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Button^ A1;




	private: System::Windows::Forms::Button^ E1;

	private: System::Windows::Forms::Button^ D1;
private: System::Windows::Forms::Button^ C2;
private: System::Windows::Forms::Button^ A2;



private: System::Windows::Forms::Button^ B1;

	private: System::Windows::Forms::Button^ E4;

	private: System::Windows::Forms::Button^ E3;

	private: System::Windows::Forms::Button^ D3;
	private: System::Windows::Forms::Button^ H2;


	private: System::Windows::Forms::Button^ H1;

	private: System::Windows::Forms::Button^ G2;

	private: System::Windows::Forms::Button^ F2;

	private: System::Windows::Forms::Button^ F1;
	private: System::Windows::Forms::Button^ H4;


	private: System::Windows::Forms::Button^ H3;
	private: System::Windows::Forms::Button^ G4;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button14;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SEAT_PAYMENT::typeid));
			this->curr1 = (gcnew System::Windows::Forms::Label());
			this->dest1 = (gcnew System::Windows::Forms::Label());
			this->curr2 = (gcnew System::Windows::Forms::Label());
			this->dest2 = (gcnew System::Windows::Forms::Label());
			this->curr3 = (gcnew System::Windows::Forms::Label());
			this->dest3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->H4 = (gcnew System::Windows::Forms::Button());
			this->H3 = (gcnew System::Windows::Forms::Button());
			this->G4 = (gcnew System::Windows::Forms::Button());
			this->E4 = (gcnew System::Windows::Forms::Button());
			this->E3 = (gcnew System::Windows::Forms::Button());
			this->D3 = (gcnew System::Windows::Forms::Button());
			this->H2 = (gcnew System::Windows::Forms::Button());
			this->H1 = (gcnew System::Windows::Forms::Button());
			this->G2 = (gcnew System::Windows::Forms::Button());
			this->F2 = (gcnew System::Windows::Forms::Button());
			this->F1 = (gcnew System::Windows::Forms::Button());
			this->E1 = (gcnew System::Windows::Forms::Button());
			this->D1 = (gcnew System::Windows::Forms::Button());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->A2 = (gcnew System::Windows::Forms::Button());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->A1 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// curr1
			// 
			this->curr1->AutoSize = true;
			this->curr1->BackColor = System::Drawing::Color::Transparent;
			this->curr1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->curr1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->curr1->Location = System::Drawing::Point(405, 205);
			this->curr1->Name = L"curr1";
			this->curr1->Size = System::Drawing::Size(70, 25);
			this->curr1->TabIndex = 0;
			this->curr1->Text = L"label1";
			// 
			// dest1
			// 
			this->dest1->AutoSize = true;
			this->dest1->BackColor = System::Drawing::Color::Transparent;
			this->dest1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dest1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dest1->Location = System::Drawing::Point(756, 205);
			this->dest1->Name = L"dest1";
			this->dest1->Size = System::Drawing::Size(70, 25);
			this->dest1->TabIndex = 1;
			this->dest1->Text = L"label2";
			// 
			// curr2
			// 
			this->curr2->AutoSize = true;
			this->curr2->BackColor = System::Drawing::Color::Transparent;
			this->curr2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->curr2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->curr2->Location = System::Drawing::Point(405, 423);
			this->curr2->Name = L"curr2";
			this->curr2->Size = System::Drawing::Size(70, 25);
			this->curr2->TabIndex = 2;
			this->curr2->Text = L"label3";
			this->curr2->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::label3_Click);
			// 
			// dest2
			// 
			this->dest2->AutoSize = true;
			this->dest2->BackColor = System::Drawing::Color::Transparent;
			this->dest2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dest2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dest2->Location = System::Drawing::Point(756, 423);
			this->dest2->Name = L"dest2";
			this->dest2->Size = System::Drawing::Size(70, 25);
			this->dest2->TabIndex = 3;
			this->dest2->Text = L"label4";
			// 
			// curr3
			// 
			this->curr3->AutoSize = true;
			this->curr3->BackColor = System::Drawing::Color::Transparent;
			this->curr3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->curr3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->curr3->Location = System::Drawing::Point(405, 640);
			this->curr3->Name = L"curr3";
			this->curr3->Size = System::Drawing::Size(70, 25);
			this->curr3->TabIndex = 4;
			this->curr3->Text = L"label5";
			this->curr3->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::label5_Click);
			// 
			// dest3
			// 
			this->dest3->AutoSize = true;
			this->dest3->BackColor = System::Drawing::Color::Transparent;
			this->dest3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dest3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dest3->Location = System::Drawing::Point(756, 640);
			this->dest3->Name = L"dest3";
			this->dest3->Size = System::Drawing::Size(70, 25);
			this->dest3->TabIndex = 5;
			this->dest3->Text = L"label6";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(90, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Niazi Express";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(90, 304);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Daewoo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(90, 527);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Skyways";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(90, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 24);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Departure";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(90, 391);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 24);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Departure";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(90, 606);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Departure";
			this->label6->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::label6_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1103, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 43);
			this->button1->TabIndex = 12;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(1103, 427);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 44);
			this->button2->TabIndex = 13;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(1103, 642);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 45);
			this->button3->TabIndex = 14;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 42);
			this->button4->TabIndex = 15;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->H4);
			this->panel1->Controls->Add(this->H3);
			this->panel1->Controls->Add(this->G4);
			this->panel1->Controls->Add(this->E4);
			this->panel1->Controls->Add(this->E3);
			this->panel1->Controls->Add(this->D3);
			this->panel1->Controls->Add(this->H2);
			this->panel1->Controls->Add(this->H1);
			this->panel1->Controls->Add(this->G2);
			this->panel1->Controls->Add(this->F2);
			this->panel1->Controls->Add(this->F1);
			this->panel1->Controls->Add(this->E1);
			this->panel1->Controls->Add(this->D1);
			this->panel1->Controls->Add(this->C2);
			this->panel1->Controls->Add(this->A2);
			this->panel1->Controls->Add(this->B1);
			this->panel1->Controls->Add(this->A1);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1280, 720);
			this->panel1->TabIndex = 16;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SEAT_PAYMENT::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1280, 720);
			this->panel2->TabIndex = 20;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SEAT_PAYMENT::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->button14);
			this->panel3->Controls->Add(this->button13);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1280, 720);
			this->panel3->TabIndex = 5;
			this->panel3->Visible = false;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SEAT_PAYMENT::panel3_Paint);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(437, 369);
			this->textBox5->MaxLength = 12;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(249, 24);
			this->textBox5->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(175, 465);
			this->textBox4->MaxLength = 3;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(488, 24);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &SEAT_PAYMENT::textBox4_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(161, 369);
			this->textBox7->MaxLength = 12;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(249, 24);
			this->textBox7->TabIndex = 6;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &SEAT_PAYMENT::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(167, 274);
			this->textBox6->MaxLength = 16;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(488, 24);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &SEAT_PAYMENT::textBox6_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(162, 367);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(249, 24);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(180, 272);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(488, 24);
			this->textBox2->TabIndex = 5;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(499, 580);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(69, 23);
			this->label15->TabIndex = 3;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(500, 585);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(73, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"                      ";
			this->label16->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::label16_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(500, 153);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"label10";
			this->label10->Visible = false;
			// 
			// button14
			// 
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(841, 568);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(249, 47);
			this->button14->TabIndex = 1;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(1234, 0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(46, 42);
			this->button13->TabIndex = 0;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button13_Click);
			// 
			// button12
			// 
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(1076, 621);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(119, 57);
			this->button12->TabIndex = 4;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button12_Click);
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(22, 12);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(115, 54);
			this->button11->TabIndex = 3;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button11_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(140, 105);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 29);
			this->label9->TabIndex = 2;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(874, 364);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 29);
			this->label8->TabIndex = 1;
			this->label8->Text = L"label8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(874, 199);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 29);
			this->label7->TabIndex = 0;
			this->label7->Text = L"label7";
			this->label7->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::label7_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(979, 657);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 23);
			this->label14->TabIndex = 6;
			this->label14->Text = L"label14";
			this->label14->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::label14_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(154, 630);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(311, 28);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SEAT_PAYMENT::textBox1_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label17->Location = System::Drawing::Point(170, 311);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(92, 29);
			this->label17->TabIndex = 8;
			this->label17->Text = L"label17";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(1131, 26);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(125, 40);
			this->button10->TabIndex = 18;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button10_Click);
			// 
			// H4
			// 
			this->H4->BackColor = System::Drawing::Color::Transparent;
			this->H4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H4->FlatAppearance->BorderSize = 0;
			this->H4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->H4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->H4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->H4->Location = System::Drawing::Point(968, 579);
			this->H4->Name = L"H4";
			this->H4->Size = System::Drawing::Size(30, 30);
			this->H4->TabIndex = 16;
			this->H4->UseVisualStyleBackColor = false;
			this->H4->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::H4_Click);
			// 
			// H3
			// 
			this->H3->BackColor = System::Drawing::Color::Transparent;
			this->H3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H3->FlatAppearance->BorderSize = 0;
			this->H3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->H3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->H3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->H3->Location = System::Drawing::Point(921, 579);
			this->H3->Name = L"H3";
			this->H3->Size = System::Drawing::Size(30, 30);
			this->H3->TabIndex = 15;
			this->H3->UseVisualStyleBackColor = false;
			this->H3->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::H3_Click);
			// 
			// G4
			// 
			this->G4->BackColor = System::Drawing::Color::Transparent;
			this->G4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G4->FlatAppearance->BorderSize = 0;
			this->G4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->G4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->G4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->G4->Location = System::Drawing::Point(968, 532);
			this->G4->Name = L"G4";
			this->G4->Size = System::Drawing::Size(30, 30);
			this->G4->TabIndex = 14;
			this->G4->UseVisualStyleBackColor = false;
			this->G4->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::G4_Click);
			// 
			// E4
			// 
			this->E4->BackColor = System::Drawing::Color::Transparent;
			this->E4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E4->FlatAppearance->BorderSize = 0;
			this->E4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->E4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->E4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->E4->Location = System::Drawing::Point(968, 441);
			this->E4->Name = L"E4";
			this->E4->Size = System::Drawing::Size(30, 30);
			this->E4->TabIndex = 13;
			this->E4->UseVisualStyleBackColor = false;
			this->E4->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::E4_Click);
			// 
			// E3
			// 
			this->E3->BackColor = System::Drawing::Color::Transparent;
			this->E3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E3->FlatAppearance->BorderSize = 0;
			this->E3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->E3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->E3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->E3->Location = System::Drawing::Point(921, 441);
			this->E3->Name = L"E3";
			this->E3->Size = System::Drawing::Size(30, 30);
			this->E3->TabIndex = 12;
			this->E3->UseVisualStyleBackColor = false;
			this->E3->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::E3_Click);
			// 
			// D3
			// 
			this->D3->BackColor = System::Drawing::Color::Transparent;
			this->D3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3->FlatAppearance->BorderSize = 0;
			this->D3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->D3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->D3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->D3->Location = System::Drawing::Point(921, 394);
			this->D3->Name = L"D3";
			this->D3->Size = System::Drawing::Size(30, 30);
			this->D3->TabIndex = 11;
			this->D3->UseVisualStyleBackColor = false;
			this->D3->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::D3_Click);
			// 
			// H2
			// 
			this->H2->BackColor = System::Drawing::Color::Transparent;
			this->H2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H2->FlatAppearance->BorderSize = 0;
			this->H2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->H2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->H2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->H2->Location = System::Drawing::Point(729, 579);
			this->H2->Name = L"H2";
			this->H2->Size = System::Drawing::Size(30, 30);
			this->H2->TabIndex = 10;
			this->H2->UseVisualStyleBackColor = false;
			this->H2->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::H2_Click);
			// 
			// H1
			// 
			this->H1->BackColor = System::Drawing::Color::Transparent;
			this->H1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H1->FlatAppearance->BorderSize = 0;
			this->H1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->H1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->H1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->H1->Location = System::Drawing::Point(682, 579);
			this->H1->Name = L"H1";
			this->H1->Size = System::Drawing::Size(30, 30);
			this->H1->TabIndex = 9;
			this->H1->UseVisualStyleBackColor = false;
			this->H1->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::H1_Click);
			// 
			// G2
			// 
			this->G2->BackColor = System::Drawing::Color::Transparent;
			this->G2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G2->FlatAppearance->BorderSize = 0;
			this->G2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->G2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->G2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->G2->Location = System::Drawing::Point(729, 532);
			this->G2->Name = L"G2";
			this->G2->Size = System::Drawing::Size(30, 30);
			this->G2->TabIndex = 8;
			this->G2->UseVisualStyleBackColor = false;
			this->G2->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::G2_Click);
			// 
			// F2
			// 
			this->F2->BackColor = System::Drawing::Color::Transparent;
			this->F2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F2->FlatAppearance->BorderSize = 0;
			this->F2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->F2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->F2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->F2->Location = System::Drawing::Point(729, 487);
			this->F2->Name = L"F2";
			this->F2->Size = System::Drawing::Size(30, 30);
			this->F2->TabIndex = 7;
			this->F2->UseVisualStyleBackColor = false;
			this->F2->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::F2_Click);
			// 
			// F1
			// 
			this->F1->BackColor = System::Drawing::Color::Transparent;
			this->F1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F1->FlatAppearance->BorderSize = 0;
			this->F1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->F1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->F1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->F1->Location = System::Drawing::Point(682, 487);
			this->F1->Name = L"F1";
			this->F1->Size = System::Drawing::Size(30, 30);
			this->F1->TabIndex = 6;
			this->F1->UseVisualStyleBackColor = false;
			this->F1->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::F1_Click);
			// 
			// E1
			// 
			this->E1->BackColor = System::Drawing::Color::Transparent;
			this->E1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E1->FlatAppearance->BorderSize = 0;
			this->E1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->E1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->E1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->E1->Location = System::Drawing::Point(682, 441);
			this->E1->Name = L"E1";
			this->E1->Size = System::Drawing::Size(30, 30);
			this->E1->TabIndex = 5;
			this->E1->UseVisualStyleBackColor = false;
			this->E1->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::E1_Click);
			// 
			// D1
			// 
			this->D1->BackColor = System::Drawing::Color::Transparent;
			this->D1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1->FlatAppearance->BorderSize = 0;
			this->D1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->D1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->D1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->D1->Location = System::Drawing::Point(682, 394);
			this->D1->Name = L"D1";
			this->D1->Size = System::Drawing::Size(30, 30);
			this->D1->TabIndex = 4;
			this->D1->UseVisualStyleBackColor = false;
			this->D1->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::D1_Click);
			// 
			// C2
			// 
			this->C2->BackColor = System::Drawing::Color::Transparent;
			this->C2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2->FlatAppearance->BorderSize = 0;
			this->C2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->C2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->C2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->C2->Location = System::Drawing::Point(940, 308);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(41, 40);
			this->C2->TabIndex = 3;
			this->C2->UseVisualStyleBackColor = false;
			this->C2->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button8_Click);
			// 
			// A2
			// 
			this->A2->BackColor = System::Drawing::Color::Transparent;
			this->A2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2->FlatAppearance->BorderSize = 0;
			this->A2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->A2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->A2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->A2->Location = System::Drawing::Point(940, 190);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(41, 40);
			this->A2->TabIndex = 2;
			this->A2->UseVisualStyleBackColor = false;
			this->A2->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button7_Click);
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::Color::Transparent;
			this->B1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1->FlatAppearance->BorderSize = 0;
			this->B1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->B1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->B1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->B1->Location = System::Drawing::Point(697, 250);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(41, 40);
			this->B1->TabIndex = 1;
			this->B1->UseVisualStyleBackColor = false;
			this->B1->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button6_Click);
			// 
			// A1
			// 
			this->A1->BackColor = System::Drawing::Color::Transparent;
			this->A1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1->FlatAppearance->BorderSize = 0;
			this->A1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->A1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->A1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->A1->Location = System::Drawing::Point(697, 190);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(41, 40);
			this->A1->TabIndex = 0;
			this->A1->UseVisualStyleBackColor = false;
			this->A1->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button5_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button9->Location = System::Drawing::Point(22, 23);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(123, 43);
			this->button9->TabIndex = 17;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &SEAT_PAYMENT::button9_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label11->Location = System::Drawing::Point(87, 209);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(68, 30);
			this->label11->TabIndex = 17;
			this->label11->Text = L"label1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label12->Location = System::Drawing::Point(87, 423);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(68, 30);
			this->label12->TabIndex = 18;
			this->label12->Text = L"label1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label13->Location = System::Drawing::Point(87, 640);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(68, 30);
			this->label13->TabIndex = 19;
			this->label13->Text = L"label1";
			// 
			// SEAT_PAYMENT
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dest3);
			this->Controls->Add(this->curr3);
			this->Controls->Add(this->dest2);
			this->Controls->Add(this->curr2);
			this->Controls->Add(this->dest1);
			this->Controls->Add(this->curr1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"SEAT_PAYMENT";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SEAT_PAYMENT";
			this->Load += gcnew System::EventHandler(this, &SEAT_PAYMENT::SEAT_PAYMENT_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	String^ Seat = "";
	bool condition = false;
	
	//----------------------------------------------

	private: System::Windows::Forms::Button^ selectedButton;
	void SetSelectedButtonColor(System::Windows::Forms::Button^ button)
	{
		if (selectedButton != nullptr)
		{
			selectedButton->BackColor = System::Drawing::Color::Transparent;
		}
		selectedButton = button;
		button->BackColor = System::Drawing::Color::FromArgb(232, 58, 58);
	}
   // Function to handle button clicks
	void HandleButtonClick(System::Windows::Forms::Button^ button)
	{
		SetSelectedButtonColor(button);
	}
	//-----------------------------------------------

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SEAT_PAYMENT_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	this->prevform->Show();
}
	   int value = 0;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel1->Visible = true;
	label9->Text = "Niazi Express";
	value = 1;
	showprice();


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel1->Visible = true;
	label9->Text = "Daewoo";
	value = 2;
	showprice();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel1->Visible = true;
	label9->Text = "Skyways";
	value = 3;
	showprice();
}
	   int busseat = 0;
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "A1 (Business)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 1;
	condition = true;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "A2 (Business)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 1;
	condition = true;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "B1 (Business)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 1;
	condition = true;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "C2 (Business)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 1;
	condition = true;
}
private: System::Void D1_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "D1 (Executive)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 0;
	condition = true;
}
private: System::Void H3_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "H3 (Executive)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 0;
	condition = true;
}
private: System::Void G4_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "G4 (Executive)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 0;
	condition = true;
}
private: System::Void E4_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "E4 (Executive)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 0;
	condition = true;
}
private: System::Void E3_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "E3 (Executive)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 0;
	condition = true;
}
private: System::Void D3_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "D3 (Executive)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 0;
	condition = true;
}
private: System::Void H2_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "H2 (Executive)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 0;
	condition = true;
}
private: System::Void H1_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "H1 (Executive)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 0;
	condition = true;
}
private: System::Void G2_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "G2 (Executive)";
	busseat = 0;
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	condition = true;
}
private: System::Void F2_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "F2 (Executive)";
	busseat = 0;
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	condition = true;
}
private: System::Void F1_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "F1 (Executive)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 0;
	condition = true;
}
private: System::Void E1_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "E1 (Executive)";
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	busseat = 0;
	condition = true;
}
private: System::Void H4_Click(System::Object^ sender, System::EventArgs^ e) {
	Seat = "H4 (Executive)";
	busseat = 0;
	HandleButtonClick(dynamic_cast<System::Windows::Forms::Button^>(sender));
	condition = true;

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	A1->BackColor = System::Drawing::Color::Transparent;
	A2->BackColor = System::Drawing::Color::Transparent;
	B1->BackColor = System::Drawing::Color::Transparent;
	C2->BackColor = System::Drawing::Color::Transparent;
	D1->BackColor = System::Drawing::Color::Transparent;
	D3->BackColor = System::Drawing::Color::Transparent;
	E1->BackColor = System::Drawing::Color::Transparent;
	E3->BackColor = System::Drawing::Color::Transparent;
	E4->BackColor = System::Drawing::Color::Transparent;
	F1->BackColor = System::Drawing::Color::Transparent;
	F2->BackColor = System::Drawing::Color::Transparent;
	G2->BackColor = System::Drawing::Color::Transparent;
	G4->BackColor = System::Drawing::Color::Transparent;
	H1->BackColor = System::Drawing::Color::Transparent;
	H2->BackColor = System::Drawing::Color::Transparent;
	H3->BackColor = System::Drawing::Color::Transparent;
	H4->BackColor = System::Drawing::Color::Transparent;
	condition = false;


	this->panel1->Visible = false;
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	price = pricecopy;
	this->panel2->Visible = false;
	//busseat = 0;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (condition)
	{
		this->panel2->Visible = true;
		//string ne = masrshal_as<String^>(to_string(price));
		if (busseat == 1)
		{
			price += price * 0.125;
		}
		label14->Text = price.ToString();
	}
	else {
		MessageBox::Show("Seat must be selected to proceed");
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isvoucherapplied)
	{
		MessageBox::Show("You have applied a vouvher so You ain't going back now!", " Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
		panel3->Visible = false;
}
	   bool isvoucherapplied = false;
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Discount voucher selection
	tempp = textBox1->Text;
	string username = converttostd(name);
	string temp;
	temp = converttostd(tempp);
	bool found = false;
	string discount[3]{ "FUSOB12","YFPOS59","IOMAN99" };
	for (int i = 0; i < 3; i++)
	{
		if (temp == discount[i])
		{
			found = true;
			break;
		}

	}
	//storing and checking stored vouchers
	ifstream in;
	ofstream out;
	if (found)
	{
		string temp2[3]{ "" };
		bool used = false;
		in.open(username+".txt");
		for (int i = 0; i < 3; i++)
		{
			in >> temp2[i];
		}
		for (int i = 0; i < 3; i++)
		{
			if (temp == temp2[i])
			{
				MessageBox::Show("Voucher has already been used");
				used = true;
			}
		}
		in.close();
		if (!used)
		{
			out.open(username + ".txt", std::ios::app);
			out << temp << endl;
			MessageBox::Show("Your voucher is applied");
			isvoucherapplied = true;
			//price -= 200;
			if (temp == discount[0])
			{
				price = price - (price * 20 / 100);
			}
			else if (temp == discount[1])
			{
				price = price - (price * 15 / 100);
			}
			else if (temp == discount[2])
			{
				price = price - (price * 10 / 100);
			}
			panel3->Visible = true;
		}
		out.close();
	}
	else if (textBox1->Text == "")
	{
		panel3->Visible = true;
	}
	else 
		MessageBox::Show("Invalid entry");

	

	label14->Text = price.ToString();//conversion from int to system string
	
	label15->Text = price.ToString();
	
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e)
{
	//error checking for card number
	if (textBox6->Text == "") 
	{
		MessageBox::Show("Card Number Cannot be empty!");
		return;
	}
	std::string card = msclr::interop::marshal_as<std::string>(textBox6->Text);
	int zeroCount = 0;
	for (int i = 0; card[i] != '\0'; i++) {
		if (!(card[i] >= '1' && card[i] <= '9'))
			zeroCount++;
		else
			zeroCount--;
	}
	if (zeroCount >= 4) {
		MessageBox::Show("Card Number Invalid!");
		return;
	}
	//error checking for first name and last name
	if (textBox7->Text == "") {
		MessageBox::Show("First Name cannot be empty");
		return;
	}
	else if (textBox5->Text == "")
	{
		//MessageBox::Show("Last Name cannot have numbers or special characters");
		MessageBox::Show("Last Name cannot be empty!");
		return;
	}
	std::string firstName = msclr::interop::marshal_as<std::string>(textBox7->Text);
	std::string lastName = msclr::interop::marshal_as<std::string>(textBox5->Text);
	bool hasNums = false, hasSpecial = false;
	for (int i = 0; firstName[i]; i++) {
		if ((firstName[i] >= '0' && firstName[i] <= '9')) {
			hasNums = true;
			//break;
		}
		if (!(firstName[i] >= '0' && firstName[i] <= '9') && !((firstName[i] >= 'A' && firstName[i] <= 'Z') || (firstName[i] >= 'a' && firstName[i] <= 'z'))) {
			hasSpecial = true;
			//break;
		}
		if (hasNums && hasSpecial) {
			MessageBox::Show("First Name cannot have numbers or special characters");
			return;
		}
		else if (hasNums) {
			MessageBox::Show("First Name cannot have numbers");
			return;
		}
		else if (hasSpecial) {
			MessageBox::Show("First Name cannot have special characters");
			return;
		}
		
	}
	hasNums = false, hasSpecial = false;
	for (int i = 0; lastName[i]; i++)
	{
		if ((lastName[i] >= '0' && lastName[i] <= '9')) {
			hasNums = true;
			//break;
		}
		if (!(lastName[i] >= '0' && lastName[i] <= '9') && !((lastName[i] >= 'A' && lastName[i] <= 'Z') || (lastName[i] >= 'a' && lastName[i] <= 'z'))) {
			hasSpecial = true;
			//break;
		}
		if (hasNums && hasSpecial) {
			MessageBox::Show("last Name cannot have numbers or special characters");
			return;

		}
		else if (hasNums) {
			MessageBox::Show("last Name cannot have numbers");
			return;
		}
		else if (hasSpecial) {
			MessageBox::Show("last Name cannot have special characters");
			return;
		}
	}
	if (textBox6->Text->Length != 16)
	{
		MessageBox::Show("Invalid card-number (Must be 16 digit long)");
		return;

	}
	else if (textBox4->Text->Length != 3)
	{
		MessageBox::Show("Invalid CVV seurity code");
		return;
	}
	else if (textBox5->Text->Length != 0 && textBox7->Text->Length != 0)
	{
		reception^ form = gcnew reception();
		String^ l7 = label7->Text;
		String^ l8 = label8->Text;
		form->setproperties(name, phone, Email, label11->Text, label9->Text);
		form->setreceipt(l7, l8, Seat);
		form->sethome(homee);
		form->setdate(label10->Text);
		this->Hide();
		form->Show();
	}
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   String^ tempp;
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	for each (char c in textBox6->Text)
	{
		if (!Char::IsDigit(c))
		{
			// Clear the textbox if a non-digit character is found
			textBox6->Text = "";
			return;
		}
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	for each (char c in textBox4->Text)
	{
		if (!Char::IsDigit(c))
		{
			// Clear the textbox if a non-digit character is found
			textBox4->Text = "";
			return;
		}
	}
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	//seeing if already there is a booked seat in the same day bus time and showing red button there
	string busname, current, destination, time, date;
	busname = converttostd(label9->Text);
	current= converttostd(curr1->Text);
	destination = converttostd(dest1->Text);
	time = converttostd(label11->Text);
	date = converttostd(label10->Text);

	ifstream in;
	in.open("receipt.txt");
	string line;
	String^ buttonname;
	while (getline(in, line))
	{
		if (line == busname)
		{
			getline(in, line);
			if ( line== current)
			{
				getline(in, line);
				if (line == destination)
				{
					getline(in, line);
					if (line == date)
					{
						getline(in, line);
						if (line == time)
						{
							in >> line;
							 buttonname= convertTonet(line);
							System::Windows::Forms::Button^ button1 = dynamic_cast<System::Windows::Forms::Button^>(this->Controls->Find(buttonname, true)[0]);
							button1->BackColor = System::Drawing::Color::FromArgb(232, 58, 58);
							button1->Enabled = false;
						}
					}
				}
			}
		}
	}
	in.close();
	in.open("receipt2.txt");//for 2nd ticket
	while (getline(in, line))
	{
		if (line == busname)
		{
			getline(in, line);
			if (line == current)
			{
				getline(in, line);
				if (line == destination)
				{
					getline(in, line);
					if (line == date)
					{
						getline(in, line);
						if (line == time)
						{
							in >> line;
							buttonname = convertTonet(line);
							System::Windows::Forms::Button^ button1 = dynamic_cast<System::Windows::Forms::Button^>(this->Controls->Find(buttonname, true)[0]);
							button1->BackColor = System::Drawing::Color::FromArgb(232, 58, 58);
							button1->Enabled = false;

						}
					}
				}
			}
		}
	}
	in.close();
	in.open("receipt3.txt");//for 3rd ticket
	while (getline(in, line))
	{
		if (line == busname)
		{
			getline(in, line);
			if (line == current)
			{
				getline(in, line);
				if (line == destination)
				{
					getline(in, line);
					if (line == date)
					{
						getline(in, line);
						if (line == time)
						{
							in >> line;
							buttonname = convertTonet(line);
							System::Windows::Forms::Button^ button1 = dynamic_cast<System::Windows::Forms::Button^>(this->Controls->Find(buttonname, true)[0]);
							button1->BackColor = System::Drawing::Color::FromArgb(232, 58, 58);
							button1->Enabled = false;

						}
					}
				}
			}
		}
	}
	in.close();
	in.open("receipt4.txt");//for 4th ticket
	while (getline(in, line))
	{
		if (line == busname)
		{
			getline(in, line);
			if (line == current)
			{
				getline(in, line);
				if (line == destination)
				{
					getline(in, line);
					if (line == date)
					{
						getline(in, line);
						if (line == time)
						{
							in >> line;
							buttonname = convertTonet(line);
							System::Windows::Forms::Button^ button1 = dynamic_cast<System::Windows::Forms::Button^>(this->Controls->Find(buttonname, true)[0]);
							button1->BackColor = System::Drawing::Color::FromArgb(232, 58, 58);
							button1->Enabled = false;

						}
					}
				}
			}
		}
	}
	in.close();
}
};
}
