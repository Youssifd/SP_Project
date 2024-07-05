#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GUISP {

	/// <summary>
	/// Summary for ListOfPatient
	/// </summary>
	public ref class ListOfPatient : public System::Windows::Forms::UserControl
	{
	public:
		ListOfPatient(void)
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
		~ListOfPatient()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ Patientnum;
	protected:
	public: System::Windows::Forms::Label^ PID;
	public: System::Windows::Forms::Label^ PNumOfR;
	public: System::Windows::Forms::Label^ PTotalpaid;
	public: System::Windows::Forms::Label^ PEmail;
	public: System::Windows::Forms::Label^ PGender;
	public: System::Windows::Forms::Label^ PPhNum;
	public: System::Windows::Forms::Label^ PAge;
	public: System::Windows::Forms::Label^ PName;

	protected:









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
			 this->Patientnum = (gcnew System::Windows::Forms::Label());
			 this->PID = (gcnew System::Windows::Forms::Label());
			 this->PNumOfR = (gcnew System::Windows::Forms::Label());
			 this->PTotalpaid = (gcnew System::Windows::Forms::Label());
			 this->PEmail = (gcnew System::Windows::Forms::Label());
			 this->PGender = (gcnew System::Windows::Forms::Label());
			 this->PPhNum = (gcnew System::Windows::Forms::Label());
			 this->PAge = (gcnew System::Windows::Forms::Label());
			 this->PName = (gcnew System::Windows::Forms::Label());
			 this->SuspendLayout();
			 // 
			 // Patientnum
			 // 
			 this->Patientnum->AutoSize = true;
			 this->Patientnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->Patientnum->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->Patientnum->Location = System::Drawing::Point(413, 0);
			 this->Patientnum->Name = L"Patientnum";
			 this->Patientnum->Size = System::Drawing::Size(186, 32);
			 this->Patientnum->TabIndex = 25;
			 this->Patientnum->Text = L"Patient Name";
			 // 
			 // PID
			 // 
			 this->PID->AutoSize = true;
			 this->PID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->PID->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->PID->Location = System::Drawing::Point(698, 186);
			 this->PID->Name = L"PID";
			 this->PID->Size = System::Drawing::Size(135, 32);
			 this->PID->TabIndex = 24;
			 this->PID->Text = L"patient ID";
			 // 
			 // PNumOfR
			 // 
			 this->PNumOfR->AutoSize = true;
			 this->PNumOfR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->PNumOfR->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->PNumOfR->Location = System::Drawing::Point(29, 307);
			 this->PNumOfR->Name = L"PNumOfR";
			 this->PNumOfR->Size = System::Drawing::Size(268, 32);
			 this->PNumOfR->TabIndex = 23;
			 this->PNumOfR->Text = L"Number Of reserved";
			 // 
			 // PTotalpaid
			 // 
			 this->PTotalpaid->AutoSize = true;
			 this->PTotalpaid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->PTotalpaid->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->PTotalpaid->Location = System::Drawing::Point(698, 118);
			 this->PTotalpaid->Name = L"PTotalpaid";
			 this->PTotalpaid->Size = System::Drawing::Size(143, 32);
			 this->PTotalpaid->TabIndex = 22;
			 this->PTotalpaid->Text = L"Total Paid";
			 // 
			 // PEmail
			 // 
			 this->PEmail->AutoSize = true;
			 this->PEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->PEmail->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->PEmail->Location = System::Drawing::Point(29, 244);
			 this->PEmail->Name = L"PEmail";
			 this->PEmail->Size = System::Drawing::Size(180, 32);
			 this->PEmail->TabIndex = 21;
			 this->PEmail->Text = L"Patient email";
			 // 
			 // PGender
			 // 
			 this->PGender->AutoSize = true;
			 this->PGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->PGender->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->PGender->Location = System::Drawing::Point(698, 260);
			 this->PGender->Name = L"PGender";
			 this->PGender->Size = System::Drawing::Size(200, 32);
			 this->PGender->TabIndex = 20;
			 this->PGender->Text = L"Patient gender";
			 // 
			 // PPhNum
			 // 
			 this->PPhNum->AutoSize = true;
			 this->PPhNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->PPhNum->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->PPhNum->Location = System::Drawing::Point(29, 181);
			 this->PPhNum->Name = L"PPhNum";
			 this->PPhNum->Size = System::Drawing::Size(294, 32);
			 this->PPhNum->TabIndex = 19;
			 this->PPhNum->Text = L"Patient phone number";
			 // 
			 // PAge
			 // 
			 this->PAge->AutoSize = true;
			 this->PAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->PAge->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->PAge->Location = System::Drawing::Point(29, 118);
			 this->PAge->Name = L"PAge";
			 this->PAge->Size = System::Drawing::Size(162, 32);
			 this->PAge->TabIndex = 17;
			 this->PAge->Text = L"Patient Age";
			 // 
			 // PName
			 // 
			 this->PName->AutoSize = true;
			 this->PName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			 this->PName->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			 this->PName->Location = System::Drawing::Point(29, 55);
			 this->PName->Name = L"PName";
			 this->PName->Size = System::Drawing::Size(186, 32);
			 this->PName->TabIndex = 18;
			 this->PName->Text = L"Patient Name";
			 // 
			 // ListOfPatient
			 // 
			 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			 this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 this->Controls->Add(this->Patientnum);
			 this->Controls->Add(this->PID);
			 this->Controls->Add(this->PNumOfR);
			 this->Controls->Add(this->PTotalpaid);
			 this->Controls->Add(this->PEmail);
			 this->Controls->Add(this->PGender);
			 this->Controls->Add(this->PPhNum);
			 this->Controls->Add(this->PAge);
			 this->Controls->Add(this->PName);
			 this->Margin = System::Windows::Forms::Padding(10);
			 this->Name = L"ListOfPatient";
			 this->Size = System::Drawing::Size(1133, 362);
			 this->ResumeLayout(false);
			 this->PerformLayout();

		}
#pragma endregion
	};
}
