#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GUISP {

	/// <summary>
	/// Summary for ListOfHopsital
	/// </summary>
	public ref class ListOfHopsital : public System::Windows::Forms::UserControl
	{
	public:
		ListOfHopsital(void)
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
		~ListOfHopsital()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ PA_viewallhospitalName;
	public: System::Windows::Forms::Label^ PA_viewallReservationPrice;

	protected:

	public: System::Windows::Forms::Label^ PA_viewallBedsPrice;
	public: System::Windows::Forms::Label^ PA_viewallhospitalRate;
	public: System::Windows::Forms::Label^ PA_viewallhospitalID;
	public: System::Windows::Forms::ListBox^ PA_SPlist;
	public: System::Windows::Forms::ListBox^ PA_CLlist;
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ PA_viewallSurgeryPrice;
	public: System::Windows::Forms::Label^ PA_viewallBedsAva;


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
			this->PA_viewallhospitalName = (gcnew System::Windows::Forms::Label());
			this->PA_viewallReservationPrice = (gcnew System::Windows::Forms::Label());
			this->PA_viewallBedsPrice = (gcnew System::Windows::Forms::Label());
			this->PA_viewallhospitalRate = (gcnew System::Windows::Forms::Label());
			this->PA_viewallhospitalID = (gcnew System::Windows::Forms::Label());
			this->PA_SPlist = (gcnew System::Windows::Forms::ListBox());
			this->PA_CLlist = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->PA_viewallSurgeryPrice = (gcnew System::Windows::Forms::Label());
			this->PA_viewallBedsAva = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// PA_viewallhospitalName
			// 
			this->PA_viewallhospitalName->AutoSize = true;
			this->PA_viewallhospitalName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PA_viewallhospitalName->ForeColor = System::Drawing::Color::White;
			this->PA_viewallhospitalName->Location = System::Drawing::Point(3, 24);
			this->PA_viewallhospitalName->Name = L"PA_viewallhospitalName";
			this->PA_viewallhospitalName->Size = System::Drawing::Size(133, 24);
			this->PA_viewallhospitalName->TabIndex = 0;
			this->PA_viewallhospitalName->Text = L"Hospital Name";
			// 
			// PA_viewallReservationPrice
			// 
			this->PA_viewallReservationPrice->AutoSize = true;
			this->PA_viewallReservationPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PA_viewallReservationPrice->ForeColor = System::Drawing::Color::White;
			this->PA_viewallReservationPrice->Location = System::Drawing::Point(3, 258);
			this->PA_viewallReservationPrice->Name = L"PA_viewallReservationPrice";
			this->PA_viewallReservationPrice->Size = System::Drawing::Size(157, 24);
			this->PA_viewallReservationPrice->TabIndex = 3;
			this->PA_viewallReservationPrice->Text = L"Reservation Price";
			// 
			// PA_viewallBedsPrice
			// 
			this->PA_viewallBedsPrice->AutoSize = true;
			this->PA_viewallBedsPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PA_viewallBedsPrice->ForeColor = System::Drawing::Color::White;
			this->PA_viewallBedsPrice->Location = System::Drawing::Point(3, 141);
			this->PA_viewallBedsPrice->Name = L"PA_viewallBedsPrice";
			this->PA_viewallBedsPrice->Size = System::Drawing::Size(101, 24);
			this->PA_viewallBedsPrice->TabIndex = 4;
			this->PA_viewallBedsPrice->Text = L"Beds Price";
			// 
			// PA_viewallhospitalRate
			// 
			this->PA_viewallhospitalRate->AutoSize = true;
			this->PA_viewallhospitalRate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PA_viewallhospitalRate->ForeColor = System::Drawing::Color::White;
			this->PA_viewallhospitalRate->Location = System::Drawing::Point(3, 102);
			this->PA_viewallhospitalRate->Name = L"PA_viewallhospitalRate";
			this->PA_viewallhospitalRate->Size = System::Drawing::Size(120, 24);
			this->PA_viewallhospitalRate->TabIndex = 5;
			this->PA_viewallhospitalRate->Text = L"Hospital Rate";
			// 
			// PA_viewallhospitalID
			// 
			this->PA_viewallhospitalID->AutoSize = true;
			this->PA_viewallhospitalID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PA_viewallhospitalID->ForeColor = System::Drawing::Color::White;
			this->PA_viewallhospitalID->Location = System::Drawing::Point(3, 63);
			this->PA_viewallhospitalID->Name = L"PA_viewallhospitalID";
			this->PA_viewallhospitalID->Size = System::Drawing::Size(99, 24);
			this->PA_viewallhospitalID->TabIndex = 6;
			this->PA_viewallhospitalID->Text = L"Hospital ID";
			// 
			// PA_SPlist
			// 
			this->PA_SPlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PA_SPlist->FormattingEnabled = true;
			this->PA_SPlist->ItemHeight = 18;
			this->PA_SPlist->Location = System::Drawing::Point(324, 125);
			this->PA_SPlist->Name = L"PA_SPlist";
			this->PA_SPlist->Size = System::Drawing::Size(260, 148);
			this->PA_SPlist->TabIndex = 7;
			// 
			// PA_CLlist
			// 
			this->PA_CLlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PA_CLlist->FormattingEnabled = true;
			this->PA_CLlist->ItemHeight = 18;
			this->PA_CLlist->Location = System::Drawing::Point(608, 125);
			this->PA_CLlist->Name = L"PA_CLlist";
			this->PA_CLlist->Size = System::Drawing::Size(260, 148);
			this->PA_CLlist->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(320, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 24);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Hospital Specialties";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(604, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 24);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Hospital Clinics";
			// 
			// PA_viewallSurgeryPrice
			// 
			this->PA_viewallSurgeryPrice->AutoSize = true;
			this->PA_viewallSurgeryPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PA_viewallSurgeryPrice->ForeColor = System::Drawing::Color::White;
			this->PA_viewallSurgeryPrice->Location = System::Drawing::Point(3, 180);
			this->PA_viewallSurgeryPrice->Name = L"PA_viewallSurgeryPrice";
			this->PA_viewallSurgeryPrice->Size = System::Drawing::Size(124, 24);
			this->PA_viewallSurgeryPrice->TabIndex = 11;
			this->PA_viewallSurgeryPrice->Text = L"Surgery Price";
			// 
			// PA_viewallBedsAva
			// 
			this->PA_viewallBedsAva->AutoSize = true;
			this->PA_viewallBedsAva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PA_viewallBedsAva->ForeColor = System::Drawing::Color::White;
			this->PA_viewallBedsAva->Location = System::Drawing::Point(3, 219);
			this->PA_viewallBedsAva->Name = L"PA_viewallBedsAva";
			this->PA_viewallBedsAva->Size = System::Drawing::Size(124, 24);
			this->PA_viewallBedsAva->TabIndex = 12;
			this->PA_viewallBedsAva->Text = L"Surgery Price";
			// 
			// ListOfHopsital
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Controls->Add(this->PA_viewallBedsAva);
			this->Controls->Add(this->PA_viewallSurgeryPrice);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PA_CLlist);
			this->Controls->Add(this->PA_SPlist);
			this->Controls->Add(this->PA_viewallhospitalID);
			this->Controls->Add(this->PA_viewallhospitalRate);
			this->Controls->Add(this->PA_viewallBedsPrice);
			this->Controls->Add(this->PA_viewallReservationPrice);
			this->Controls->Add(this->PA_viewallhospitalName);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"ListOfHopsital";
			this->Size = System::Drawing::Size(872, 304);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
