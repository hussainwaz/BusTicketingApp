#pragma once
#include<fstream>
#include<msclr/marshal_cppstd.h>
#include<iostream>
namespace JOURNEZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for reception
	/// </summary>
	public ref class reception : public System::Windows::Forms::Form
	{
		Form^ homee;
		String^ name;
		String^ phone;
		
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
		   String^ Email;
		   String^ seat;
		   String^ destination;
		   String^current;
		   String^ date;
		   String^ tome;
	private: System::Windows::Forms::Label^ label9;
		   String^ bus;

	public:
		string convertTostd(String^ CONVERTER)
		{
			return msclr::interop::marshal_as<string>(CONVERTER);
		}
	

		void setdate(String^ dateee)
		{
			label4->Text = dateee;
			
			date=dateee;
		}
		void sethome(Form^ temp)
		{
			homee = temp;
		}

		void setreceipt(String^curr,String^dest,String^seatt)
		{
			label1->Text = curr;
			label2->Text = dest;
			label3->Text = seatt;
			seat = seatt;
			destination = dest;
			current = curr;
			
		}
		void setproperties(String^ nam, String^ no, String^ mail,String^time,String^busss)
		{
			name = nam;
			phone = no;
			Email = mail;
			tome = time;
			bus = busss;


			label5->Text = name;
			label6->Text = phone;
			label7->Text = Email;
			label8->Text = tome;
			label9->Text = bus;
			

		}
		reception(void)
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
		~reception()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(reception::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(152, 289);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(330, 289);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(974, 289);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(29, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 50);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &reception::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(460, 289);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(211, 535);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(546, 535);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(908, 535);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 24);
			this->label7->TabIndex = 7;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(766, 289);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 24);
			this->label8->TabIndex = 8;
			this->label8->Text = L"label8";
			this->label8->Click += gcnew System::EventHandler(this, &reception::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(150, 152);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 25);
			this->label9->TabIndex = 9;
			this->label9->Text = L"label9";
			// 
			// reception
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"reception";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"reception";
			this->Load += gcnew System::EventHandler(this, &reception::reception_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		homee->Show();
	}
private: System::Void reception_Load(System::Object^ sender, System::EventArgs^ e) {

	//User tickets detials are converted from system string to std string to store in file
	int noofrec = 1;
	string seat2 = convertTostd(seat);
	string dest2 = convertTostd(destination);
	string current2 = convertTostd(current);
	string username = convertTostd(name);
	string Date = convertTostd(date);
	string Time = convertTostd(tome);
	string bussss = convertTostd(bus);
	ofstream out;
	ifstream in;
	//Here we open every receipt file one by one to see f it alredy contains user data because we want to save data in correct file as one file cannot contain 
	//data for two tickets for same user
	//this is manaed by two bools and one int named noofrec
	//we open files one by one and search for username if it has user name means that the user has alredy booked ticket for this text file and noofrec is incremented
	in.open("receipt.txt");

	string line;
	bool found = false;
	bool opened = false;
	while (in >> line)
	{
		if (line == username)
		{
			found = true;
			noofrec++;
			line = "";
			break;

		}
	}
	if (!found)
	{
		out.open("receipt.txt", std::ios::app);
		opened = true;
	}
	found = false;
	in.close();
	in.open("receipt2.txt");
	while (getline(in, line))
	{
		if (line == username)
		{
			found = true;
			noofrec++;
			line = "";
			break;
		}
	}
	if (!found && !opened)
	{
		out.open("receipt2.txt", std::ios::app);
		opened = true;
	}
	in.close();
	found = false;
	in.open("receipt3.txt");
	while (getline(in, line))
	{
		if (line == username)
		{
			found = true;
			noofrec++;
			line = "";
			break;
		}
	}
	if (!found && !opened)
	{
		out.open("receipt3.txt", std::ios::app);
		opened = true;
	}

	in.close();
	found = false;
	in.open("receipt4.txt");
	while (getline(in, line))
	{
		if (line == username)
		{
			found = true;
			noofrec++;
			line = "";
			break;
		}
	}
	if (!found && !opened)
	{
		out.open("receipt4.txt", std::ios::app);
		opened = true;
	}
	in.close();


	//here user data which was previously converte to std string is stored in correct file
	out << username << endl;
	out << bussss << endl;
	out << current2 << endl;
	out << dest2 << endl;
	out << Date << endl;
	out << Time << endl;
	out << seat2 << endl;
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
