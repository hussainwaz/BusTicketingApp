#pragma once
#include"SEAT_PAYMENT.h"
namespace JOURNEZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LOCATION
	/// </summary>
	public ref class LOCATION : public System::Windows::Forms::Form
	{
		String^ name;
		String^ phone_no;
		String^ Email;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::ComboBox^ comboBox1;
		   Form^ homee;
	public:
		
		LOCATION(Form^Temp)
		{
			homee = Temp;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void setproperties(String^ nam,String^no,String^mail)
		{
			name = nam;
			phone_no = no;
			Email = mail;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LOCATION()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LOCATION::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(409, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(251, 233);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LOCATION::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(690, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(251, 233);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LOCATION::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(992, 175);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(251, 233);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &LOCATION::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(409, 447);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(251, 233);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &LOCATION::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(690, 447);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(251, 233);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &LOCATION::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(992, 447);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(251, 233);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &LOCATION::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(34, 175);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(332, 505);
			this->button7->TabIndex = 7;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &LOCATION::button7_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1280, 720);
			this->panel1->TabIndex = 8;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LOCATION::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->dateTimePicker1);
			this->panel2->Controls->Add(this->button17);
			this->panel2->Controls->Add(this->button16);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1280, 720);
			this->panel2->TabIndex = 16;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LOCATION::panel2_Paint);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Silver;
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::Color::DarkOrange;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::Black;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(546, 320);
			this->dateTimePicker1->MaxDate = System::DateTime(2024, 4, 19, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2024, 4, 15, 11, 52, 29, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 27);
			this->dateTimePicker1->TabIndex = 9;
			this->dateTimePicker1->Value = System::DateTime(2024, 4, 15, 11, 52, 29, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &LOCATION::dateTimePicker1_ValueChanged);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Transparent;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(959, 64);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(53, 44);
			this->button17->TabIndex = 1;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &LOCATION::button17_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(582, 541);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(126, 48);
			this->button16->TabIndex = 0;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &LOCATION::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(34, 22);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(114, 47);
			this->button15->TabIndex = 15;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &LOCATION::button15_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(34, 175);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(332, 505);
			this->button8->TabIndex = 14;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &LOCATION::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(992, 447);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(251, 233);
			this->button9->TabIndex = 13;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &LOCATION::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(690, 447);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(251, 233);
			this->button10->TabIndex = 12;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &LOCATION::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(409, 447);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(251, 233);
			this->button11->TabIndex = 11;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &LOCATION::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(992, 175);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(251, 233);
			this->button12->TabIndex = 10;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &LOCATION::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(690, 175);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(251, 233);
			this->button13->TabIndex = 9;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &LOCATION::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(409, 175);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(251, 233);
			this->button14->TabIndex = 8;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &LOCATION::button14_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Transparent;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(21, 22);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(140, 53);
			this->button18->TabIndex = 9;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &LOCATION::button18_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownHeight = 70;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"01:00 AM", L"02:00 AM", L"03:00 AM", L"04:00 AM",
					L"05:00 AM", L"06:00 AM", L"07:00 AM", L"08:00 AM", L"09:00 AM", L"10:00 AM", L"11:00 AM", L"12:00 PM", L"01:00 PM", L"02:00 PM",
					L"03:00 PM", L"04:00 PM", L"05:00 PM", L"06:00 PM", L"07:00 PM", L"08:00 PM", L"09:00 PM", L"10:00 PM", L"11:00 PM", L"12:00 AM"
			});
			this->comboBox1->Location = System::Drawing::Point(546, 434);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 28);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->Text = L"    Select Time";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &LOCATION::comboBox1_SelectedIndexChanged);
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &LOCATION::comboBox1_KeyPress);
			// 
			// LOCATION
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button18);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"LOCATION";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LOCATION";
			this->Load += gcnew System::EventHandler(this, &LOCATION::LOCATION_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	String^ currentL = "";
	String^ destL = "";
	private: System::Void LOCATION_Load(System::Object^ sender, System::EventArgs^ e) {}

	//Current Location --------------------------
	//-------------------------------------
		   int x = 0;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	currentL = "Lahore";
	MessageBox::Show("Proceeded to destination");
	this->panel1->Visible = true;
	x = 800;
}
	
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	currentL = "Karachi";
	MessageBox::Show("Proceeded to destination");
	this->panel1->Visible = true;
	x = 1700;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	currentL = "Sargodha";
	MessageBox::Show("Proceeded to destination");
	this->panel1->Visible = true;
	x = 300;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	currentL = "Peshawar";
	MessageBox::Show("Proceeded to destination");
	this->panel1->Visible = true;
	x = 0;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	currentL = "Multan";
	MessageBox::Show("Proceeded to destination");
	this->panel1->Visible = true;
	x = 600;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	currentL = "Faisalabad";
	MessageBox::Show("Proceeded to destination");
	this->panel1->Visible = true;
	x = 400;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	currentL = "Islamabad";
	MessageBox::Show("Proceeded to destination");
	this->panel1->Visible = true;
	x = 190;
}
	   int y = 0;
	   //---------------------------------------------------
	   //Destination selection checks
	   //  -------------------------------------------------
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentL != "Islamabad")
	{
		MessageBox::Show("Destination selected successfully");
		destL = "Islamabad";
		this->panel2->Visible = true;
		y = 190;
	}

	else { MessageBox::Show("Selected destination can't be your current location"); }
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentL != "Faisalabad") { MessageBox::Show("Destination selected successfully"); 
	destL = "Faisalabad";
	y = 400;
	this->panel2->Visible = true;
	}

	else { MessageBox::Show("Selected destination can't be your current location"); }
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentL != "Lahore") { MessageBox::Show("Destination selected successfully"); 
	destL = "Lahore";
	y = 800;
	this->panel2->Visible = true;
	}

	else { MessageBox::Show("Selected destination can't be your current location"); }
}

private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentL != "Multan") { MessageBox::Show("Destination selected successfully"); 
	destL = "Multan";
	y = 600;
	this->panel2->Visible = true;
	}

	else { MessageBox::Show("Selected destination can't be your current location"); }
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentL != "Peshawar") { MessageBox::Show("Destination selected successfully"); 
	destL = "Peshawar";
	y = 0;
	this->panel2->Visible = true;
	}

	else { MessageBox::Show("Selected destination can't be your current location"); }
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentL != "Sargodha") { MessageBox::Show("Destination selected successfully");
	destL = "Sargodha";
	y = 300;
	this->panel2->Visible = true;
	}

	else { MessageBox::Show("Selected destination can't be your current location"); }
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentL != "Karachi") { MessageBox::Show("Destination selected successfully");
	destL = "Karachi";
	y = 1700;
	this->panel2->Visible = true;
	}

	else { MessageBox::Show("Selected destination can't be your current location"); }
}
	   //---------------------------------------------
	   //back button
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel1->Visible = false;
}
	   //back button
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel2->Visible = false;
}
	   
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (date != "" && time != "")
	{
		SEAT_PAYMENT^ Form = gcnew SEAT_PAYMENT(this);
		panel2->Visible = false;
		this->Hide();

		Form->setproperties(name, phone_no, Email);
		Form->sethome(homee);
		Form->setdest(destL);
		Form->setcurr(currentL);
		Form->setdate(date);
		Form->settime(time);
		Form->setprice(x, y);
		Form->Show();
	}
	else
		MessageBox::Show("Enter date and Time first");
}
String^ date="";
	   System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		   // Get the selected date from the DateTimePicker
		   date = dateTimePicker1->Text;
	   }
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
	
}
private: System::Void comboBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e->Handled = true;
}
	   String^ time="";
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	time = comboBox1->Text;
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	homee->Show();

}
};
}
