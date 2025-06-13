#pragma once
#include<fstream>
#include<msclr/marshal_cppstd.h>
#include"HOME.h"
namespace JOURNEZ {
	using std::string;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SIGNUP
	/// </summary>
	public ref class SIGNUP : public System::Windows::Forms::Form
	{
	public:

		//convert .NET string into c++ string
		string convertTostd(String^ CONVERTER)
		{
			return msclr::interop::marshal_as<string>(CONVERTER);
		}
		//convert c++ string into .NET string
		String^ convertTonet(string CONVERTER)
		{
			return msclr::interop::marshal_as<String^>(CONVERTER);
		}
		SIGNUP(void)
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
		~SIGNUP()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Username;
	private: System::Windows::Forms::TextBox^ Password;
	protected:



	private: System::Windows::Forms::Button^ LOGINBTN;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Panel^ termsPanel;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ signupPanel;
	private: System::Windows::Forms::Button^ SIGNUPBTN;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ MOBILEBOX;
	private: System::Windows::Forms::TextBox^ PAS2;
	private: System::Windows::Forms::TextBox^ PAS1;
	private: System::Windows::Forms::TextBox^ EMAILBOX;
	private: System::Windows::Forms::TextBox^ USERNAMEBOX;

	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label1;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SIGNUP::typeid));
			this->Username = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->LOGINBTN = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->termsPanel = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->signupPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->MOBILEBOX = (gcnew System::Windows::Forms::TextBox());
			this->PAS2 = (gcnew System::Windows::Forms::TextBox());
			this->PAS1 = (gcnew System::Windows::Forms::TextBox());
			this->EMAILBOX = (gcnew System::Windows::Forms::TextBox());
			this->USERNAMEBOX = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SIGNUPBTN = (gcnew System::Windows::Forms::Button());
			this->termsPanel->SuspendLayout();
			this->signupPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Username
			// 
			this->Username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username->Location = System::Drawing::Point(80, 376);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(323, 19);
			this->Username->TabIndex = 0;
			// 
			// Password
			// 
			this->Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password->Location = System::Drawing::Point(80, 473);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(323, 19);
			this->Password->TabIndex = 1;
			this->Password->UseSystemPasswordChar = true;
			// 
			// LOGINBTN
			// 
			this->LOGINBTN->BackColor = System::Drawing::Color::Transparent;
			this->LOGINBTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LOGINBTN->FlatAppearance->BorderSize = 0;
			this->LOGINBTN->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->LOGINBTN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->LOGINBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LOGINBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LOGINBTN->ForeColor = System::Drawing::Color::White;
			this->LOGINBTN->Location = System::Drawing::Point(109, 567);
			this->LOGINBTN->Name = L"LOGINBTN";
			this->LOGINBTN->Size = System::Drawing::Size(102, 62);
			this->LOGINBTN->TabIndex = 2;
			this->LOGINBTN->Text = L"LOG-IN";
			this->LOGINBTN->UseVisualStyleBackColor = false;
			this->LOGINBTN->Click += gcnew System::EventHandler(this, &SIGNUP::LOGINBTN_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(269, 567);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 62);
			this->button1->TabIndex = 3;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SIGNUP::button1_Click);
			// 
			// termsPanel
			// 
			this->termsPanel->BackColor = System::Drawing::Color::Silver;
			this->termsPanel->Controls->Add(this->button3);
			this->termsPanel->Controls->Add(this->textBox2);
			this->termsPanel->Controls->Add(this->label5);
			this->termsPanel->Location = System::Drawing::Point(264, 116);
			this->termsPanel->Name = L"termsPanel";
			this->termsPanel->Size = System::Drawing::Size(757, 527);
			this->termsPanel->TabIndex = 9;
			this->termsPanel->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(315, 457);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 55);
			this->button3->TabIndex = 2;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &SIGNUP::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.2F));
			this->textBox2->ForeColor = System::Drawing::Color::DarkRed;
			this->textBox2->Location = System::Drawing::Point(76, 105);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(603, 338);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = resources->GetString(L"textBox2.Text");
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(265, 46);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(246, 31);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Terms and Conditions";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(171, 658);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 23);
			this->button2->TabIndex = 10;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SIGNUP::button2_Click);
			// 
			// signupPanel
			// 
			this->signupPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signupPanel.BackgroundImage")));
			this->signupPanel->Controls->Add(this->termsPanel);
			this->signupPanel->Controls->Add(this->label1);
			this->signupPanel->Controls->Add(this->checkBox2);
			this->signupPanel->Controls->Add(this->MOBILEBOX);
			this->signupPanel->Controls->Add(this->PAS2);
			this->signupPanel->Controls->Add(this->PAS1);
			this->signupPanel->Controls->Add(this->EMAILBOX);
			this->signupPanel->Controls->Add(this->USERNAMEBOX);
			this->signupPanel->Controls->Add(this->button5);
			this->signupPanel->Controls->Add(this->SIGNUPBTN);
			this->signupPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->signupPanel->ForeColor = System::Drawing::Color::White;
			this->signupPanel->Location = System::Drawing::Point(0, 0);
			this->signupPanel->Name = L"signupPanel";
			this->signupPanel->Size = System::Drawing::Size(1280, 720);
			this->signupPanel->TabIndex = 11;
			this->signupPanel->Visible = false;
			this->signupPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SIGNUP::signupPanel_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(586, 549);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 15);
			this->label1->TabIndex = 9;
			this->label1->Text = L"terms and conditions";
			this->label1->Click += gcnew System::EventHandler(this, &SIGNUP::label1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(496, 548);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(97, 19);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"I agree to the";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &SIGNUP::checkBox2_CheckedChanged);
			// 
			// MOBILEBOX
			// 
			this->MOBILEBOX->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MOBILEBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MOBILEBOX->Location = System::Drawing::Point(498, 507);
			this->MOBILEBOX->MaxLength = 11;
			this->MOBILEBOX->Name = L"MOBILEBOX";
			this->MOBILEBOX->Size = System::Drawing::Size(283, 19);
			this->MOBILEBOX->TabIndex = 7;
			this->MOBILEBOX->TextChanged += gcnew System::EventHandler(this, &SIGNUP::MOBILEBOX_TextChanged);
			// 
			// PAS2
			// 
			this->PAS2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PAS2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PAS2->Location = System::Drawing::Point(498, 440);
			this->PAS2->Name = L"PAS2";
			this->PAS2->Size = System::Drawing::Size(283, 19);
			this->PAS2->TabIndex = 6;
			this->PAS2->UseSystemPasswordChar = true;
			// 
			// PAS1
			// 
			this->PAS1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PAS1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PAS1->Location = System::Drawing::Point(498, 377);
			this->PAS1->Name = L"PAS1";
			this->PAS1->Size = System::Drawing::Size(283, 19);
			this->PAS1->TabIndex = 5;
			this->PAS1->UseSystemPasswordChar = true;
			// 
			// EMAILBOX
			// 
			this->EMAILBOX->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->EMAILBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EMAILBOX->Location = System::Drawing::Point(498, 307);
			this->EMAILBOX->Name = L"EMAILBOX";
			this->EMAILBOX->Size = System::Drawing::Size(283, 19);
			this->EMAILBOX->TabIndex = 4;
			this->EMAILBOX->TextChanged += gcnew System::EventHandler(this, &SIGNUP::EMAILBOX_TextChanged);
			// 
			// USERNAMEBOX
			// 
			this->USERNAMEBOX->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->USERNAMEBOX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->USERNAMEBOX->Location = System::Drawing::Point(498, 241);
			this->USERNAMEBOX->Name = L"USERNAMEBOX";
			this->USERNAMEBOX->Size = System::Drawing::Size(274, 19);
			this->USERNAMEBOX->TabIndex = 3;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(876, 72);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(34, 29);
			this->button5->TabIndex = 1;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &SIGNUP::button5_Click);
			// 
			// SIGNUPBTN
			// 
			this->SIGNUPBTN->BackColor = System::Drawing::Color::Transparent;
			this->SIGNUPBTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SIGNUPBTN->Enabled = false;
			this->SIGNUPBTN->FlatAppearance->BorderSize = 0;
			this->SIGNUPBTN->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->SIGNUPBTN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->SIGNUPBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SIGNUPBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SIGNUPBTN->Location = System::Drawing::Point(582, 578);
			this->SIGNUPBTN->Name = L"SIGNUPBTN";
			this->SIGNUPBTN->Size = System::Drawing::Size(107, 68);
			this->SIGNUPBTN->TabIndex = 0;
			this->SIGNUPBTN->Text = L"SIGN-UP";
			this->SIGNUPBTN->UseVisualStyleBackColor = false;
			this->SIGNUPBTN->Click += gcnew System::EventHandler(this, &SIGNUP::SIGNUPBTN_Click);
			// 
			// SIGNUP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->signupPanel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->LOGINBTN);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->Username);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"SIGNUP";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SIGNUP";
			this->Load += gcnew System::EventHandler(this, &SIGNUP::SIGNUP_Load);
			this->termsPanel->ResumeLayout(false);
			this->termsPanel->PerformLayout();
			this->signupPanel->ResumeLayout(false);
			this->signupPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e){
	termsPanel->Visible = false;
	button5->Enabled = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	signupPanel->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	signupPanel->Visible = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void signupPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
private: System::Void SIGNUP_Load(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void SIGNUPBTN_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//SIGNUP BUTTON FUNCTION
	String^ NAME = this->USERNAMEBOX->Text;
	String^ EMAIL = this->EMAILBOX->Text;
	String^ MOBILE = this->MOBILEBOX->Text;
	String^ PAS1 = this->PAS1->Text;
	String^ PAS2 = this->PAS2->Text;
	String^ pattern = "^[a-zA-Z0-9]+@gmail\.com$";
	if (NAME->Length == 0 || MOBILE->Length < 11 || PAS1->Length < 8 || PAS2->Length < 8 || !(System::Text::RegularExpressions::Regex::IsMatch(EMAIL, pattern)))
	{
		MessageBox::Show("Please correctly fill the required fields ", "Try again", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	else if (PAS1 != PAS2)
	{
		MessageBox::Show("Password does not matches ", "Try again", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	else if (MOBILEBOX->Text->Substring(0, 2) != "03")
	{

		MessageBox::Show("Please correctly fill the required fields ", "Try again", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else if (PAS1 == PAS2 && MOBILE->Length == 11)
	{

		//checking if the username have already taken or not----------------------------------
		std::ifstream inFile("user_info.txt");
		std::string line;
		bool nameExists = false;

		// Read each line of the file
		while (std::getline(inFile, line))
		{
			// Check if the line contains the name
			if (line.find(convertTostd(NAME)) != std::string::npos)
			{
				nameExists = true;
				break;
			}
		}

		// Close the file
		inFile.close();
		//---------------------------------------------------------------------------------------

		//checking if name is already taken if not then account will be created
		if (nameExists)
		{
			MessageBox::Show("Username already exists. Please choose a different one.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			std::ofstream outFile("user_info.txt", std::ios::app);
			if (outFile.is_open()) {
				outFile << "Name: " << convertTostd(NAME) << std::endl;
				outFile << "Password: " << convertTostd(PAS1) << std::endl;
				outFile << "Email: " << convertTostd(EMAIL) << std::endl;
				outFile << "Mobile: " << convertTostd(MOBILE) << std::endl;
				outFile << "---------------------------" << std::endl;
				outFile.close();
				MessageBox::Show("Account Created Successfully!", "Finished!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
			{
				MessageBox::Show("File cannot be opened", "Failed", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}
		}
	}
}
	   //text color changed in case of wrong pattern
private: System::Void EMAILBOX_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ pattern = "^[a-zA-Z0-9]+@gmail\.com$";
	String^ email = EMAILBOX->Text;
	if (System::Text::RegularExpressions::Regex::IsMatch(email, pattern)) {
		EMAILBOX->ForeColor = Color::Black;
	}
	else
	{
		EMAILBOX->ForeColor = Color::Red;
	}
}
private: System::Void MOBILEBOX_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::TextBox^ textBox = dynamic_cast<System::Windows::Forms::TextBox^>(sender);
	// Check if the text contains any non-digit characters
	for each (char c in textBox->Text)
	{
		if (!Char::IsDigit(c))
		{
			// Clear the textbox if a non-digit character is found
			textBox->Text = "";
			return;
		}
	}
	if (MOBILEBOX->Text->Length == 11)
	{
		MOBILEBOX->ForeColor = System::Drawing::Color::Black;
	}
	else
	{
		MOBILEBOX->ForeColor = System::Drawing::Color::Red;
	}
}
private: System::Void LOGINBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	//login/signin button function

	String^ enteredUsername = Username->Text;
	String^ enteredPassword = Password->Text;
	String^ userEmail;
	String^ userMobile;
	std::ifstream in("user_info.txt");
	std::string line;

	// Check if username and password match any entries in the file
	bool found = false;
	while (getline(in, line))
	{

		if (line.find(convertTostd(enteredUsername)) != string::npos && line.length() == 6 + enteredUsername->Length)
		{

			// Matching username found, check the next line for the password
			getline(in, line);
			if (line.find(convertTostd(enteredPassword)) != string::npos && line.length() == 10 + enteredPassword->Length)
			{
				// Match found
				found = true;

				getline(in, line);
				userEmail = convertTonet(line.substr(7)); // "Email: " has 7 characters

				getline(in, line);
				userMobile = convertTonet(line.substr(8)); // "Mobile: " has 8 characters
				break;
			}
		}
	}
	if (found)
	{
		HOME^ OBJ = gcnew HOME(this);
		OBJ->setproperties(enteredUsername,userMobile,userEmail);
		dashboard^ OBJ2 = gcnew dashboard();

		//to send username to dashboard's form
		OBJ2->properties(enteredUsername);
		Username->Text = "";
		Password->Text = "";
		this->Hide();
		OBJ->Show();

	}
	else
	{
		MessageBox::Show("Invalid username or password.");
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
{
	termsPanel->Visible = true;
	button5->Enabled = false;
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked == true)
	{
		SIGNUPBTN->Enabled = true;
	}
	else
	{
		SIGNUPBTN->Enabled = false;
	}
}
};
}
