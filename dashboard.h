#pragma once
#include<fstream>
#include<msclr/marshal_cppstd.h>
#include<string>
namespace JOURNEZ {

	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for dashboard
	/// </summary>
	
	public ref class dashboard : public System::Windows::Forms::Form
	{
		Form^ prevform;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;

	private: System::Windows::Forms::Label^ label19;
	public:
		void setname(String^name)
		{
			label19->Text = name+"!";
		}
		static String^ name;
		String^ convertTonet(string CONVERTER)
		{
			return msclr::interop::marshal_as<String^>(CONVERTER);	
		}
		string convertTostd(String^ CONVERTER)
		{
			return msclr::interop::marshal_as<string>(CONVERTER);
		}
		void properties(String^ nam)
		{
			name = nam;
			
		}
		int noofrec = 0;
		void reverse(Form^ OBJ)
		{
			prevform = OBJ;

		}
		dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dashboard::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(21, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 55);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &dashboard::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(140, 271);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 24);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Current Location";
			this->label8->Click += gcnew System::EventHandler(this, &dashboard::label8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(481, 271);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Destination";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(672, 271);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 24);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Seat No";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(834, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 24);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(1090, 271);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 24);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Time";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(87, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 24);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Bus Service";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(140, 433);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 24);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Current Location";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(87, 549);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 24);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Bus Service";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(87, 381);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(121, 24);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Bus Service";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label10->Location = System::Drawing::Point(1090, 433);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 24);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Time";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label11->Location = System::Drawing::Point(834, 433);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 24);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Date";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label12->Location = System::Drawing::Point(672, 433);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(77, 24);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Seat No";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label13->Location = System::Drawing::Point(481, 433);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(102, 24);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Destination";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label14->Location = System::Drawing::Point(834, 598);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(48, 24);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Date";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label15->Location = System::Drawing::Point(672, 598);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(77, 24);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Seat No";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label16->Location = System::Drawing::Point(481, 598);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(102, 24);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Destination";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label17->Location = System::Drawing::Point(140, 598);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(148, 24);
			this->label17->TabIndex = 25;
			this->label17->Text = L"Current Location";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label18->Location = System::Drawing::Point(1090, 598);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(53, 24);
			this->label18->TabIndex = 26;
			this->label18->Text = L"Time";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(575, 335);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 30);
			this->button2->TabIndex = 27;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &dashboard::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(585, 495);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 31);
			this->button3->TabIndex = 28;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &dashboard::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(583, 657);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 33);
			this->button4->TabIndex = 29;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &dashboard::button4_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label19->Location = System::Drawing::Point(615, 121);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(69, 20);
			this->label19->TabIndex = 30;
			this->label19->Text = L"label19";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->panel1->Controls->Add(this->label20);
			this->panel1->Location = System::Drawing::Point(81, 222);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1122, 141);
			this->panel1->TabIndex = 31;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &dashboard::panel1_Paint);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(398, 48);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(303, 45);
			this->label20->TabIndex = 34;
			this->label20->Text = L"No Booked Tickets";
			this->label20->Click += gcnew System::EventHandler(this, &dashboard::label20_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->panel2->Controls->Add(this->label21);
			this->panel2->Location = System::Drawing::Point(67, 379);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1145, 145);
			this->panel2->TabIndex = 32;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(368, 52);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(393, 45);
			this->label21->TabIndex = 35;
			this->label21->Text = L"No More Booked Tickets";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->panel3->Controls->Add(this->label22);
			this->panel3->Location = System::Drawing::Point(67, 547);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1155, 141);
			this->panel3->TabIndex = 33;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(368, 49);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(393, 45);
			this->label22->TabIndex = 35;
			this->label22->Text = L"No More Booked Tickets";
			// 
			// dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"dashboard";
			this->Load += gcnew System::EventHandler(this, &dashboard::dashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this -> Hide();
		prevform->Show();
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
		   int count = 0;
		   static int cancel;
private: System::Void dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	//Here we open the receipt.txt file and find the username in the file if the name is found it means that the user has 
	//booked a ticket
	ifstream in;
	in.open("receipt.txt");
	string temp[7];
	string name2 = convertTostd(name);
	string line;
	while (getline(in, line))
	{
		if (line.find(name2) != string::npos)
		{
			temp[0] = name2;

			count++;
			noofrec++;
			break;
		}
	}
	//here the user data is loaded in temp array and converted to system string to show it in labels
	for (int i = 1; i < 7; i++)
	{
		getline(in, temp[i]);
	}
	String^ lol0 = convertTonet(temp[0]);
	String^ lol1 = convertTonet(temp[1]);
	String^ lol2 = convertTonet(temp[2]);
	String^ lol3 = convertTonet(temp[3]);
	String^ lol4 = convertTonet(temp[4]);
	String^ lol5 = convertTonet(temp[5]);
	String^ lol6 = convertTonet(temp[6]);

	

	//here the user data is assigned to different variables
	if (lol0 == name)
	{
		tic1 = false;
		label5->Text = lol1;
		label8->Text = lol2;
		label1->Text = lol3;
		label3->Text = lol4;
		label2->Text = lol6;
		label4->Text = lol5;
	}
	in.close();
	lol0 = "";
	temp[0] = "";
	ifstream in2;
	//same functionality is applied for receipt2, receipt3 and receipt 4 to find out if user has booked more than one ticket
	in2.open("receipt2.txt");
	
	string line2;
	while (getline(in2, line2))
	{
		if (line2.find(name2) != string::npos)
		{
			temp[0] = name2;
			count++;
			noofrec++;
			break;
		}
	}
	if (temp[0] != "")
	{
		
		for (int i = 1; i < 7; i++)
		{
			temp[i] = "";
			getline(in2, temp[i]);
		}
		lol0 = convertTonet(temp[0]);
		lol1 = convertTonet(temp[1]);
		lol2 = convertTonet(temp[2]);
		lol3 = convertTonet(temp[3]);
		lol4 = convertTonet(temp[4]);
		lol5 = convertTonet(temp[5]);
		lol6 = convertTonet(temp[6]);
		//this part is a little different because here first we swap the ticket 1 details in lower labels and show ticket2 details in place whre previouslt ticket 1 was shown. 
		//this is done to show latest ticket above the previous tickets
			if (lol0 == name)
			{
				tic2 = false;
				label9->Text = label5->Text;
				label6->Text = label8->Text;
				label13->Text = label1->Text;
				label11->Text = label3->Text;
				label12->Text = label2->Text;
				label10->Text = label4->Text;

				label5->Text = lol1;
				label8->Text = lol2;
				label1->Text = lol3;
				label3->Text = lol4;
				label2->Text = lol6;
				label4->Text = lol5;

			}
	}
	in2.close();
	lol0 = "";
	temp[0] = "";
	ifstream in3;
	//same as above
	in3.open("receipt3.txt");
	string line3;
	while (getline(in3, line3))
	{
		if (line3.find(name2) != string::npos)
		{
			temp[0] = name2;
			count++;
			noofrec++;
			break;
		}
	}
	if (temp[0] != "")
	{
		
		for (int i = 1; i < 7; i++)
		{
			temp[i] = "";
			getline(in3, temp[i]);
		}
		lol0 = convertTonet(temp[0]);
		lol1 = convertTonet(temp[1]);
		lol2 = convertTonet(temp[2]);
		lol3 = convertTonet(temp[3]);
		lol4 = convertTonet(temp[4]);
		lol5 = convertTonet(temp[5]);
		lol6 = convertTonet(temp[6]);

			if (lol0 == name)
			{
				tic3 = false;
				label7->Text = label9->Text;
				label17->Text = label6->Text;
				label16->Text = label13->Text;
				label14->Text = label11->Text;
				label15->Text = label12->Text;
				label18->Text = label10->Text;

				label9->Text = label5->Text;
				label6->Text = label8->Text;
				label13->Text = label1->Text;
				label11->Text = label3->Text;
				label12->Text = label2->Text;
				label10->Text = label4->Text;

				label5->Text = lol1;
				label8->Text = lol2;
				label1->Text = lol3;
				label3->Text = lol4;
				label2->Text = lol6;
				label4->Text = lol5;
			}
	}
	temp[0] = "";
	 in3.close();
	// in.open("receipt4.txt");
		 ifstream in4;
		 //same as above
		 in4.open("receipt4.txt");
		 string line4;
		 while (getline(in4, line4))
		 {
			 if (line4.find(name2) != string::npos)
			 {
				 temp[0] = name2;
				 count++;
				 noofrec++;
				 break;
			 }
		 }
		 if (temp[0] != "")
		 {
			 for (int i = 1; i < 7; i++)
			 {
				 temp[i] = "";
				 getline(in4, temp[i]);
			 }
			 lol0 = convertTonet(temp[0]);
			 lol1 = convertTonet(temp[1]);
			 lol2 = convertTonet(temp[2]);
			 lol3 = convertTonet(temp[3]);
			 lol4 = convertTonet(temp[4]);
			 lol5 = convertTonet(temp[5]);
			 lol6 = convertTonet(temp[6]);
				 if (lol0 == name)
				 {
					 label7->Text = label9->Text;
					 label17->Text = label6->Text;
					 label16->Text = label13->Text;
					 label14->Text = label11->Text;
					 label15->Text = label12->Text;
					 label18->Text = label10->Text;

					 label9->Text = label5->Text;
					 label6->Text = label8->Text;
					 label13->Text = label1->Text;
					 label11->Text = label3->Text;
					 label12->Text = label2->Text;
					 label10->Text = label4->Text;

					 label5->Text = lol1;
					 label8->Text = lol2;
					 label1->Text = lol3;
					 label3->Text = lol4;
					 label2->Text = lol6;
					 label4->Text = lol5;
				 }


		 }
	in4.close();
	//here we count the no og tickets that are to be shown in dashboard . if there is any empty space left then we show a label 
	//that shows no more booked tickes
	if (count == 1)
	{
		panel1->Visible = false;
		panel2->Visible = true;
		panel3->Visible = true;
	}
	else if (count == 2)
	{
		panel1->Visible = false;
		panel2->Visible = false;
		panel3->Visible = true;
	}
	else if (count == 3)
	{
		panel1->Visible = false;
		panel2->Visible = false;
		panel3->Visible = false;
	}
	else if (count == 4)
	{
		panel1->Visible = false;
		panel2->Visible = false;
		panel3->Visible = false;
	}
	else if (count == 0)
	{
		panel1->Visible = true;
		panel2->Visible = true;
		panel3->Visible = true;
	}


	if (count == 0)
	{
		cancel = 0;
	}
}
static bool tic1;
static bool tic2;
static bool tic3;
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//first a message box appears giving a warning and this function only preceeds if the user clicks yes
	System::Windows::Forms::DialogResult result = MessageBox::Show("Do you really want to cancel ticket", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		noofrec += cancel;
		string nametodelete = convertTostd(name);
		ofstream out;
		ifstream in;
		string fileName;
		//here we check which file to open so that we can delete user data from file these iff are complex because we are moving the latest tickests down and at any time user can 
		//book a new ticket and cancel a previous one as well
		if ((count == 1 && noofrec == 1&&tic1==false) || (count == 1 && noofrec == 2 && tic1 == false) || (count == 1 && noofrec == 3 && tic1 == false)|| count == 1 && noofrec == 4 && tic1 == false)
		{
			in.open("receipt.txt");
			fileName = "receipt.txt";
			count--;
			tic1 = true;
		}
		else if ((count == 2 && noofrec == 2&&tic2==false) || (count == 2 && noofrec == 3&&tic2==false)|| (count == 1 && noofrec == 2 && tic2 == false)|| (count == 1 && noofrec == 3 && tic2 == false)|| (count == 2 && noofrec == 4 && tic2 == false) || (count == 1 && noofrec == 4 && tic2 == false))
		{
			in.open("receipt2.txt");
			fileName = "receipt2.txt";
			count--;
			tic2 = true;
		}
		else if (count == 3&&noofrec==3&&tic3==false||count==2&&noofrec==3 && tic3 == false ||count==1&&noofrec==3 && tic3 == false || count == 3 && noofrec == 4 && tic3 == false || count == 2 && noofrec == 4 && tic3 == false || count == 1 && noofrec == 4 && tic3 == false)
		{
			in.open("receipt3.txt");
			fileName = "receipt3.txt";
			count--;
			tic3 = true;
		}
		else
		{
			in.open("receipt4.txt");
			fileName = "receipt4.txt";
			count--;
		}
		//a new file is created
		out.open("temp.txt");
		string line;
		// all user data excep the ticket to delete is copied in new file
		while (getline(in, line)) {
			if (line == nametodelete) {
				getline(in, line);
				getline(in, line);
				getline(in, line);
				getline(in, line);
				getline(in, line);
				getline(in, line);
				line = "";

			}
			else
				out << line << endl;
		}
		in.close();
		out.close();
		//original file is deleted and temp is renamed to original file and user is returned to homepage
		remove(fileName.c_str());
		rename("temp.txt", fileName.c_str());
		cancel++;
		MessageBox::Show("Your payment has been Refunded to your Account!", "Refund!", MessageBoxButtons::OK, MessageBoxIcon::Information);

		prevform->Show();
		this->Hide();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//first a message box appears giving a warning and this function only preceeds if the user clicks yes
	System::Windows::Forms::DialogResult result = MessageBox::Show("Do you really want to cancel ticket", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		noofrec += cancel;
		string nametodelete = convertTostd(name);
		ofstream out;
		ifstream in;
		string fileName;
		//here we check which file to open so that we can delete user data from file these iff are complex because we are moving the latest tickests down and at any time user can 
		//book a new ticket and cancel a previous one as well
		if (count == 2&&noofrec==2 && tic1 == false || count == 2 && noofrec == 3&&tic1==false|| count == 2 && noofrec == 4 && tic1 == false)
		{
			in.open("receipt.txt");
			fileName = "receipt.txt";
			count--;
			tic1 = true;
		}
		else if (count == 3 && noofrec == 3&&tic2==false|| count == 2 && noofrec == 3&&tic2 == false|| count == 3 && noofrec == 4 && tic2 == false|| count == 2 && noofrec == 4&&tic2 == false)
		{
			in.open("receipt2.txt");
			fileName = "receipt2.txt";
			count--;
			tic2 = true;
		}
		else
		{
			in.open("receipt3.txt");
			fileName = "receipt3.txt";
			count--;
			tic3 = true;
		}
		//a new file is created
		out.open("temp.txt");
		string line;
		// all user data excep the ticket to delete is copied in new file
		while (getline(in, line)) {
			if (line == nametodelete) {
				getline(in, line);
				getline(in, line);
				getline(in, line);
				getline(in, line);
				getline(in, line);
				getline(in, line);
				line = "";

			}
			else
				out << line << endl;
		}
		in.close();
		out.close();
		//original file is deleted and temp is renamed to original file and user is returned to homepage
		remove(fileName.c_str());
		rename("temp.txt", fileName.c_str());
		cancel++;
		MessageBox::Show("Your payment has been Refunded to your Account!", "Refund!", MessageBoxButtons::OK, MessageBoxIcon::Information);

		prevform->Show();
		this->Hide();
	}
}
	   
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//first a message box appears giving a warning and this function only preceeds if the user clicks yes
	System::Windows::Forms::DialogResult result = MessageBox::Show("Do you really want to cancel ticket", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if(result== System::Windows::Forms::DialogResult::Yes)

	{
		noofrec += cancel;
		string nametodelete = convertTostd(name);
		ofstream out;
		ifstream in;
		string fileName;
		//here we check which file to open so that we can delete user data from file these iff are complex because we are moving the latest tickests down and at any time user can 
		//book a new ticket and cancel a previous one as well
		if (count == 3)
		{
			in.open("receipt.txt");
			fileName = "receipt.txt";
			count--;
			tic1 = true;
		}
		else if (count == 4)
		{
			in.open("receipt2.txt");
			fileName = "receipt2.txt";
			count--;
			tic2 = true;
		}

		//a new file is created
		out.open("temp.txt");
		string line;
		// all user data excep the ticket to delete is copied in new file
		while (getline(in, line)) {
			if (line == nametodelete) {
				getline(in, line);
				getline(in, line);
				getline(in, line);
				getline(in, line);
				getline(in, line);
				getline(in, line);
				line = "";

			}
			else
				out << line << endl;
		}
		in.close();
		out.close();
		//original file is deleted and temp is renamed to original file and user is returned to homepage
		remove(fileName.c_str());
		rename("temp.txt", fileName.c_str());
		cancel++;
		MessageBox::Show("Your payment has been Refunded to your Account!", "Refund!", MessageBoxButtons::OK, MessageBoxIcon::Information);

		prevform->Show();
		this->Hide();
	}
	
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
static int cancel = 0;
static bool tic1 = false;
static bool tic2 = false;
static bool tic3 = false;