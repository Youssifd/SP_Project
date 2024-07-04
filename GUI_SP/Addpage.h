#pragma once

namespace GUISP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Addpage
	/// </summary>
	public ref class Addpage : public System::Windows::Forms::Form
	{
	public:
		Addpage(void)
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
		~Addpage()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::ComboBox^ gender;
	private:
	public: System::Windows::Forms::TextBox^ name;
	public: System::Windows::Forms::TextBox^ phoneN;
	public: System::Windows::Forms::TextBox^ age;







	public: System::Windows::Forms::TextBox^ username;
	private:
	public: System::Windows::Forms::TextBox^ pass;
	public: System::Windows::Forms::TextBox^ conpass;
	public: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button3;









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
			 System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Addpage::typeid));
			 this->label1 = (gcnew System::Windows::Forms::Label());
			 this->label2 = (gcnew System::Windows::Forms::Label());
			 this->label3 = (gcnew System::Windows::Forms::Label());
			 this->label4 = (gcnew System::Windows::Forms::Label());
			 this->label5 = (gcnew System::Windows::Forms::Label());
			 this->label6 = (gcnew System::Windows::Forms::Label());
			 this->label7 = (gcnew System::Windows::Forms::Label());
			 this->gender = (gcnew System::Windows::Forms::ComboBox());
			 this->name = (gcnew System::Windows::Forms::TextBox());
			 this->phoneN = (gcnew System::Windows::Forms::TextBox());
			 this->age = (gcnew System::Windows::Forms::TextBox());
			 this->username = (gcnew System::Windows::Forms::TextBox());
			 this->pass = (gcnew System::Windows::Forms::TextBox());
			 this->conpass = (gcnew System::Windows::Forms::TextBox());
			 this->button1 = (gcnew System::Windows::Forms::Button());
			 this->button2 = (gcnew System::Windows::Forms::Button());
			 this->button3 = (gcnew System::Windows::Forms::Button());
			 this->SuspendLayout();
			 // 
			 // label1
			 // 
			 this->label1->AutoSize = true;
			 this->label1->BackColor = System::Drawing::Color::Transparent;
			 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->label1->ForeColor = System::Drawing::Color::White;
			 this->label1->Location = System::Drawing::Point(35, 31);
			 this->label1->Name = L"label1";
			 this->label1->Size = System::Drawing::Size(106, 25);
			 this->label1->TabIndex = 0;
			 this->label1->Text = L"Full Name:";
			 // 
			 // label2
			 // 
			 this->label2->AutoSize = true;
			 this->label2->BackColor = System::Drawing::Color::Transparent;
			 this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->label2->ForeColor = System::Drawing::Color::White;
			 this->label2->Location = System::Drawing::Point(35, 95);
			 this->label2->Name = L"label2";
			 this->label2->Size = System::Drawing::Size(108, 25);
			 this->label2->TabIndex = 1;
			 this->label2->Text = L"Username:";
			 // 
			 // label3
			 // 
			 this->label3->AutoSize = true;
			 this->label3->BackColor = System::Drawing::Color::Transparent;
			 this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->label3->ForeColor = System::Drawing::Color::White;
			 this->label3->Location = System::Drawing::Point(35, 159);
			 this->label3->Name = L"label3";
			 this->label3->Size = System::Drawing::Size(54, 25);
			 this->label3->TabIndex = 2;
			 this->label3->Text = L"Age:";
			 // 
			 // label4
			 // 
			 this->label4->AutoSize = true;
			 this->label4->BackColor = System::Drawing::Color::Transparent;
			 this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->label4->ForeColor = System::Drawing::Color::White;
			 this->label4->Location = System::Drawing::Point(35, 223);
			 this->label4->Name = L"label4";
			 this->label4->Size = System::Drawing::Size(149, 25);
			 this->label4->TabIndex = 3;
			 this->label4->Text = L"Phone Number:";
			 // 
			 // label5
			 // 
			 this->label5->AutoSize = true;
			 this->label5->BackColor = System::Drawing::Color::Transparent;
			 this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->label5->ForeColor = System::Drawing::Color::White;
			 this->label5->Location = System::Drawing::Point(35, 287);
			 this->label5->Name = L"label5";
			 this->label5->Size = System::Drawing::Size(77, 25);
			 this->label5->TabIndex = 4;
			 this->label5->Text = L"Gender";
			 // 
			 // label6
			 // 
			 this->label6->AutoSize = true;
			 this->label6->BackColor = System::Drawing::Color::Transparent;
			 this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->label6->ForeColor = System::Drawing::Color::White;
			 this->label6->Location = System::Drawing::Point(35, 415);
			 this->label6->Name = L"label6";
			 this->label6->Size = System::Drawing::Size(177, 25);
			 this->label6->TabIndex = 5;
			 this->label6->Text = L"Confirm Password:";
			 // 
			 // label7
			 // 
			 this->label7->AutoSize = true;
			 this->label7->BackColor = System::Drawing::Color::Transparent;
			 this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->label7->ForeColor = System::Drawing::Color::White;
			 this->label7->Location = System::Drawing::Point(35, 351);
			 this->label7->Name = L"label7";
			 this->label7->Size = System::Drawing::Size(104, 25);
			 this->label7->TabIndex = 6;
			 this->label7->Text = L"Password:";
			 // 
			 // gender
			 // 
			 this->gender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			 this->gender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->gender->FormattingEnabled = true;
			 this->gender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			 this->gender->Location = System::Drawing::Point(242, 288);
			 this->gender->Name = L"gender";
			 this->gender->Size = System::Drawing::Size(256, 28);
			 this->gender->TabIndex = 7;
			 this->gender->SelectedIndexChanged += gcnew System::EventHandler(this, &Addpage::gender_SelectedIndexChanged);
			 // 
			 // name
			 // 
			 this->name->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->name->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->name->Location = System::Drawing::Point(242, 28);
			 this->name->Name = L"name";
			 this->name->Size = System::Drawing::Size(256, 28);
			 this->name->TabIndex = 8;
			 this->name->TextChanged += gcnew System::EventHandler(this, &Addpage::name_TextChanged);
			 // 
			 // phoneN
			 // 
			 this->phoneN->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->phoneN->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->phoneN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->phoneN->Location = System::Drawing::Point(242, 220);
			 this->phoneN->Name = L"phoneN";
			 this->phoneN->Size = System::Drawing::Size(256, 28);
			 this->phoneN->TabIndex = 9;
			 this->phoneN->TextChanged += gcnew System::EventHandler(this, &Addpage::phoneN_TextChanged);
			 // 
			 // age
			 // 
			 this->age->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->age->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->age->Location = System::Drawing::Point(242, 156);
			 this->age->Name = L"age";
			 this->age->Size = System::Drawing::Size(256, 28);
			 this->age->TabIndex = 10;
			 this->age->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Addpage::age_KeyPress);
			 // 
			 // username
			 // 
			 this->username->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->username->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->username->Location = System::Drawing::Point(242, 92);
			 this->username->Name = L"username";
			 this->username->Size = System::Drawing::Size(256, 28);
			 this->username->TabIndex = 11;
			 this->username->TextChanged += gcnew System::EventHandler(this, &Addpage::username_TextChanged);
			 this->username->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Addpage::textBox4_KeyPress);
			 // 
			 // pass
			 // 
			 this->pass->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->pass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->pass->Location = System::Drawing::Point(242, 348);
			 this->pass->Name = L"pass";
			 this->pass->Size = System::Drawing::Size(256, 28);
			 this->pass->TabIndex = 12;
			 this->pass->UseSystemPasswordChar = true;
			 this->pass->TextChanged += gcnew System::EventHandler(this, &Addpage::pass_TextChanged);
			 // 
			 // conpass
			 // 
			 this->conpass->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			 this->conpass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->conpass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->conpass->Location = System::Drawing::Point(242, 412);
			 this->conpass->Name = L"conpass";
			 this->conpass->Size = System::Drawing::Size(256, 28);
			 this->conpass->TabIndex = 13;
			 this->conpass->UseSystemPasswordChar = true;
			 this->conpass->TextChanged += gcnew System::EventHandler(this, &Addpage::conpass_TextChanged);
			 // 
			 // button1
			 // 
			 this->button1->Location = System::Drawing::Point(182, 499);
			 this->button1->Name = L"button1";
			 this->button1->Size = System::Drawing::Size(150, 34);
			 this->button1->TabIndex = 14;
			 this->button1->Text = L"Submit ";
			 this->button1->UseVisualStyleBackColor = true;
			 this->button1->Click += gcnew System::EventHandler(this, &Addpage::button1_Click);
			 // 
			 // button2
			 // 
			 this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			 this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			 this->button2->Location = System::Drawing::Point(520, 3);
			 this->button2->Name = L"button2";
			 this->button2->Size = System::Drawing::Size(25, 26);
			 this->button2->TabIndex = 15;
			 this->button2->UseVisualStyleBackColor = true;
			 this->button2->Click += gcnew System::EventHandler(this, &Addpage::button2_Click);
			 // 
			 // button3
			 // 
			 this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			 this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			 this->button3->Location = System::Drawing::Point(520, 381);
			 this->button3->Name = L"button3";
			 this->button3->Size = System::Drawing::Size(25, 26);
			 this->button3->TabIndex = 16;
			 this->button3->UseVisualStyleBackColor = true;
			 this->button3->Click += gcnew System::EventHandler(this, &Addpage::button3_Click);
			 // 
			 // Addpage
			 // 
			 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			 this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			 this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			 this->ClientSize = System::Drawing::Size(548, 558);
			 this->Controls->Add(this->button3);
			 this->Controls->Add(this->button2);
			 this->Controls->Add(this->button1);
			 this->Controls->Add(this->conpass);
			 this->Controls->Add(this->pass);
			 this->Controls->Add(this->username);
			 this->Controls->Add(this->age);
			 this->Controls->Add(this->phoneN);
			 this->Controls->Add(this->name);
			 this->Controls->Add(this->gender);
			 this->Controls->Add(this->label7);
			 this->Controls->Add(this->label6);
			 this->Controls->Add(this->label5);
			 this->Controls->Add(this->label4);
			 this->Controls->Add(this->label3);
			 this->Controls->Add(this->label2);
			 this->Controls->Add(this->label1);
			 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			 this->Name = L"Addpage";
			 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			 this->Text = L"Addpage";
			 this->ResumeLayout(false);
			 this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 if (e->KeyChar == ' ') {
		  e->Handled = true;
	 }
}
private: System::Void age_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	 	 if (!Char::IsDigit(e->KeyChar)  &&e->KeyChar != (char)Keys::Back) {
		  e->Handled = true;
	 }
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (name->Text == "") {
		  MessageBox::Show("Please Enter Name");
		  return;
	 }
	 if (username->Text == "") {
		  MessageBox::Show("Please Enter Username");
		  return;
	 }
	 if (age->Text == "") {
		  MessageBox::Show("Please Enter Age");
		  return;
	 }
	 if (phoneN->Text == "") {
		  MessageBox::Show("Please Enter Phone Number");
		  return;
	 }
	 if (pass->Text == "") {
		  MessageBox::Show("Please Enter Password");
		  return;
	 }
	 if (conpass->Text == "") {
		  MessageBox::Show("Please Enter Confirm Password");
		  return;
	 }
	 if (gender->SelectedIndex == -1) {
		  MessageBox::Show("Please Select Gender");
		  return;
	 }
	 if(conpass->Text != pass->Text){
		  MessageBox::Show("Password and Confirm Password do not match");
		  return;
	 }
	 if(pass->Text->Length < 8){
		  MessageBox::Show("Password must be at least 8 characters long");
		  return;
	 }
	
	 this->Close();
}
private: System::Void pass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void phoneN_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gender_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void conpass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	 name->Text = "Close";
	 this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	 pass->UseSystemPasswordChar=!pass->UseSystemPasswordChar;
	 conpass->UseSystemPasswordChar=!conpass->UseSystemPasswordChar;
}
};
}

