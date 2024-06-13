#pragma once
#include <msclr/marshal_cppstd.h>
#include"Structs.h"
#include"mainFun.h"
mainFun f;
Users user[NumberOfUsers], temp;
Hospitals hospital[NumberOfHospital];
namespace GUISP {

	 using namespace System;
	 using namespace System::ComponentModel;
	 using namespace System::Collections;
	 using namespace System::Windows::Forms;
	 using namespace System::Data;
	 using namespace System::Drawing;

	 /// <summary>
	 /// Summary for mainPage
	 /// </summary>
	 public ref class mainPage : public System::Windows::Forms::Form
	 {
	 public:
		  mainPage(void)
		  {
			   InitializeComponent();
		  }
		  void personalinfo();
	 protected:
	
		  ~mainPage()
		  {
			   if (components)
			   {
					delete components;
			   }
		  }
	 private: System::Windows::Forms::Label^ login_uername_lab;
	 private: System::Windows::Forms::Label^ login_password_lab;
	 protected:
	 protected:
	 private: System::Windows::Forms::TextBox^ userBox;
	 private: System::Windows::Forms::TextBox^ passBox;
	 private: System::Windows::Forms::Button^ SignIUP_but;
	 private: System::Windows::Forms::Panel^ StartUP_page;
	 private: System::Windows::Forms::Label^ label3;
	 private: System::Windows::Forms::Panel^ login_pn;
	 private: System::Windows::Forms::Button^ request_regis_but;
	 private: System::Windows::Forms::Panel^ regis_pn;
	 private: System::Windows::Forms::Label^ regis_name_lab;
	 private: System::Windows::Forms::Label^ regis_username_lab;
	 private: System::Windows::Forms::TextBox^ regis_username_textbox;
	 private: System::Windows::Forms::TextBox^ regis_name_textbox;
	 private: System::Windows::Forms::Label^ regis_phonenumber_lab;
	 private: System::Windows::Forms::TextBox^ regis_age_textbox;
	 private: System::Windows::Forms::Label^ warning_massage;
	 private: System::Windows::Forms::Button^ regis_backTologin;
	 private: System::Windows::Forms::Panel^ AD_conpage;
	 private: System::Windows::Forms::Panel^ side_AD_bar_pn;
	 private: System::Windows::Forms::Panel^ PA_conpage;
	 private: System::Windows::Forms::Button^ PA_logout_but;
	 private: System::Windows::Forms::Panel^ AD_info_pn;
	 private: System::Windows::Forms::PictureBox^ AD_pic;
	 private: System::Windows::Forms::Label^ userType_lab;
	 private: System::Windows::Forms::Label^ FName_AD_lab;
	 private: System::Windows::Forms::Panel^ side_PA_bar_pn;
	 private: System::Windows::Forms::Panel^ PA_info_pn;
	 private: System::Windows::Forms::Label^ FName_PA_lab;
	 private: System::Windows::Forms::Label^ uesrType_PA_lab;
	 private: System::Windows::Forms::Button^ registration_but;
	 private: System::Windows::Forms::TextBox^ regis_phonenumber_textbox;
	 private: System::Windows::Forms::Label^ regis_age_lab;
	 private: System::Windows::Forms::TextBox^ regis_ConPass_TBox;
	 private: System::Windows::Forms::Label^ regis_ConPass_lab;
	 private: System::Windows::Forms::TextBox^ regis_Pass_TBox;
	 private: System::Windows::Forms::Label^ regis_pass_lab;
	 private: System::Windows::Forms::Button^ regis_ShowPass_but;
	 private: System::Windows::Forms::Button^ login_ShowPass_but;
	 private: System::Windows::Forms::Button^ AD_addORdel_hos_but;
	 private: System::Windows::Forms::Button^ AD_dispatient_hos_but;
	 private: System::Windows::Forms::Button^ AD_dispaly_hos_but;
	 private: System::Windows::Forms::Button^ AD_modify_hos_but;
	 private: System::Windows::Forms::Button^ AD_logout_but;
	 private: System::Windows::Forms::Button^ PA_view_hosInfo;
	 private: System::Windows::Forms::Button^ view_PInfo;
	 private: System::Windows::Forms::Button^ edit_PInfo;
	 private: System::Windows::Forms::Button^ PA_ViewReserveList;
	 private: System::Windows::Forms::Button^ PA_addORdelReserv;
	 private: System::Windows::Forms::Button^ PA_MOReserv;
	 private: System::Windows::Forms::Button^ edit_AInfo;
	 private: System::Windows::Forms::Button^ view_AInfo;
	 private: System::Windows::Forms::Panel^ AD_pages;
	 private: System::Windows::Forms::Panel^ AD_startWindow;
	 private: System::Windows::Forms::Panel^ AD_modify_Hinfo;
	 private: System::Windows::Forms::Panel^ AD_edit_Hlist;
	 private: System::Windows::Forms::Panel^ AD_view_Pinfo;
	 private: System::Windows::Forms::Panel^ AD_view_Hinfo;
	 private: System::Windows::Forms::Label^ label1;
	 private: System::Windows::Forms::Label^ label5;
	 private: System::Windows::Forms::Label^ label6;
	 private: System::Windows::Forms::Panel^ AD_editAinfo;
	 private: System::Windows::Forms::Label^ label8;
	 private: System::Windows::Forms::Panel^ AD_viewAinfo;
	 private: System::Windows::Forms::Label^ AD_AID;
	 private: System::Windows::Forms::Panel^ PA_pages;
	 private: System::Windows::Forms::Panel^ PA_startwindow;
	 private: System::Windows::Forms::Label^ label9;
	 private: System::Windows::Forms::Panel^ PA_viewHinfo;
	 private: System::Windows::Forms::Label^ label10;
	 private: System::Windows::Forms::Panel^ PA_reservlist;
	 private: System::Windows::Forms::Label^ label11;
	 private: System::Windows::Forms::Panel^ PA_ModifyReserv;
	 private: System::Windows::Forms::Label^ label12;
	 private: System::Windows::Forms::Panel^ PA_editReserv;
	 private: System::Windows::Forms::Label^ label13;
	 private: System::Windows::Forms::Panel^ PA_viewPinfo;
	 private: System::Windows::Forms::Label^ label14;
	 private: System::Windows::Forms::Panel^ PA_editPinfo;
	 private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::PictureBox^ PA_pic;
private: System::Windows::Forms::Button^ AD_HCselect;
private: System::Windows::Forms::ComboBox^ AD_Hlist_combox;
private: System::Windows::Forms::Panel^ AD_headerModify;
private: System::Windows::Forms::Panel^ AD_groupchoice;
private: System::Windows::Forms::Button^ AD_HNselected;
private: System::Windows::Forms::Button^ AD_HRselected;
private: System::Windows::Forms::Button^ AD_BPselected;
private: System::Windows::Forms::Button^ AD_RPselected;
private: System::Windows::Forms::Button^ AD_PRRselected;
private: System::Windows::Forms::Button^ AD_IDselected;
private: System::Windows::Forms::Button^ AD_HCselected;
private: System::Windows::Forms::Button^ AD_HSselected;
private: System::Windows::Forms::Panel^ AD_Modifyinput;
private: System::Windows::Forms::TextBox^ AD_TBinput;
private: System::Windows::Forms::Label^ AD_nameOfinput;
private: System::Windows::Forms::Button^ AD_closeModify;
private: System::Windows::Forms::Button^ AD_deleteHSC;
private: System::Windows::Forms::Button^ AD_addHSC;
private: System::Windows::Forms::Panel^ AD_modifyHSC_layout;
private: System::Windows::Forms::TextBox^ AD_TBforAddHSC;
private: System::Windows::Forms::Label^ AD_HSCorder;
private: System::Windows::Forms::ComboBox^ AD_HSClist;
private: System::Windows::Forms::Label^ AD_stateHSC;
private: System::Windows::Forms::Button^ AD_selectHSC;
private: System::Windows::Forms::Button^ AD_confirmAdd;
private: System::Windows::Forms::Panel^ AD_addHlayout;
private: System::Windows::Forms::Button^ AD_addH;
private: System::Windows::Forms::ComboBox^ AD_HdeleteCOM;
private: System::Windows::Forms::Label^ AD_HNorder_lab;
private: System::Windows::Forms::TextBox^ AD_HNorder_TB;
private: System::Windows::Forms::Label^ AD_Hstate;
private: System::Windows::Forms::Button^ AD_selectHD;
private: System::Windows::Forms::Button^ AD_deleteH;
private: System::Windows::Forms::Button^ AD_addH_but;
private: System::Windows::Forms::Panel^ AD_deleteHlayout;
private: System::Windows::Forms::Panel^ AD_header_editH;
private: System::Windows::Forms::Panel^ AD_waitingP;
private: System::Windows::Forms::Label^ AD_messegeState;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Label^ AD_HIDorder_lab;
private: System::Windows::Forms::TextBox^ AD_HIDorder_TB;
private: System::Windows::Forms::Label^ AD_HRateorder_lab;
private: System::Windows::Forms::TextBox^ AD_HRateorder_TB;
private: System::Windows::Forms::Label^ AD_HRPorder_lab;
private: System::Windows::Forms::TextBox^ AD_HRPorder_TB;
private: System::Windows::Forms::Label^ AD_HBPorder_lab;
private: System::Windows::Forms::TextBox^ AD_HBPorder_TB;
private: System::Windows::Forms::Label^ AD_HPRBsorder_lab;
private: System::Windows::Forms::TextBox^ AD_HPRBsorder_TB;
private: System::Windows::Forms::Label^ AD_AEmail;
private: System::Windows::Forms::Label^ AD_AGender;
private: System::Windows::Forms::Label^ AD_AphoneN;
private: System::Windows::Forms::Label^ AD_Aage;
private: System::Windows::Forms::Button^ AD_confirmedit;
private: System::Windows::Forms::ComboBox^ AD_ModifyHSClist;



	 protected:
	 private:
		  System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		  void InitializeComponent(void)
		  {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainPage::typeid));
			   this->login_uername_lab = (gcnew System::Windows::Forms::Label());
			   this->login_password_lab = (gcnew System::Windows::Forms::Label());
			   this->userBox = (gcnew System::Windows::Forms::TextBox());
			   this->passBox = (gcnew System::Windows::Forms::TextBox());
			   this->SignIUP_but = (gcnew System::Windows::Forms::Button());
			   this->StartUP_page = (gcnew System::Windows::Forms::Panel());
			   this->regis_pn = (gcnew System::Windows::Forms::Panel());
			   this->regis_ShowPass_but = (gcnew System::Windows::Forms::Button());
			   this->regis_ConPass_TBox = (gcnew System::Windows::Forms::TextBox());
			   this->regis_backTologin = (gcnew System::Windows::Forms::Button());
			   this->regis_ConPass_lab = (gcnew System::Windows::Forms::Label());
			   this->regis_Pass_TBox = (gcnew System::Windows::Forms::TextBox());
			   this->regis_pass_lab = (gcnew System::Windows::Forms::Label());
			   this->regis_phonenumber_textbox = (gcnew System::Windows::Forms::TextBox());
			   this->regis_age_lab = (gcnew System::Windows::Forms::Label());
			   this->registration_but = (gcnew System::Windows::Forms::Button());
			   this->regis_age_textbox = (gcnew System::Windows::Forms::TextBox());
			   this->regis_username_textbox = (gcnew System::Windows::Forms::TextBox());
			   this->regis_name_textbox = (gcnew System::Windows::Forms::TextBox());
			   this->regis_phonenumber_lab = (gcnew System::Windows::Forms::Label());
			   this->regis_username_lab = (gcnew System::Windows::Forms::Label());
			   this->regis_name_lab = (gcnew System::Windows::Forms::Label());
			   this->login_pn = (gcnew System::Windows::Forms::Panel());
			   this->request_regis_but = (gcnew System::Windows::Forms::Button());
			   this->login_ShowPass_but = (gcnew System::Windows::Forms::Button());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->warning_massage = (gcnew System::Windows::Forms::Label());
			   this->AD_conpage = (gcnew System::Windows::Forms::Panel());
			   this->AD_pages = (gcnew System::Windows::Forms::Panel());
			   this->AD_modify_Hinfo = (gcnew System::Windows::Forms::Panel());
			   this->AD_Modifyinput = (gcnew System::Windows::Forms::Panel());
			   this->AD_ModifyHSClist = (gcnew System::Windows::Forms::ComboBox());
			   this->AD_confirmedit = (gcnew System::Windows::Forms::Button());
			   this->AD_deleteHSC = (gcnew System::Windows::Forms::Button());
			   this->AD_addHSC = (gcnew System::Windows::Forms::Button());
			   this->AD_modifyHSC_layout = (gcnew System::Windows::Forms::Panel());
			   this->AD_confirmAdd = (gcnew System::Windows::Forms::Button());
			   this->AD_stateHSC = (gcnew System::Windows::Forms::Label());
			   this->AD_selectHSC = (gcnew System::Windows::Forms::Button());
			   this->AD_TBforAddHSC = (gcnew System::Windows::Forms::TextBox());
			   this->AD_HSCorder = (gcnew System::Windows::Forms::Label());
			   this->AD_HSClist = (gcnew System::Windows::Forms::ComboBox());
			   this->AD_closeModify = (gcnew System::Windows::Forms::Button());
			   this->AD_TBinput = (gcnew System::Windows::Forms::TextBox());
			   this->AD_nameOfinput = (gcnew System::Windows::Forms::Label());
			   this->AD_groupchoice = (gcnew System::Windows::Forms::Panel());
			   this->AD_HCselected = (gcnew System::Windows::Forms::Button());
			   this->AD_HSselected = (gcnew System::Windows::Forms::Button());
			   this->AD_HNselected = (gcnew System::Windows::Forms::Button());
			   this->AD_HRselected = (gcnew System::Windows::Forms::Button());
			   this->AD_BPselected = (gcnew System::Windows::Forms::Button());
			   this->AD_RPselected = (gcnew System::Windows::Forms::Button());
			   this->AD_PRRselected = (gcnew System::Windows::Forms::Button());
			   this->AD_IDselected = (gcnew System::Windows::Forms::Button());
			   this->AD_headerModify = (gcnew System::Windows::Forms::Panel());
			   this->AD_Hlist_combox = (gcnew System::Windows::Forms::ComboBox());
			   this->AD_HCselect = (gcnew System::Windows::Forms::Button());
			   this->AD_viewAinfo = (gcnew System::Windows::Forms::Panel());
			   this->AD_AEmail = (gcnew System::Windows::Forms::Label());
			   this->AD_AGender = (gcnew System::Windows::Forms::Label());
			   this->AD_AphoneN = (gcnew System::Windows::Forms::Label());
			   this->AD_Aage = (gcnew System::Windows::Forms::Label());
			   this->AD_AID = (gcnew System::Windows::Forms::Label());
			   this->AD_edit_Hlist = (gcnew System::Windows::Forms::Panel());
			   this->AD_addHlayout = (gcnew System::Windows::Forms::Panel());
			   this->AD_HPRBsorder_lab = (gcnew System::Windows::Forms::Label());
			   this->AD_HPRBsorder_TB = (gcnew System::Windows::Forms::TextBox());
			   this->AD_HIDorder_lab = (gcnew System::Windows::Forms::Label());
			   this->AD_HIDorder_TB = (gcnew System::Windows::Forms::TextBox());
			   this->AD_HRateorder_lab = (gcnew System::Windows::Forms::Label());
			   this->AD_HRateorder_TB = (gcnew System::Windows::Forms::TextBox());
			   this->AD_HRPorder_lab = (gcnew System::Windows::Forms::Label());
			   this->AD_HRPorder_TB = (gcnew System::Windows::Forms::TextBox());
			   this->AD_HBPorder_lab = (gcnew System::Windows::Forms::Label());
			   this->AD_HBPorder_TB = (gcnew System::Windows::Forms::TextBox());
			   this->AD_addH = (gcnew System::Windows::Forms::Button());
			   this->AD_HNorder_lab = (gcnew System::Windows::Forms::Label());
			   this->AD_HNorder_TB = (gcnew System::Windows::Forms::TextBox());
			   this->AD_Hstate = (gcnew System::Windows::Forms::Label());
			   this->AD_waitingP = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->AD_deleteHlayout = (gcnew System::Windows::Forms::Panel());
			   this->AD_messegeState = (gcnew System::Windows::Forms::Label());
			   this->AD_HdeleteCOM = (gcnew System::Windows::Forms::ComboBox());
			   this->AD_selectHD = (gcnew System::Windows::Forms::Button());
			   this->AD_header_editH = (gcnew System::Windows::Forms::Panel());
			   this->AD_deleteH = (gcnew System::Windows::Forms::Button());
			   this->AD_addH_but = (gcnew System::Windows::Forms::Button());
			   this->AD_editAinfo = (gcnew System::Windows::Forms::Panel());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->AD_startWindow = (gcnew System::Windows::Forms::Panel());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->AD_view_Pinfo = (gcnew System::Windows::Forms::Panel());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->AD_view_Hinfo = (gcnew System::Windows::Forms::Panel());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->side_AD_bar_pn = (gcnew System::Windows::Forms::Panel());
			   this->AD_logout_but = (gcnew System::Windows::Forms::Button());
			   this->AD_dispatient_hos_but = (gcnew System::Windows::Forms::Button());
			   this->AD_dispaly_hos_but = (gcnew System::Windows::Forms::Button());
			   this->AD_modify_hos_but = (gcnew System::Windows::Forms::Button());
			   this->AD_addORdel_hos_but = (gcnew System::Windows::Forms::Button());
			   this->AD_info_pn = (gcnew System::Windows::Forms::Panel());
			   this->edit_AInfo = (gcnew System::Windows::Forms::Button());
			   this->view_AInfo = (gcnew System::Windows::Forms::Button());
			   this->userType_lab = (gcnew System::Windows::Forms::Label());
			   this->FName_AD_lab = (gcnew System::Windows::Forms::Label());
			   this->AD_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->PA_conpage = (gcnew System::Windows::Forms::Panel());
			   this->PA_pages = (gcnew System::Windows::Forms::Panel());
			   this->PA_startwindow = (gcnew System::Windows::Forms::Panel());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->PA_viewHinfo = (gcnew System::Windows::Forms::Panel());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->PA_reservlist = (gcnew System::Windows::Forms::Panel());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->PA_ModifyReserv = (gcnew System::Windows::Forms::Panel());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->PA_editReserv = (gcnew System::Windows::Forms::Panel());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->PA_viewPinfo = (gcnew System::Windows::Forms::Panel());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->PA_editPinfo = (gcnew System::Windows::Forms::Panel());
			   this->label15 = (gcnew System::Windows::Forms::Label());
			   this->side_PA_bar_pn = (gcnew System::Windows::Forms::Panel());
			   this->PA_addORdelReserv = (gcnew System::Windows::Forms::Button());
			   this->PA_MOReserv = (gcnew System::Windows::Forms::Button());
			   this->PA_ViewReserveList = (gcnew System::Windows::Forms::Button());
			   this->PA_view_hosInfo = (gcnew System::Windows::Forms::Button());
			   this->PA_info_pn = (gcnew System::Windows::Forms::Panel());
			   this->edit_PInfo = (gcnew System::Windows::Forms::Button());
			   this->view_PInfo = (gcnew System::Windows::Forms::Button());
			   this->uesrType_PA_lab = (gcnew System::Windows::Forms::Label());
			   this->FName_PA_lab = (gcnew System::Windows::Forms::Label());
			   this->PA_pic = (gcnew System::Windows::Forms::PictureBox());
			   this->PA_logout_but = (gcnew System::Windows::Forms::Button());
			   this->StartUP_page->SuspendLayout();
			   this->regis_pn->SuspendLayout();
			   this->login_pn->SuspendLayout();
			   this->AD_conpage->SuspendLayout();
			   this->AD_pages->SuspendLayout();
			   this->AD_modify_Hinfo->SuspendLayout();
			   this->AD_Modifyinput->SuspendLayout();
			   this->AD_modifyHSC_layout->SuspendLayout();
			   this->AD_groupchoice->SuspendLayout();
			   this->AD_headerModify->SuspendLayout();
			   this->AD_viewAinfo->SuspendLayout();
			   this->AD_edit_Hlist->SuspendLayout();
			   this->AD_addHlayout->SuspendLayout();
			   this->AD_waitingP->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->AD_deleteHlayout->SuspendLayout();
			   this->AD_header_editH->SuspendLayout();
			   this->AD_editAinfo->SuspendLayout();
			   this->AD_startWindow->SuspendLayout();
			   this->AD_view_Pinfo->SuspendLayout();
			   this->AD_view_Hinfo->SuspendLayout();
			   this->side_AD_bar_pn->SuspendLayout();
			   this->AD_info_pn->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AD_pic))->BeginInit();
			   this->PA_conpage->SuspendLayout();
			   this->PA_pages->SuspendLayout();
			   this->PA_startwindow->SuspendLayout();
			   this->PA_viewHinfo->SuspendLayout();
			   this->PA_reservlist->SuspendLayout();
			   this->PA_ModifyReserv->SuspendLayout();
			   this->PA_editReserv->SuspendLayout();
			   this->PA_viewPinfo->SuspendLayout();
			   this->PA_editPinfo->SuspendLayout();
			   this->side_PA_bar_pn->SuspendLayout();
			   this->PA_info_pn->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA_pic))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // login_uername_lab
			   // 
			   this->login_uername_lab->AutoSize = true;
			   this->login_uername_lab->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 13.84615F, System::Drawing::FontStyle::Italic,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->login_uername_lab->Location = System::Drawing::Point(40, 173);
			   this->login_uername_lab->Name = L"login_uername_lab";
			   this->login_uername_lab->Size = System::Drawing::Size(124, 32);
			   this->login_uername_lab->TabIndex = 0;
			   this->login_uername_lab->Text = L"username\r\n";
			   // 
			   // login_password_lab
			   // 
			   this->login_password_lab->AutoSize = true;
			   this->login_password_lab->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 13.84615F, System::Drawing::FontStyle::Italic,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->login_password_lab->Location = System::Drawing::Point(40, 272);
			   this->login_password_lab->Name = L"login_password_lab";
			   this->login_password_lab->Size = System::Drawing::Size(119, 64);
			   this->login_password_lab->TabIndex = 1;
			   this->login_password_lab->Text = L"password\r\n\r\n";
			   // 
			   // userBox
			   // 
			   this->userBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->userBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.2F));
			   this->userBox->Location = System::Drawing::Point(193, 179);
			   this->userBox->Name = L"userBox";
			   this->userBox->Size = System::Drawing::Size(192, 30);
			   this->userBox->TabIndex = 3;
			   // 
			   // passBox
			   // 
			   this->passBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->passBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.2F));
			   this->passBox->Location = System::Drawing::Point(193, 279);
			   this->passBox->Name = L"passBox";
			   this->passBox->Size = System::Drawing::Size(192, 30);
			   this->passBox->TabIndex = 4;
			   this->passBox->UseSystemPasswordChar = true;
			   // 
			   // SignIUP_but
			   // 
			   this->SignIUP_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->SignIUP_but->Location = System::Drawing::Point(193, 414);
			   this->SignIUP_but->Name = L"SignIUP_but";
			   this->SignIUP_but->Size = System::Drawing::Size(144, 68);
			   this->SignIUP_but->TabIndex = 5;
			   this->SignIUP_but->Text = L"Sign UP";
			   this->SignIUP_but->UseVisualStyleBackColor = true;
			   this->SignIUP_but->Click += gcnew System::EventHandler(this, &mainPage::SignIUP_but_Click);
			   // 
			   // StartUP_page
			   // 
			   this->StartUP_page->Controls->Add(this->regis_pn);
			   this->StartUP_page->Controls->Add(this->login_pn);
			   this->StartUP_page->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->StartUP_page->Location = System::Drawing::Point(0, 0);
			   this->StartUP_page->Name = L"StartUP_page";
			   this->StartUP_page->Size = System::Drawing::Size(1030, 654);
			   this->StartUP_page->TabIndex = 6;
			   // 
			   // regis_pn
			   // 
			   this->regis_pn->Controls->Add(this->regis_ShowPass_but);
			   this->regis_pn->Controls->Add(this->regis_ConPass_TBox);
			   this->regis_pn->Controls->Add(this->regis_backTologin);
			   this->regis_pn->Controls->Add(this->regis_ConPass_lab);
			   this->regis_pn->Controls->Add(this->regis_Pass_TBox);
			   this->regis_pn->Controls->Add(this->regis_pass_lab);
			   this->regis_pn->Controls->Add(this->regis_phonenumber_textbox);
			   this->regis_pn->Controls->Add(this->regis_age_lab);
			   this->regis_pn->Controls->Add(this->registration_but);
			   this->regis_pn->Controls->Add(this->regis_age_textbox);
			   this->regis_pn->Controls->Add(this->regis_username_textbox);
			   this->regis_pn->Controls->Add(this->regis_name_textbox);
			   this->regis_pn->Controls->Add(this->regis_phonenumber_lab);
			   this->regis_pn->Controls->Add(this->regis_username_lab);
			   this->regis_pn->Controls->Add(this->regis_name_lab);
			   this->regis_pn->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->regis_pn->Location = System::Drawing::Point(0, 0);
			   this->regis_pn->Name = L"regis_pn";
			   this->regis_pn->Size = System::Drawing::Size(1030, 654);
			   this->regis_pn->TabIndex = 7;
			   // 
			   // regis_ShowPass_but
			   // 
			   this->regis_ShowPass_but->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"regis_ShowPass_but.BackgroundImage")));
			   this->regis_ShowPass_but->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->regis_ShowPass_but->FlatAppearance->BorderSize = 0;
			   this->regis_ShowPass_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->regis_ShowPass_but->Location = System::Drawing::Point(439, 366);
			   this->regis_ShowPass_but->Name = L"regis_ShowPass_but";
			   this->regis_ShowPass_but->Size = System::Drawing::Size(29, 28);
			   this->regis_ShowPass_but->TabIndex = 16;
			   this->regis_ShowPass_but->UseVisualStyleBackColor = true;
			   this->regis_ShowPass_but->Click += gcnew System::EventHandler(this, &mainPage::regis_ShowPass_but_Click);
			   // 
			   // regis_ConPass_TBox
			   // 
			   this->regis_ConPass_TBox->BackColor = System::Drawing::SystemColors::Window;
			   this->regis_ConPass_TBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->regis_ConPass_TBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_ConPass_TBox->Location = System::Drawing::Point(303, 432);
			   this->regis_ConPass_TBox->Name = L"regis_ConPass_TBox";
			   this->regis_ConPass_TBox->Size = System::Drawing::Size(209, 33);
			   this->regis_ConPass_TBox->TabIndex = 15;
			   this->regis_ConPass_TBox->UseSystemPasswordChar = true;
			   // 
			   // regis_backTologin
			   // 
			   this->regis_backTologin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_backTologin->Location = System::Drawing::Point(825, 220);
			   this->regis_backTologin->Name = L"regis_backTologin";
			   this->regis_backTologin->Size = System::Drawing::Size(231, 53);
			   this->regis_backTologin->TabIndex = 8;
			   this->regis_backTologin->Text = L"Back to login";
			   this->regis_backTologin->UseVisualStyleBackColor = true;
			   this->regis_backTologin->Click += gcnew System::EventHandler(this, &mainPage::regis_backTologin_Click);
			   // 
			   // regis_ConPass_lab
			   // 
			   this->regis_ConPass_lab->AutoSize = true;
			   this->regis_ConPass_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_ConPass_lab->Location = System::Drawing::Point(30, 429);
			   this->regis_ConPass_lab->Name = L"regis_ConPass_lab";
			   this->regis_ConPass_lab->Size = System::Drawing::Size(274, 36);
			   this->regis_ConPass_lab->TabIndex = 14;
			   this->regis_ConPass_lab->Text = L"Confirm Password :";
			   // 
			   // regis_Pass_TBox
			   // 
			   this->regis_Pass_TBox->BackColor = System::Drawing::SystemColors::Window;
			   this->regis_Pass_TBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->regis_Pass_TBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_Pass_TBox->Location = System::Drawing::Point(199, 361);
			   this->regis_Pass_TBox->Name = L"regis_Pass_TBox";
			   this->regis_Pass_TBox->Size = System::Drawing::Size(209, 33);
			   this->regis_Pass_TBox->TabIndex = 13;
			   this->regis_Pass_TBox->UseSystemPasswordChar = true;
			   // 
			   // regis_pass_lab
			   // 
			   this->regis_pass_lab->AutoSize = true;
			   this->regis_pass_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_pass_lab->Location = System::Drawing::Point(30, 358);
			   this->regis_pass_lab->Name = L"regis_pass_lab";
			   this->regis_pass_lab->Size = System::Drawing::Size(163, 36);
			   this->regis_pass_lab->TabIndex = 12;
			   this->regis_pass_lab->Text = L"Password :";
			   // 
			   // regis_phonenumber_textbox
			   // 
			   this->regis_phonenumber_textbox->BackColor = System::Drawing::SystemColors::Window;
			   this->regis_phonenumber_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->regis_phonenumber_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_phonenumber_textbox->Location = System::Drawing::Point(259, 290);
			   this->regis_phonenumber_textbox->Name = L"regis_phonenumber_textbox";
			   this->regis_phonenumber_textbox->Size = System::Drawing::Size(209, 33);
			   this->regis_phonenumber_textbox->TabIndex = 11;
			   // 
			   // regis_age_lab
			   // 
			   this->regis_age_lab->AutoSize = true;
			   this->regis_age_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_age_lab->Location = System::Drawing::Point(27, 216);
			   this->regis_age_lab->Name = L"regis_age_lab";
			   this->regis_age_lab->Size = System::Drawing::Size(93, 36);
			   this->regis_age_lab->TabIndex = 10;
			   this->regis_age_lab->Text = L"Age  :";
			   // 
			   // registration_but
			   // 
			   this->registration_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->registration_but->Location = System::Drawing::Point(126, 542);
			   this->registration_but->Name = L"registration_but";
			   this->registration_but->Size = System::Drawing::Size(370, 52);
			   this->registration_but->TabIndex = 9;
			   this->registration_but->Text = L"registration";
			   this->registration_but->UseVisualStyleBackColor = true;
			   this->registration_but->Visible = false;
			   // 
			   // regis_age_textbox
			   // 
			   this->regis_age_textbox->BackColor = System::Drawing::SystemColors::Window;
			   this->regis_age_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->regis_age_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_age_textbox->Location = System::Drawing::Point(126, 219);
			   this->regis_age_textbox->Name = L"regis_age_textbox";
			   this->regis_age_textbox->Size = System::Drawing::Size(45, 33);
			   this->regis_age_textbox->TabIndex = 7;
			   // 
			   // regis_username_textbox
			   // 
			   this->regis_username_textbox->BackColor = System::Drawing::SystemColors::Window;
			   this->regis_username_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->regis_username_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_username_textbox->Location = System::Drawing::Point(193, 148);
			   this->regis_username_textbox->Name = L"regis_username_textbox";
			   this->regis_username_textbox->Size = System::Drawing::Size(236, 33);
			   this->regis_username_textbox->TabIndex = 5;
			   // 
			   // regis_name_textbox
			   // 
			   this->regis_name_textbox->BackColor = System::Drawing::SystemColors::Window;
			   this->regis_name_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->regis_name_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_name_textbox->Location = System::Drawing::Point(200, 77);
			   this->regis_name_textbox->Name = L"regis_name_textbox";
			   this->regis_name_textbox->Size = System::Drawing::Size(236, 33);
			   this->regis_name_textbox->TabIndex = 4;
			   // 
			   // regis_phonenumber_lab
			   // 
			   this->regis_phonenumber_lab->AutoSize = true;
			   this->regis_phonenumber_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_phonenumber_lab->Location = System::Drawing::Point(27, 287);
			   this->regis_phonenumber_lab->Name = L"regis_phonenumber_lab";
			   this->regis_phonenumber_lab->Size = System::Drawing::Size(226, 36);
			   this->regis_phonenumber_lab->TabIndex = 3;
			   this->regis_phonenumber_lab->Text = L"Phone number :";
			   // 
			   // regis_username_lab
			   // 
			   this->regis_username_lab->AutoSize = true;
			   this->regis_username_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_username_lab->Location = System::Drawing::Point(27, 145);
			   this->regis_username_lab->Name = L"regis_username_lab";
			   this->regis_username_lab->Size = System::Drawing::Size(166, 36);
			   this->regis_username_lab->TabIndex = 1;
			   this->regis_username_lab->Text = L"Username :";
			   // 
			   // regis_name_lab
			   // 
			   this->regis_name_lab->AutoSize = true;
			   this->regis_name_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->regis_name_lab->Location = System::Drawing::Point(30, 74);
			   this->regis_name_lab->Name = L"regis_name_lab";
			   this->regis_name_lab->Size = System::Drawing::Size(165, 36);
			   this->regis_name_lab->TabIndex = 0;
			   this->regis_name_lab->Text = L"Full Name :";
			   // 
			   // login_pn
			   // 
			   this->login_pn->Controls->Add(this->request_regis_but);
			   this->login_pn->Controls->Add(this->login_ShowPass_but);
			   this->login_pn->Controls->Add(this->label3);
			   this->login_pn->Controls->Add(this->warning_massage);
			   this->login_pn->Controls->Add(this->passBox);
			   this->login_pn->Controls->Add(this->login_uername_lab);
			   this->login_pn->Controls->Add(this->SignIUP_but);
			   this->login_pn->Controls->Add(this->login_password_lab);
			   this->login_pn->Controls->Add(this->userBox);
			   this->login_pn->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->login_pn->Location = System::Drawing::Point(0, 0);
			   this->login_pn->Name = L"login_pn";
			   this->login_pn->Size = System::Drawing::Size(1030, 654);
			   this->login_pn->TabIndex = 6;
			   // 
			   // request_regis_but
			   // 
			   this->request_regis_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->request_regis_but->Location = System::Drawing::Point(812, 314);
			   this->request_regis_but->Name = L"request_regis_but";
			   this->request_regis_but->Size = System::Drawing::Size(164, 56);
			   this->request_regis_but->TabIndex = 8;
			   this->request_regis_but->Text = L"Sign in";
			   this->request_regis_but->UseVisualStyleBackColor = true;
			   this->request_regis_but->Click += gcnew System::EventHandler(this, &mainPage::request_regis_but_Click);
			   // 
			   // login_ShowPass_but
			   // 
			   this->login_ShowPass_but->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"login_ShowPass_but.BackgroundImage")));
			   this->login_ShowPass_but->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->login_ShowPass_but->FlatAppearance->BorderSize = 0;
			   this->login_ShowPass_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->login_ShowPass_but->Location = System::Drawing::Point(411, 279);
			   this->login_ShowPass_but->Name = L"login_ShowPass_but";
			   this->login_ShowPass_but->Size = System::Drawing::Size(29, 28);
			   this->login_ShowPass_but->TabIndex = 17;
			   this->login_ShowPass_but->UseVisualStyleBackColor = true;
			   this->login_ShowPass_but->Click += gcnew System::EventHandler(this, &mainPage::login_ShowPass_but_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.93846F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(787, 210);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(255, 80);
			   this->label3->TabIndex = 7;
			   this->label3->Text = L"You don\'t have\r\n account \?";
			   // 
			   // warning_massage
			   // 
			   this->warning_massage->AutoSize = true;
			   this->warning_massage->BackColor = System::Drawing::Color::Transparent;
			   this->warning_massage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->warning_massage->ForeColor = System::Drawing::Color::Red;
			   this->warning_massage->Location = System::Drawing::Point(120, 358);
			   this->warning_massage->Name = L"warning_massage";
			   this->warning_massage->Size = System::Drawing::Size(0, 29);
			   this->warning_massage->TabIndex = 6;
			   // 
			   // AD_conpage
			   // 
			   this->AD_conpage->Controls->Add(this->AD_pages);
			   this->AD_conpage->Controls->Add(this->side_AD_bar_pn);
			   this->AD_conpage->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_conpage->Location = System::Drawing::Point(0, 0);
			   this->AD_conpage->Name = L"AD_conpage";
			   this->AD_conpage->Size = System::Drawing::Size(1030, 654);
			   this->AD_conpage->TabIndex = 8;
			   // 
			   // AD_pages
			   // 
			   this->AD_pages->Controls->Add(this->AD_modify_Hinfo);
			   this->AD_pages->Controls->Add(this->AD_viewAinfo);
			   this->AD_pages->Controls->Add(this->AD_edit_Hlist);
			   this->AD_pages->Controls->Add(this->AD_editAinfo);
			   this->AD_pages->Controls->Add(this->AD_startWindow);
			   this->AD_pages->Controls->Add(this->AD_view_Pinfo);
			   this->AD_pages->Controls->Add(this->AD_view_Hinfo);
			   this->AD_pages->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_pages->Location = System::Drawing::Point(273, 0);
			   this->AD_pages->Name = L"AD_pages";
			   this->AD_pages->Size = System::Drawing::Size(757, 654);
			   this->AD_pages->TabIndex = 1;
			   // 
			   // AD_modify_Hinfo
			   // 
			   this->AD_modify_Hinfo->Controls->Add(this->AD_Modifyinput);
			   this->AD_modify_Hinfo->Controls->Add(this->AD_groupchoice);
			   this->AD_modify_Hinfo->Controls->Add(this->AD_headerModify);
			   this->AD_modify_Hinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_modify_Hinfo->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_modify_Hinfo->Location = System::Drawing::Point(0, 0);
			   this->AD_modify_Hinfo->Name = L"AD_modify_Hinfo";
			   this->AD_modify_Hinfo->Size = System::Drawing::Size(757, 654);
			   this->AD_modify_Hinfo->TabIndex = 3;
			   // 
			   // AD_Modifyinput
			   // 
			   this->AD_Modifyinput->Controls->Add(this->AD_ModifyHSClist);
			   this->AD_Modifyinput->Controls->Add(this->AD_confirmedit);
			   this->AD_Modifyinput->Controls->Add(this->AD_deleteHSC);
			   this->AD_Modifyinput->Controls->Add(this->AD_addHSC);
			   this->AD_Modifyinput->Controls->Add(this->AD_modifyHSC_layout);
			   this->AD_Modifyinput->Controls->Add(this->AD_closeModify);
			   this->AD_Modifyinput->Controls->Add(this->AD_TBinput);
			   this->AD_Modifyinput->Controls->Add(this->AD_nameOfinput);
			   this->AD_Modifyinput->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_Modifyinput->Location = System::Drawing::Point(195, 53);
			   this->AD_Modifyinput->Name = L"AD_Modifyinput";
			   this->AD_Modifyinput->Size = System::Drawing::Size(562, 601);
			   this->AD_Modifyinput->TabIndex = 12;
			   this->AD_Modifyinput->Visible = false;
			   // 
			   // AD_ModifyHSClist
			   // 
			   this->AD_ModifyHSClist->FormattingEnabled = true;
			   this->AD_ModifyHSClist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"empty" });
			   this->AD_ModifyHSClist->Location = System::Drawing::Point(265, 69);
			   this->AD_ModifyHSClist->Name = L"AD_ModifyHSClist";
			   this->AD_ModifyHSClist->Size = System::Drawing::Size(251, 34);
			   this->AD_ModifyHSClist->TabIndex = 6;
			   this->AD_ModifyHSClist->Visible = false;
			   // 
			   // AD_confirmedit
			   // 
			   this->AD_confirmedit->FlatAppearance->BorderSize = 0;
			   this->AD_confirmedit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_confirmedit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_confirmedit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_confirmedit.Image")));
			   this->AD_confirmedit->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->AD_confirmedit->Location = System::Drawing::Point(396, 113);
			   this->AD_confirmedit->Name = L"AD_confirmedit";
			   this->AD_confirmedit->Size = System::Drawing::Size(93, 48);
			   this->AD_confirmedit->TabIndex = 5;
			   this->AD_confirmedit->Text = L"Edit";
			   this->AD_confirmedit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->AD_confirmedit->UseVisualStyleBackColor = true;
			   // 
			   // AD_deleteHSC
			   // 
			   this->AD_deleteHSC->FlatAppearance->BorderSize = 0;
			   this->AD_deleteHSC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_deleteHSC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_deleteHSC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_deleteHSC.Image")));
			   this->AD_deleteHSC->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->AD_deleteHSC->Location = System::Drawing::Point(309, 192);
			   this->AD_deleteHSC->Name = L"AD_deleteHSC";
			   this->AD_deleteHSC->Size = System::Drawing::Size(120, 60);
			   this->AD_deleteHSC->TabIndex = 4;
			   this->AD_deleteHSC->Text = L"Delete";
			   this->AD_deleteHSC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->AD_deleteHSC->UseVisualStyleBackColor = true;
			   this->AD_deleteHSC->Visible = false;
			   this->AD_deleteHSC->Click += gcnew System::EventHandler(this, &mainPage::AD_deleteHSC_Click);
			   // 
			   // AD_addHSC
			   // 
			   this->AD_addHSC->FlatAppearance->BorderSize = 0;
			   this->AD_addHSC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_addHSC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_addHSC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_addHSC.Image")));
			   this->AD_addHSC->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->AD_addHSC->Location = System::Drawing::Point(60, 192);
			   this->AD_addHSC->Name = L"AD_addHSC";
			   this->AD_addHSC->Size = System::Drawing::Size(105, 60);
			   this->AD_addHSC->TabIndex = 2;
			   this->AD_addHSC->Text = L"Add";
			   this->AD_addHSC->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->AD_addHSC->UseVisualStyleBackColor = true;
			   this->AD_addHSC->Visible = false;
			   this->AD_addHSC->Click += gcnew System::EventHandler(this, &mainPage::AD_addHSC_Click);
			   // 
			   // AD_modifyHSC_layout
			   // 
			   this->AD_modifyHSC_layout->Controls->Add(this->AD_confirmAdd);
			   this->AD_modifyHSC_layout->Controls->Add(this->AD_stateHSC);
			   this->AD_modifyHSC_layout->Controls->Add(this->AD_selectHSC);
			   this->AD_modifyHSC_layout->Controls->Add(this->AD_TBforAddHSC);
			   this->AD_modifyHSC_layout->Controls->Add(this->AD_HSCorder);
			   this->AD_modifyHSC_layout->Controls->Add(this->AD_HSClist);
			   this->AD_modifyHSC_layout->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->AD_modifyHSC_layout->Location = System::Drawing::Point(0, 261);
			   this->AD_modifyHSC_layout->Name = L"AD_modifyHSC_layout";
			   this->AD_modifyHSC_layout->Size = System::Drawing::Size(562, 340);
			   this->AD_modifyHSC_layout->TabIndex = 3;
			   // 
			   // AD_confirmAdd
			   // 
			   this->AD_confirmAdd->FlatAppearance->BorderSize = 0;
			   this->AD_confirmAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_confirmAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_confirmAdd->Location = System::Drawing::Point(304, 76);
			   this->AD_confirmAdd->Name = L"AD_confirmAdd";
			   this->AD_confirmAdd->Size = System::Drawing::Size(125, 33);
			   this->AD_confirmAdd->TabIndex = 5;
			   this->AD_confirmAdd->Text = L"Add";
			   this->AD_confirmAdd->UseVisualStyleBackColor = true;
			   this->AD_confirmAdd->Visible = false;
			   // 
			   // AD_stateHSC
			   // 
			   this->AD_stateHSC->AutoSize = true;
			   this->AD_stateHSC->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_stateHSC->ForeColor = System::Drawing::Color::Red;
			   this->AD_stateHSC->Location = System::Drawing::Point(50, 115);
			   this->AD_stateHSC->Name = L"AD_stateHSC";
			   this->AD_stateHSC->Size = System::Drawing::Size(53, 19);
			   this->AD_stateHSC->TabIndex = 4;
			   this->AD_stateHSC->Text = L"label2";
			   // 
			   // AD_selectHSC
			   // 
			   this->AD_selectHSC->FlatAppearance->BorderSize = 0;
			   this->AD_selectHSC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_selectHSC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_selectHSC->Location = System::Drawing::Point(326, 24);
			   this->AD_selectHSC->Name = L"AD_selectHSC";
			   this->AD_selectHSC->Size = System::Drawing::Size(125, 33);
			   this->AD_selectHSC->TabIndex = 3;
			   this->AD_selectHSC->Text = L"Select";
			   this->AD_selectHSC->UseVisualStyleBackColor = true;
			   // 
			   // AD_TBforAddHSC
			   // 
			   this->AD_TBforAddHSC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->AD_TBforAddHSC->Location = System::Drawing::Point(38, 76);
			   this->AD_TBforAddHSC->Name = L"AD_TBforAddHSC";
			   this->AD_TBforAddHSC->Size = System::Drawing::Size(238, 29);
			   this->AD_TBforAddHSC->TabIndex = 2;
			   this->AD_TBforAddHSC->Visible = false;
			   // 
			   // AD_HSCorder
			   // 
			   this->AD_HSCorder->AutoSize = true;
			   this->AD_HSCorder->Location = System::Drawing::Point(33, 25);
			   this->AD_HSCorder->Name = L"AD_HSCorder";
			   this->AD_HSCorder->Size = System::Drawing::Size(74, 26);
			   this->AD_HSCorder->TabIndex = 1;
			   this->AD_HSCorder->Text = L"label2";
			   this->AD_HSCorder->Visible = false;
			   // 
			   // AD_HSClist
			   // 
			   this->AD_HSClist->FormattingEnabled = true;
			   this->AD_HSClist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"empty" });
			   this->AD_HSClist->Location = System::Drawing::Point(38, 22);
			   this->AD_HSClist->Name = L"AD_HSClist";
			   this->AD_HSClist->Size = System::Drawing::Size(251, 34);
			   this->AD_HSClist->TabIndex = 0;
			   this->AD_HSClist->Visible = false;
			   // 
			   // AD_closeModify
			   // 
			   this->AD_closeModify->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_closeModify.BackgroundImage")));
			   this->AD_closeModify->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->AD_closeModify->FlatAppearance->BorderSize = 0;
			   this->AD_closeModify->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_closeModify->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_closeModify->Location = System::Drawing::Point(526, 6);
			   this->AD_closeModify->Name = L"AD_closeModify";
			   this->AD_closeModify->Size = System::Drawing::Size(29, 26);
			   this->AD_closeModify->TabIndex = 2;
			   this->AD_closeModify->UseVisualStyleBackColor = true;
			   this->AD_closeModify->Click += gcnew System::EventHandler(this, &mainPage::AD_closeModify_Click);
			   // 
			   // AD_TBinput
			   // 
			   this->AD_TBinput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->AD_TBinput->Location = System::Drawing::Point(18, 127);
			   this->AD_TBinput->Name = L"AD_TBinput";
			   this->AD_TBinput->Size = System::Drawing::Size(329, 29);
			   this->AD_TBinput->TabIndex = 1;
			   // 
			   // AD_nameOfinput
			   // 
			   this->AD_nameOfinput->AutoSize = true;
			   this->AD_nameOfinput->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_nameOfinput->Location = System::Drawing::Point(13, 72);
			   this->AD_nameOfinput->Name = L"AD_nameOfinput";
			   this->AD_nameOfinput->Size = System::Drawing::Size(156, 26);
			   this->AD_nameOfinput->TabIndex = 0;
			   this->AD_nameOfinput->Text = L"nameOfinput";
			   // 
			   // AD_groupchoice
			   // 
			   this->AD_groupchoice->Controls->Add(this->AD_HCselected);
			   this->AD_groupchoice->Controls->Add(this->AD_HSselected);
			   this->AD_groupchoice->Controls->Add(this->AD_HNselected);
			   this->AD_groupchoice->Controls->Add(this->AD_HRselected);
			   this->AD_groupchoice->Controls->Add(this->AD_BPselected);
			   this->AD_groupchoice->Controls->Add(this->AD_RPselected);
			   this->AD_groupchoice->Controls->Add(this->AD_PRRselected);
			   this->AD_groupchoice->Controls->Add(this->AD_IDselected);
			   this->AD_groupchoice->Dock = System::Windows::Forms::DockStyle::Left;
			   this->AD_groupchoice->Location = System::Drawing::Point(0, 53);
			   this->AD_groupchoice->Name = L"AD_groupchoice";
			   this->AD_groupchoice->Size = System::Drawing::Size(195, 601);
			   this->AD_groupchoice->TabIndex = 11;
			   // 
			   // AD_HCselected
			   // 
			   this->AD_HCselected->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_HCselected->FlatAppearance->BorderSize = 0;
			   this->AD_HCselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_HCselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_HCselected->Location = System::Drawing::Point(0, 518);
			   this->AD_HCselected->Name = L"AD_HCselected";
			   this->AD_HCselected->Size = System::Drawing::Size(195, 74);
			   this->AD_HCselected->TabIndex = 9;
			   this->AD_HCselected->Text = L"Hospital Clinics";
			   this->AD_HCselected->UseVisualStyleBackColor = true;
			   this->AD_HCselected->Click += gcnew System::EventHandler(this, &mainPage::AD_HCselected_Click);
			   // 
			   // AD_HSselected
			   // 
			   this->AD_HSselected->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_HSselected->FlatAppearance->BorderSize = 0;
			   this->AD_HSselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_HSselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_HSselected->Location = System::Drawing::Point(0, 444);
			   this->AD_HSselected->Name = L"AD_HSselected";
			   this->AD_HSselected->Size = System::Drawing::Size(195, 74);
			   this->AD_HSselected->TabIndex = 8;
			   this->AD_HSselected->Text = L"Hospital Specialties";
			   this->AD_HSselected->UseVisualStyleBackColor = true;
			   this->AD_HSselected->Click += gcnew System::EventHandler(this, &mainPage::AD_HSselected_Click);
			   // 
			   // AD_HNselected
			   // 
			   this->AD_HNselected->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_HNselected->FlatAppearance->BorderSize = 0;
			   this->AD_HNselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_HNselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_HNselected->Location = System::Drawing::Point(0, 370);
			   this->AD_HNselected->Name = L"AD_HNselected";
			   this->AD_HNselected->Size = System::Drawing::Size(195, 74);
			   this->AD_HNselected->TabIndex = 7;
			   this->AD_HNselected->Text = L"Hospital Name";
			   this->AD_HNselected->UseVisualStyleBackColor = true;
			   this->AD_HNselected->Click += gcnew System::EventHandler(this, &mainPage::AD_HNselected_Click);
			   // 
			   // AD_HRselected
			   // 
			   this->AD_HRselected->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_HRselected->FlatAppearance->BorderSize = 0;
			   this->AD_HRselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_HRselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_HRselected->Location = System::Drawing::Point(0, 296);
			   this->AD_HRselected->Name = L"AD_HRselected";
			   this->AD_HRselected->Size = System::Drawing::Size(195, 74);
			   this->AD_HRselected->TabIndex = 6;
			   this->AD_HRselected->Text = L"Hospital Rate";
			   this->AD_HRselected->UseVisualStyleBackColor = true;
			   this->AD_HRselected->Click += gcnew System::EventHandler(this, &mainPage::AD_HRselected_Click);
			   // 
			   // AD_BPselected
			   // 
			   this->AD_BPselected->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_BPselected->FlatAppearance->BorderSize = 0;
			   this->AD_BPselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_BPselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_BPselected->Location = System::Drawing::Point(0, 222);
			   this->AD_BPselected->Name = L"AD_BPselected";
			   this->AD_BPselected->Size = System::Drawing::Size(195, 74);
			   this->AD_BPselected->TabIndex = 5;
			   this->AD_BPselected->Text = L"Beds Price";
			   this->AD_BPselected->UseVisualStyleBackColor = true;
			   this->AD_BPselected->Click += gcnew System::EventHandler(this, &mainPage::AD_BPselected_Click);
			   // 
			   // AD_RPselected
			   // 
			   this->AD_RPselected->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_RPselected->FlatAppearance->BorderSize = 0;
			   this->AD_RPselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_RPselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_RPselected->Location = System::Drawing::Point(0, 148);
			   this->AD_RPselected->Name = L"AD_RPselected";
			   this->AD_RPselected->Size = System::Drawing::Size(195, 74);
			   this->AD_RPselected->TabIndex = 4;
			   this->AD_RPselected->Text = L"Reservation Price";
			   this->AD_RPselected->UseVisualStyleBackColor = true;
			   this->AD_RPselected->Click += gcnew System::EventHandler(this, &mainPage::AD_RPselected_Click);
			   // 
			   // AD_PRRselected
			   // 
			   this->AD_PRRselected->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_PRRselected->FlatAppearance->BorderSize = 0;
			   this->AD_PRRselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_PRRselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_PRRselected->Location = System::Drawing::Point(0, 74);
			   this->AD_PRRselected->Name = L"AD_PRRselected";
			   this->AD_PRRselected->Size = System::Drawing::Size(195, 74);
			   this->AD_PRRselected->TabIndex = 3;
			   this->AD_PRRselected->Text = L"Patient Reservation Rooms";
			   this->AD_PRRselected->UseVisualStyleBackColor = true;
			   this->AD_PRRselected->Click += gcnew System::EventHandler(this, &mainPage::AD_PRRselected_Click);
			   // 
			   // AD_IDselected
			   // 
			   this->AD_IDselected->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_IDselected->FlatAppearance->BorderSize = 0;
			   this->AD_IDselected->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_IDselected->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_IDselected->Location = System::Drawing::Point(0, 0);
			   this->AD_IDselected->Name = L"AD_IDselected";
			   this->AD_IDselected->Size = System::Drawing::Size(195, 74);
			   this->AD_IDselected->TabIndex = 2;
			   this->AD_IDselected->Text = L"ID";
			   this->AD_IDselected->UseVisualStyleBackColor = true;
			   this->AD_IDselected->Click += gcnew System::EventHandler(this, &mainPage::AD_IDselected_Click);
			   // 
			   // AD_headerModify
			   // 
			   this->AD_headerModify->BackColor = System::Drawing::SystemColors::AppWorkspace;
			   this->AD_headerModify->Controls->Add(this->AD_Hlist_combox);
			   this->AD_headerModify->Controls->Add(this->AD_HCselect);
			   this->AD_headerModify->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_headerModify->Location = System::Drawing::Point(0, 0);
			   this->AD_headerModify->Name = L"AD_headerModify";
			   this->AD_headerModify->Size = System::Drawing::Size(757, 53);
			   this->AD_headerModify->TabIndex = 10;
			   // 
			   // AD_Hlist_combox
			   // 
			   this->AD_Hlist_combox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_Hlist_combox->FormattingEnabled = true;
			   this->AD_Hlist_combox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			   this->AD_Hlist_combox->Location = System::Drawing::Point(6, 5);
			   this->AD_Hlist_combox->Name = L"AD_Hlist_combox";
			   this->AD_Hlist_combox->Size = System::Drawing::Size(282, 33);
			   this->AD_Hlist_combox->TabIndex = 0;
			   this->AD_Hlist_combox->Text = L"Hospital list ";
			   // 
			   // AD_HCselect
			   // 
			   this->AD_HCselect->FlatAppearance->BorderSize = 0;
			   this->AD_HCselect->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_HCselect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_HCselect->Location = System::Drawing::Point(298, 5);
			   this->AD_HCselect->Name = L"AD_HCselect";
			   this->AD_HCselect->Size = System::Drawing::Size(125, 33);
			   this->AD_HCselect->TabIndex = 1;
			   this->AD_HCselect->Text = L"Select";
			   this->AD_HCselect->UseVisualStyleBackColor = true;
			   // 
			   // AD_viewAinfo
			   // 
			   this->AD_viewAinfo->Controls->Add(this->AD_AEmail);
			   this->AD_viewAinfo->Controls->Add(this->AD_AGender);
			   this->AD_viewAinfo->Controls->Add(this->AD_AphoneN);
			   this->AD_viewAinfo->Controls->Add(this->AD_Aage);
			   this->AD_viewAinfo->Controls->Add(this->AD_AID);
			   this->AD_viewAinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_viewAinfo->Location = System::Drawing::Point(0, 0);
			   this->AD_viewAinfo->Name = L"AD_viewAinfo";
			   this->AD_viewAinfo->Size = System::Drawing::Size(757, 654);
			   this->AD_viewAinfo->TabIndex = 5;
			   // 
			   // AD_AEmail
			   // 
			   this->AD_AEmail->AutoSize = true;
			   this->AD_AEmail->Font = (gcnew System::Drawing::Font(L"MV Boli", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_AEmail->Location = System::Drawing::Point(50, 375);
			   this->AD_AEmail->Name = L"AD_AEmail";
			   this->AD_AEmail->Size = System::Drawing::Size(262, 55);
			   this->AD_AEmail->TabIndex = 4;
			   this->AD_AEmail->Text = L"admin email";
			   // 
			   // AD_AGender
			   // 
			   this->AD_AGender->AutoSize = true;
			   this->AD_AGender->Font = (gcnew System::Drawing::Font(L"MV Boli", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_AGender->Location = System::Drawing::Point(50, 287);
			   this->AD_AGender->Name = L"AD_AGender";
			   this->AD_AGender->Size = System::Drawing::Size(288, 55);
			   this->AD_AGender->TabIndex = 3;
			   this->AD_AGender->Text = L"admin gender";
			   // 
			   // AD_AphoneN
			   // 
			   this->AD_AphoneN->AutoSize = true;
			   this->AD_AphoneN->Font = (gcnew System::Drawing::Font(L"MV Boli", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_AphoneN->Location = System::Drawing::Point(50, 199);
			   this->AD_AphoneN->Name = L"AD_AphoneN";
			   this->AD_AphoneN->Size = System::Drawing::Size(445, 55);
			   this->AD_AphoneN->TabIndex = 2;
			   this->AD_AphoneN->Text = L"admin phone number";
			   // 
			   // AD_Aage
			   // 
			   this->AD_Aage->AutoSize = true;
			   this->AD_Aage->Font = (gcnew System::Drawing::Font(L"MV Boli", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_Aage->Location = System::Drawing::Point(50, 111);
			   this->AD_Aage->Name = L"AD_Aage";
			   this->AD_Aage->Size = System::Drawing::Size(232, 55);
			   this->AD_Aage->TabIndex = 1;
			   this->AD_Aage->Text = L"admin Age";
			   // 
			   // AD_AID
			   // 
			   this->AD_AID->AutoSize = true;
			   this->AD_AID->Font = (gcnew System::Drawing::Font(L"MV Boli", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_AID->Location = System::Drawing::Point(50, 23);
			   this->AD_AID->Name = L"AD_AID";
			   this->AD_AID->Size = System::Drawing::Size(204, 55);
			   this->AD_AID->TabIndex = 0;
			   this->AD_AID->Text = L"admin ID";
			   // 
			   // AD_edit_Hlist
			   // 
			   this->AD_edit_Hlist->Controls->Add(this->AD_addHlayout);
			   this->AD_edit_Hlist->Controls->Add(this->AD_waitingP);
			   this->AD_edit_Hlist->Controls->Add(this->AD_deleteHlayout);
			   this->AD_edit_Hlist->Controls->Add(this->AD_header_editH);
			   this->AD_edit_Hlist->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_edit_Hlist->Location = System::Drawing::Point(0, 0);
			   this->AD_edit_Hlist->Name = L"AD_edit_Hlist";
			   this->AD_edit_Hlist->Size = System::Drawing::Size(757, 654);
			   this->AD_edit_Hlist->TabIndex = 2;
			   // 
			   // AD_addHlayout
			   // 
			   this->AD_addHlayout->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->AD_addHlayout->Controls->Add(this->AD_HPRBsorder_lab);
			   this->AD_addHlayout->Controls->Add(this->AD_HPRBsorder_TB);
			   this->AD_addHlayout->Controls->Add(this->AD_HIDorder_lab);
			   this->AD_addHlayout->Controls->Add(this->AD_HIDorder_TB);
			   this->AD_addHlayout->Controls->Add(this->AD_HRateorder_lab);
			   this->AD_addHlayout->Controls->Add(this->AD_HRateorder_TB);
			   this->AD_addHlayout->Controls->Add(this->AD_HRPorder_lab);
			   this->AD_addHlayout->Controls->Add(this->AD_HRPorder_TB);
			   this->AD_addHlayout->Controls->Add(this->AD_HBPorder_lab);
			   this->AD_addHlayout->Controls->Add(this->AD_HBPorder_TB);
			   this->AD_addHlayout->Controls->Add(this->AD_addH);
			   this->AD_addHlayout->Controls->Add(this->AD_HNorder_lab);
			   this->AD_addHlayout->Controls->Add(this->AD_HNorder_TB);
			   this->AD_addHlayout->Controls->Add(this->AD_Hstate);
			   this->AD_addHlayout->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_addHlayout->Location = System::Drawing::Point(0, 80);
			   this->AD_addHlayout->Name = L"AD_addHlayout";
			   this->AD_addHlayout->Size = System::Drawing::Size(757, 574);
			   this->AD_addHlayout->TabIndex = 14;
			   // 
			   // AD_HPRBsorder_lab
			   // 
			   this->AD_HPRBsorder_lab->AutoSize = true;
			   this->AD_HPRBsorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HPRBsorder_lab->Location = System::Drawing::Point(373, 227);
			   this->AD_HPRBsorder_lab->Name = L"AD_HPRBsorder_lab";
			   this->AD_HPRBsorder_lab->Size = System::Drawing::Size(182, 29);
			   this->AD_HPRBsorder_lab->TabIndex = 20;
			   this->AD_HPRBsorder_lab->Text = L"Beds Avaliable";
			   // 
			   // AD_HPRBsorder_TB
			   // 
			   this->AD_HPRBsorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->AD_HPRBsorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HPRBsorder_TB->Location = System::Drawing::Point(378, 275);
			   this->AD_HPRBsorder_TB->Name = L"AD_HPRBsorder_TB";
			   this->AD_HPRBsorder_TB->Size = System::Drawing::Size(238, 29);
			   this->AD_HPRBsorder_TB->TabIndex = 21;
			   // 
			   // AD_HIDorder_lab
			   // 
			   this->AD_HIDorder_lab->AutoSize = true;
			   this->AD_HIDorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HIDorder_lab->Location = System::Drawing::Point(373, 34);
			   this->AD_HIDorder_lab->Name = L"AD_HIDorder_lab";
			   this->AD_HIDorder_lab->Size = System::Drawing::Size(136, 29);
			   this->AD_HIDorder_lab->TabIndex = 18;
			   this->AD_HIDorder_lab->Text = L"Hospital ID";
			   // 
			   // AD_HIDorder_TB
			   // 
			   this->AD_HIDorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->AD_HIDorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HIDorder_TB->Location = System::Drawing::Point(378, 82);
			   this->AD_HIDorder_TB->Name = L"AD_HIDorder_TB";
			   this->AD_HIDorder_TB->Size = System::Drawing::Size(238, 29);
			   this->AD_HIDorder_TB->TabIndex = 19;
			   // 
			   // AD_HRateorder_lab
			   // 
			   this->AD_HRateorder_lab->AutoSize = true;
			   this->AD_HRateorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HRateorder_lab->Location = System::Drawing::Point(372, 130);
			   this->AD_HRateorder_lab->Name = L"AD_HRateorder_lab";
			   this->AD_HRateorder_lab->Size = System::Drawing::Size(66, 29);
			   this->AD_HRateorder_lab->TabIndex = 16;
			   this->AD_HRateorder_lab->Text = L"Rate";
			   // 
			   // AD_HRateorder_TB
			   // 
			   this->AD_HRateorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->AD_HRateorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HRateorder_TB->Location = System::Drawing::Point(377, 178);
			   this->AD_HRateorder_TB->Name = L"AD_HRateorder_TB";
			   this->AD_HRateorder_TB->Size = System::Drawing::Size(238, 29);
			   this->AD_HRateorder_TB->TabIndex = 17;
			   // 
			   // AD_HRPorder_lab
			   // 
			   this->AD_HRPorder_lab->AutoSize = true;
			   this->AD_HRPorder_lab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_HRPorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HRPorder_lab->Location = System::Drawing::Point(25, 221);
			   this->AD_HRPorder_lab->Name = L"AD_HRPorder_lab";
			   this->AD_HRPorder_lab->Size = System::Drawing::Size(213, 29);
			   this->AD_HRPorder_lab->TabIndex = 14;
			   this->AD_HRPorder_lab->Text = L"Reservation Price";
			   // 
			   // AD_HRPorder_TB
			   // 
			   this->AD_HRPorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->AD_HRPorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HRPorder_TB->Location = System::Drawing::Point(30, 268);
			   this->AD_HRPorder_TB->Name = L"AD_HRPorder_TB";
			   this->AD_HRPorder_TB->Size = System::Drawing::Size(238, 29);
			   this->AD_HRPorder_TB->TabIndex = 15;
			   // 
			   // AD_HBPorder_lab
			   // 
			   this->AD_HBPorder_lab->AutoSize = true;
			   this->AD_HBPorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HBPorder_lab->Location = System::Drawing::Point(25, 127);
			   this->AD_HBPorder_lab->Name = L"AD_HBPorder_lab";
			   this->AD_HBPorder_lab->Size = System::Drawing::Size(136, 29);
			   this->AD_HBPorder_lab->TabIndex = 12;
			   this->AD_HBPorder_lab->Text = L"Beds Price";
			   // 
			   // AD_HBPorder_TB
			   // 
			   this->AD_HBPorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->AD_HBPorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HBPorder_TB->Location = System::Drawing::Point(30, 174);
			   this->AD_HBPorder_TB->Name = L"AD_HBPorder_TB";
			   this->AD_HBPorder_TB->Size = System::Drawing::Size(238, 29);
			   this->AD_HBPorder_TB->TabIndex = 13;
			   // 
			   // AD_addH
			   // 
			   this->AD_addH->FlatAppearance->BorderSize = 0;
			   this->AD_addH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_addH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.93846F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_addH->Location = System::Drawing::Point(166, 413);
			   this->AD_addH->Name = L"AD_addH";
			   this->AD_addH->Size = System::Drawing::Size(222, 72);
			   this->AD_addH->TabIndex = 11;
			   this->AD_addH->Text = L"Add";
			   this->AD_addH->UseVisualStyleBackColor = true;
			   // 
			   // AD_HNorder_lab
			   // 
			   this->AD_HNorder_lab->AutoSize = true;
			   this->AD_HNorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HNorder_lab->Location = System::Drawing::Point(25, 33);
			   this->AD_HNorder_lab->Name = L"AD_HNorder_lab";
			   this->AD_HNorder_lab->Size = System::Drawing::Size(180, 29);
			   this->AD_HNorder_lab->TabIndex = 7;
			   this->AD_HNorder_lab->Text = L"Hospital Name";
			   // 
			   // AD_HNorder_TB
			   // 
			   this->AD_HNorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->AD_HNorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HNorder_TB->Location = System::Drawing::Point(30, 80);
			   this->AD_HNorder_TB->Name = L"AD_HNorder_TB";
			   this->AD_HNorder_TB->Size = System::Drawing::Size(238, 29);
			   this->AD_HNorder_TB->TabIndex = 8;
			   // 
			   // AD_Hstate
			   // 
			   this->AD_Hstate->AutoSize = true;
			   this->AD_Hstate->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_Hstate->ForeColor = System::Drawing::Color::Red;
			   this->AD_Hstate->Location = System::Drawing::Point(37, 330);
			   this->AD_Hstate->Name = L"AD_Hstate";
			   this->AD_Hstate->Size = System::Drawing::Size(53, 19);
			   this->AD_Hstate->TabIndex = 10;
			   this->AD_Hstate->Text = L"label2";
			   // 
			   // AD_waitingP
			   // 
			   this->AD_waitingP->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->AD_waitingP->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			   this->AD_waitingP->Controls->Add(this->pictureBox1);
			   this->AD_waitingP->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_waitingP->Location = System::Drawing::Point(0, 80);
			   this->AD_waitingP->Name = L"AD_waitingP";
			   this->AD_waitingP->Size = System::Drawing::Size(757, 574);
			   this->AD_waitingP->TabIndex = 17;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(0, 0);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(757, 574);
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   // 
			   // AD_deleteHlayout
			   // 
			   this->AD_deleteHlayout->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->AD_deleteHlayout->Controls->Add(this->AD_messegeState);
			   this->AD_deleteHlayout->Controls->Add(this->AD_HdeleteCOM);
			   this->AD_deleteHlayout->Controls->Add(this->AD_selectHD);
			   this->AD_deleteHlayout->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_deleteHlayout->Location = System::Drawing::Point(0, 80);
			   this->AD_deleteHlayout->Name = L"AD_deleteHlayout";
			   this->AD_deleteHlayout->Size = System::Drawing::Size(757, 574);
			   this->AD_deleteHlayout->TabIndex = 16;
			   // 
			   // AD_messegeState
			   // 
			   this->AD_messegeState->AutoSize = true;
			   this->AD_messegeState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_messegeState->Location = System::Drawing::Point(54, 111);
			   this->AD_messegeState->Name = L"AD_messegeState";
			   this->AD_messegeState->Size = System::Drawing::Size(81, 29);
			   this->AD_messegeState->TabIndex = 10;
			   this->AD_messegeState->Text = L"label4";
			   // 
			   // AD_HdeleteCOM
			   // 
			   this->AD_HdeleteCOM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HdeleteCOM->FormattingEnabled = true;
			   this->AD_HdeleteCOM->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"empty" });
			   this->AD_HdeleteCOM->Location = System::Drawing::Point(47, 43);
			   this->AD_HdeleteCOM->Name = L"AD_HdeleteCOM";
			   this->AD_HdeleteCOM->Size = System::Drawing::Size(251, 37);
			   this->AD_HdeleteCOM->TabIndex = 6;
			   this->AD_HdeleteCOM->Text = L"Hospital List";
			   // 
			   // AD_selectHD
			   // 
			   this->AD_selectHD->FlatAppearance->BorderSize = 0;
			   this->AD_selectHD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_selectHD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_selectHD->Location = System::Drawing::Point(348, 48);
			   this->AD_selectHD->Name = L"AD_selectHD";
			   this->AD_selectHD->Size = System::Drawing::Size(125, 33);
			   this->AD_selectHD->TabIndex = 9;
			   this->AD_selectHD->Text = L"Select";
			   this->AD_selectHD->UseVisualStyleBackColor = true;
			   // 
			   // AD_header_editH
			   // 
			   this->AD_header_editH->Controls->Add(this->AD_deleteH);
			   this->AD_header_editH->Controls->Add(this->AD_addH_but);
			   this->AD_header_editH->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_header_editH->Location = System::Drawing::Point(0, 0);
			   this->AD_header_editH->Name = L"AD_header_editH";
			   this->AD_header_editH->Size = System::Drawing::Size(757, 80);
			   this->AD_header_editH->TabIndex = 15;
			   // 
			   // AD_deleteH
			   // 
			   this->AD_deleteH->FlatAppearance->BorderSize = 0;
			   this->AD_deleteH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_deleteH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_deleteH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_deleteH.Image")));
			   this->AD_deleteH->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->AD_deleteH->Location = System::Drawing::Point(432, 10);
			   this->AD_deleteH->Name = L"AD_deleteH";
			   this->AD_deleteH->Size = System::Drawing::Size(120, 60);
			   this->AD_deleteH->TabIndex = 13;
			   this->AD_deleteH->Text = L"Delete";
			   this->AD_deleteH->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->AD_deleteH->UseVisualStyleBackColor = true;
			   this->AD_deleteH->Click += gcnew System::EventHandler(this, &mainPage::AD_deleteH_Click);
			   // 
			   // AD_addH_but
			   // 
			   this->AD_addH_but->FlatAppearance->BorderSize = 0;
			   this->AD_addH_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_addH_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_addH_but->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_addH_but.Image")));
			   this->AD_addH_but->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->AD_addH_but->Location = System::Drawing::Point(183, 10);
			   this->AD_addH_but->Name = L"AD_addH_but";
			   this->AD_addH_but->Size = System::Drawing::Size(105, 60);
			   this->AD_addH_but->TabIndex = 12;
			   this->AD_addH_but->Text = L"Add";
			   this->AD_addH_but->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->AD_addH_but->UseVisualStyleBackColor = true;
			   this->AD_addH_but->Click += gcnew System::EventHandler(this, &mainPage::AD_addH_but_Click);
			   // 
			   // AD_editAinfo
			   // 
			   this->AD_editAinfo->Controls->Add(this->label8);
			   this->AD_editAinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_editAinfo->Location = System::Drawing::Point(0, 0);
			   this->AD_editAinfo->Name = L"AD_editAinfo";
			   this->AD_editAinfo->Size = System::Drawing::Size(757, 654);
			   this->AD_editAinfo->TabIndex = 6;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label8->Location = System::Drawing::Point(279, 191);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(138, 51);
			   this->label8->TabIndex = 0;
			   this->label8->Text = L"label8";
			   // 
			   // AD_startWindow
			   // 
			   this->AD_startWindow->Controls->Add(this->label1);
			   this->AD_startWindow->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_startWindow->Location = System::Drawing::Point(0, 0);
			   this->AD_startWindow->Name = L"AD_startWindow";
			   this->AD_startWindow->Size = System::Drawing::Size(757, 654);
			   this->AD_startWindow->TabIndex = 4;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(279, 191);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(138, 51);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"label1";
			   // 
			   // AD_view_Pinfo
			   // 
			   this->AD_view_Pinfo->Controls->Add(this->label5);
			   this->AD_view_Pinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_view_Pinfo->Location = System::Drawing::Point(0, 0);
			   this->AD_view_Pinfo->Name = L"AD_view_Pinfo";
			   this->AD_view_Pinfo->Size = System::Drawing::Size(757, 654);
			   this->AD_view_Pinfo->TabIndex = 1;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(335, 302);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(138, 51);
			   this->label5->TabIndex = 1;
			   this->label5->Text = L"label5";
			   // 
			   // AD_view_Hinfo
			   // 
			   this->AD_view_Hinfo->Controls->Add(this->label6);
			   this->AD_view_Hinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_view_Hinfo->Location = System::Drawing::Point(0, 0);
			   this->AD_view_Hinfo->Name = L"AD_view_Hinfo";
			   this->AD_view_Hinfo->Size = System::Drawing::Size(757, 654);
			   this->AD_view_Hinfo->TabIndex = 0;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label6->Location = System::Drawing::Point(335, 302);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(138, 51);
			   this->label6->TabIndex = 1;
			   this->label6->Text = L"label6";
			   // 
			   // side_AD_bar_pn
			   // 
			   this->side_AD_bar_pn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->side_AD_bar_pn->Controls->Add(this->AD_logout_but);
			   this->side_AD_bar_pn->Controls->Add(this->AD_dispatient_hos_but);
			   this->side_AD_bar_pn->Controls->Add(this->AD_dispaly_hos_but);
			   this->side_AD_bar_pn->Controls->Add(this->AD_modify_hos_but);
			   this->side_AD_bar_pn->Controls->Add(this->AD_addORdel_hos_but);
			   this->side_AD_bar_pn->Controls->Add(this->AD_info_pn);
			   this->side_AD_bar_pn->Dock = System::Windows::Forms::DockStyle::Left;
			   this->side_AD_bar_pn->Location = System::Drawing::Point(0, 0);
			   this->side_AD_bar_pn->Name = L"side_AD_bar_pn";
			   this->side_AD_bar_pn->Size = System::Drawing::Size(273, 654);
			   this->side_AD_bar_pn->TabIndex = 0;
			   // 
			   // AD_logout_but
			   // 
			   this->AD_logout_but->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->AD_logout_but->FlatAppearance->BorderSize = 0;
			   this->AD_logout_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_logout_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_logout_but->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->AD_logout_but->Location = System::Drawing::Point(0, 600);
			   this->AD_logout_but->Name = L"AD_logout_but";
			   this->AD_logout_but->Size = System::Drawing::Size(273, 54);
			   this->AD_logout_but->TabIndex = 5;
			   this->AD_logout_but->Text = L"Log out";
			   this->AD_logout_but->UseVisualStyleBackColor = true;
			   this->AD_logout_but->Click += gcnew System::EventHandler(this, &mainPage::AD_logout_but_Click);
			   // 
			   // AD_dispatient_hos_but
			   // 
			   this->AD_dispatient_hos_but->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_dispatient_hos_but->FlatAppearance->BorderSize = 0;
			   this->AD_dispatient_hos_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_dispatient_hos_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_dispatient_hos_but->Location = System::Drawing::Point(0, 424);
			   this->AD_dispatient_hos_but->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			   this->AD_dispatient_hos_but->Name = L"AD_dispatient_hos_but";
			   this->AD_dispatient_hos_but->Size = System::Drawing::Size(273, 65);
			   this->AD_dispatient_hos_but->TabIndex = 4;
			   this->AD_dispatient_hos_but->Text = L"Display patient Data";
			   this->AD_dispatient_hos_but->UseVisualStyleBackColor = true;
			   this->AD_dispatient_hos_but->Click += gcnew System::EventHandler(this, &mainPage::AD_dispatient_hos_but_Click);
			   // 
			   // AD_dispaly_hos_but
			   // 
			   this->AD_dispaly_hos_but->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_dispaly_hos_but->FlatAppearance->BorderSize = 0;
			   this->AD_dispaly_hos_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_dispaly_hos_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_dispaly_hos_but->Location = System::Drawing::Point(0, 344);
			   this->AD_dispaly_hos_but->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			   this->AD_dispaly_hos_but->Name = L"AD_dispaly_hos_but";
			   this->AD_dispaly_hos_but->Size = System::Drawing::Size(273, 80);
			   this->AD_dispaly_hos_but->TabIndex = 3;
			   this->AD_dispaly_hos_but->Text = L"Display hospital(s) info\r\n";
			   this->AD_dispaly_hos_but->UseVisualStyleBackColor = true;
			   this->AD_dispaly_hos_but->Click += gcnew System::EventHandler(this, &mainPage::AD_dispaly_hos_but_Click);
			   // 
			   // AD_modify_hos_but
			   // 
			   this->AD_modify_hos_but->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_modify_hos_but->FlatAppearance->BorderSize = 0;
			   this->AD_modify_hos_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_modify_hos_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_modify_hos_but->Location = System::Drawing::Point(0, 273);
			   this->AD_modify_hos_but->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			   this->AD_modify_hos_but->Name = L"AD_modify_hos_but";
			   this->AD_modify_hos_but->Size = System::Drawing::Size(273, 71);
			   this->AD_modify_hos_but->TabIndex = 2;
			   this->AD_modify_hos_but->Text = L"Modify hospitals";
			   this->AD_modify_hos_but->UseVisualStyleBackColor = true;
			   this->AD_modify_hos_but->Click += gcnew System::EventHandler(this, &mainPage::AD_modify_hos_but_Click);
			   // 
			   // AD_addORdel_hos_but
			   // 
			   this->AD_addORdel_hos_but->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_addORdel_hos_but->FlatAppearance->BorderSize = 0;
			   this->AD_addORdel_hos_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_addORdel_hos_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_addORdel_hos_but->Location = System::Drawing::Point(0, 187);
			   this->AD_addORdel_hos_but->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			   this->AD_addORdel_hos_but->Name = L"AD_addORdel_hos_but";
			   this->AD_addORdel_hos_but->Size = System::Drawing::Size(273, 86);
			   this->AD_addORdel_hos_but->TabIndex = 1;
			   this->AD_addORdel_hos_but->Text = L"Edit hospital List\r\n(add or delete)\r\n";
			   this->AD_addORdel_hos_but->UseVisualStyleBackColor = true;
			   this->AD_addORdel_hos_but->Click += gcnew System::EventHandler(this, &mainPage::AD_addORdel_hos_but_Click);
			   // 
			   // AD_info_pn
			   // 
			   this->AD_info_pn->BackColor = System::Drawing::SystemColors::ButtonShadow;
			   this->AD_info_pn->Controls->Add(this->edit_AInfo);
			   this->AD_info_pn->Controls->Add(this->view_AInfo);
			   this->AD_info_pn->Controls->Add(this->userType_lab);
			   this->AD_info_pn->Controls->Add(this->FName_AD_lab);
			   this->AD_info_pn->Controls->Add(this->AD_pic);
			   this->AD_info_pn->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_info_pn->Location = System::Drawing::Point(0, 0);
			   this->AD_info_pn->Name = L"AD_info_pn";
			   this->AD_info_pn->Size = System::Drawing::Size(273, 187);
			   this->AD_info_pn->TabIndex = 0;
			   // 
			   // edit_AInfo
			   // 
			   this->edit_AInfo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edit_AInfo.BackgroundImage")));
			   this->edit_AInfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->edit_AInfo->FlatAppearance->BorderSize = 0;
			   this->edit_AInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->edit_AInfo->Location = System::Drawing::Point(246, 10);
			   this->edit_AInfo->Name = L"edit_AInfo";
			   this->edit_AInfo->Size = System::Drawing::Size(24, 26);
			   this->edit_AInfo->TabIndex = 6;
			   this->edit_AInfo->UseVisualStyleBackColor = true;
			   this->edit_AInfo->Click += gcnew System::EventHandler(this, &mainPage::edit_AInfo_Click);
			   // 
			   // view_AInfo
			   // 
			   this->view_AInfo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"view_AInfo.BackgroundImage")));
			   this->view_AInfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->view_AInfo->FlatAppearance->BorderSize = 0;
			   this->view_AInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->view_AInfo->ForeColor = System::Drawing::SystemColors::Control;
			   this->view_AInfo->Location = System::Drawing::Point(216, 10);
			   this->view_AInfo->Name = L"view_AInfo";
			   this->view_AInfo->Size = System::Drawing::Size(24, 26);
			   this->view_AInfo->TabIndex = 5;
			   this->view_AInfo->UseVisualStyleBackColor = true;
			   this->view_AInfo->Click += gcnew System::EventHandler(this, &mainPage::view_AInfo_Click);
			   // 
			   // userType_lab
			   // 
			   this->userType_lab->AutoSize = true;
			   this->userType_lab->Font = (gcnew System::Drawing::Font(L"MV Boli", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->userType_lab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->userType_lab->Location = System::Drawing::Point(180, 155);
			   this->userType_lab->Name = L"userType_lab";
			   this->userType_lab->Size = System::Drawing::Size(81, 29);
			   this->userType_lab->TabIndex = 2;
			   this->userType_lab->Text = L"Admin";
			   // 
			   // FName_AD_lab
			   // 
			   this->FName_AD_lab->AutoSize = true;
			   this->FName_AD_lab->Font = (gcnew System::Drawing::Font(L"MV Boli", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->FName_AD_lab->Location = System::Drawing::Point(46, 126);
			   this->FName_AD_lab->Name = L"FName_AD_lab";
			   this->FName_AD_lab->Size = System::Drawing::Size(74, 29);
			   this->FName_AD_lab->TabIndex = 1;
			   this->FName_AD_lab->Text = L"label2";
			   // 
			   // AD_pic
			   // 
			   this->AD_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_pic.Image")));
			   this->AD_pic->Location = System::Drawing::Point(20, 9);
			   this->AD_pic->Name = L"AD_pic";
			   this->AD_pic->Size = System::Drawing::Size(190, 114);
			   this->AD_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->AD_pic->TabIndex = 0;
			   this->AD_pic->TabStop = false;
			   // 
			   // PA_conpage
			   // 
			   this->PA_conpage->Controls->Add(this->PA_pages);
			   this->PA_conpage->Controls->Add(this->side_PA_bar_pn);
			   this->PA_conpage->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_conpage->Location = System::Drawing::Point(0, 0);
			   this->PA_conpage->Name = L"PA_conpage";
			   this->PA_conpage->Size = System::Drawing::Size(1030, 654);
			   this->PA_conpage->TabIndex = 9;
			   // 
			   // PA_pages
			   // 
			   this->PA_pages->Controls->Add(this->PA_startwindow);
			   this->PA_pages->Controls->Add(this->PA_viewHinfo);
			   this->PA_pages->Controls->Add(this->PA_reservlist);
			   this->PA_pages->Controls->Add(this->PA_ModifyReserv);
			   this->PA_pages->Controls->Add(this->PA_editReserv);
			   this->PA_pages->Controls->Add(this->PA_viewPinfo);
			   this->PA_pages->Controls->Add(this->PA_editPinfo);
			   this->PA_pages->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_pages->Location = System::Drawing::Point(264, 0);
			   this->PA_pages->Name = L"PA_pages";
			   this->PA_pages->Size = System::Drawing::Size(766, 654);
			   this->PA_pages->TabIndex = 3;
			   // 
			   // PA_startwindow
			   // 
			   this->PA_startwindow->Controls->Add(this->label9);
			   this->PA_startwindow->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_startwindow->Location = System::Drawing::Point(0, 0);
			   this->PA_startwindow->Name = L"PA_startwindow";
			   this->PA_startwindow->Size = System::Drawing::Size(766, 654);
			   this->PA_startwindow->TabIndex = 6;
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label9->Location = System::Drawing::Point(279, 191);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(354, 51);
			   this->label9->TabIndex = 0;
			   this->label9->Text = L"start patient page";
			   // 
			   // PA_viewHinfo
			   // 
			   this->PA_viewHinfo->Controls->Add(this->label10);
			   this->PA_viewHinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_viewHinfo->Location = System::Drawing::Point(0, 0);
			   this->PA_viewHinfo->Name = L"PA_viewHinfo";
			   this->PA_viewHinfo->Size = System::Drawing::Size(766, 654);
			   this->PA_viewHinfo->TabIndex = 5;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label10->Location = System::Drawing::Point(279, 191);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(377, 51);
			   this->label10->TabIndex = 0;
			   this->label10->Text = L"view hospital page";
			   // 
			   // PA_reservlist
			   // 
			   this->PA_reservlist->Controls->Add(this->label11);
			   this->PA_reservlist->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_reservlist->Location = System::Drawing::Point(0, 0);
			   this->PA_reservlist->Name = L"PA_reservlist";
			   this->PA_reservlist->Size = System::Drawing::Size(766, 654);
			   this->PA_reservlist->TabIndex = 4;
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label11->Location = System::Drawing::Point(279, 191);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(441, 51);
			   this->label11->TabIndex = 0;
			   this->label11->Text = L"view reservation page";
			   // 
			   // PA_ModifyReserv
			   // 
			   this->PA_ModifyReserv->Controls->Add(this->label12);
			   this->PA_ModifyReserv->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_ModifyReserv->Location = System::Drawing::Point(0, 0);
			   this->PA_ModifyReserv->Name = L"PA_ModifyReserv";
			   this->PA_ModifyReserv->Size = System::Drawing::Size(766, 654);
			   this->PA_ModifyReserv->TabIndex = 3;
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label12->Location = System::Drawing::Point(335, 302);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(482, 51);
			   this->label12->TabIndex = 1;
			   this->label12->Text = L"modify reservation page";
			   // 
			   // PA_editReserv
			   // 
			   this->PA_editReserv->Controls->Add(this->label13);
			   this->PA_editReserv->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_editReserv->Location = System::Drawing::Point(0, 0);
			   this->PA_editReserv->Name = L"PA_editReserv";
			   this->PA_editReserv->Size = System::Drawing::Size(766, 654);
			   this->PA_editReserv->TabIndex = 2;
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label13->Location = System::Drawing::Point(335, 302);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(424, 51);
			   this->label13->TabIndex = 1;
			   this->label13->Text = L"edit reservation page";
			   // 
			   // PA_viewPinfo
			   // 
			   this->PA_viewPinfo->Controls->Add(this->label14);
			   this->PA_viewPinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_viewPinfo->Location = System::Drawing::Point(0, 0);
			   this->PA_viewPinfo->Name = L"PA_viewPinfo";
			   this->PA_viewPinfo->Size = System::Drawing::Size(766, 654);
			   this->PA_viewPinfo->TabIndex = 1;
			   // 
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label14->Location = System::Drawing::Point(335, 302);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(474, 51);
			   this->label14->TabIndex = 1;
			   this->label14->Text = L"view personal info page";
			   // 
			   // PA_editPinfo
			   // 
			   this->PA_editPinfo->Controls->Add(this->label15);
			   this->PA_editPinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_editPinfo->Location = System::Drawing::Point(0, 0);
			   this->PA_editPinfo->Name = L"PA_editPinfo";
			   this->PA_editPinfo->Size = System::Drawing::Size(766, 654);
			   this->PA_editPinfo->TabIndex = 0;
			   // 
			   // label15
			   // 
			   this->label15->AutoSize = true;
			   this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label15->Location = System::Drawing::Point(335, 302);
			   this->label15->Name = L"label15";
			   this->label15->Size = System::Drawing::Size(457, 51);
			   this->label15->TabIndex = 1;
			   this->label15->Text = L"edit personal info page";
			   // 
			   // side_PA_bar_pn
			   // 
			   this->side_PA_bar_pn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->side_PA_bar_pn->Controls->Add(this->PA_addORdelReserv);
			   this->side_PA_bar_pn->Controls->Add(this->PA_MOReserv);
			   this->side_PA_bar_pn->Controls->Add(this->PA_ViewReserveList);
			   this->side_PA_bar_pn->Controls->Add(this->PA_view_hosInfo);
			   this->side_PA_bar_pn->Controls->Add(this->PA_info_pn);
			   this->side_PA_bar_pn->Controls->Add(this->PA_logout_but);
			   this->side_PA_bar_pn->Dock = System::Windows::Forms::DockStyle::Left;
			   this->side_PA_bar_pn->Location = System::Drawing::Point(0, 0);
			   this->side_PA_bar_pn->Name = L"side_PA_bar_pn";
			   this->side_PA_bar_pn->Size = System::Drawing::Size(264, 654);
			   this->side_PA_bar_pn->TabIndex = 2;
			   // 
			   // PA_addORdelReserv
			   // 
			   this->PA_addORdelReserv->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_addORdelReserv->FlatAppearance->BorderSize = 0;
			   this->PA_addORdelReserv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_addORdelReserv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_addORdelReserv->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_addORdelReserv->Location = System::Drawing::Point(0, 362);
			   this->PA_addORdelReserv->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_addORdelReserv->Name = L"PA_addORdelReserv";
			   this->PA_addORdelReserv->Size = System::Drawing::Size(264, 79);
			   this->PA_addORdelReserv->TabIndex = 5;
			   this->PA_addORdelReserv->Text = L"Add and delete Reservations";
			   this->PA_addORdelReserv->UseVisualStyleBackColor = true;
			   this->PA_addORdelReserv->Click += gcnew System::EventHandler(this, &mainPage::PA_addORdelReserv_Click);
			   // 
			   // PA_MOReserv
			   // 
			   this->PA_MOReserv->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_MOReserv->FlatAppearance->BorderSize = 0;
			   this->PA_MOReserv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_MOReserv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_MOReserv->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_MOReserv->Location = System::Drawing::Point(0, 300);
			   this->PA_MOReserv->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_MOReserv->Name = L"PA_MOReserv";
			   this->PA_MOReserv->Size = System::Drawing::Size(264, 62);
			   this->PA_MOReserv->TabIndex = 4;
			   this->PA_MOReserv->Text = L"Modify Reservations";
			   this->PA_MOReserv->UseVisualStyleBackColor = true;
			   this->PA_MOReserv->Click += gcnew System::EventHandler(this, &mainPage::PA_MOReserv_Click);
			   // 
			   // PA_ViewReserveList
			   // 
			   this->PA_ViewReserveList->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_ViewReserveList->FlatAppearance->BorderSize = 0;
			   this->PA_ViewReserveList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_ViewReserveList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_ViewReserveList->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_ViewReserveList->Location = System::Drawing::Point(0, 238);
			   this->PA_ViewReserveList->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_ViewReserveList->Name = L"PA_ViewReserveList";
			   this->PA_ViewReserveList->Size = System::Drawing::Size(264, 62);
			   this->PA_ViewReserveList->TabIndex = 3;
			   this->PA_ViewReserveList->Text = L"Reservations list";
			   this->PA_ViewReserveList->UseVisualStyleBackColor = true;
			   this->PA_ViewReserveList->Click += gcnew System::EventHandler(this, &mainPage::PA_ViewReserveList_Click);
			   // 
			   // PA_view_hosInfo
			   // 
			   this->PA_view_hosInfo->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_view_hosInfo->FlatAppearance->BorderSize = 0;
			   this->PA_view_hosInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_view_hosInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_view_hosInfo->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_view_hosInfo->Location = System::Drawing::Point(0, 176);
			   this->PA_view_hosInfo->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_view_hosInfo->Name = L"PA_view_hosInfo";
			   this->PA_view_hosInfo->Size = System::Drawing::Size(264, 62);
			   this->PA_view_hosInfo->TabIndex = 2;
			   this->PA_view_hosInfo->Text = L"View Hospital(s) Info";
			   this->PA_view_hosInfo->UseVisualStyleBackColor = true;
			   this->PA_view_hosInfo->Click += gcnew System::EventHandler(this, &mainPage::PA_view_hosInfo_Click);
			   // 
			   // PA_info_pn
			   // 
			   this->PA_info_pn->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->PA_info_pn->Controls->Add(this->edit_PInfo);
			   this->PA_info_pn->Controls->Add(this->view_PInfo);
			   this->PA_info_pn->Controls->Add(this->uesrType_PA_lab);
			   this->PA_info_pn->Controls->Add(this->FName_PA_lab);
			   this->PA_info_pn->Controls->Add(this->PA_pic);
			   this->PA_info_pn->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_info_pn->Location = System::Drawing::Point(0, 0);
			   this->PA_info_pn->Name = L"PA_info_pn";
			   this->PA_info_pn->Size = System::Drawing::Size(264, 176);
			   this->PA_info_pn->TabIndex = 0;
			   // 
			   // edit_PInfo
			   // 
			   this->edit_PInfo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edit_PInfo.BackgroundImage")));
			   this->edit_PInfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->edit_PInfo->FlatAppearance->BorderSize = 0;
			   this->edit_PInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->edit_PInfo->Location = System::Drawing::Point(237, 10);
			   this->edit_PInfo->Name = L"edit_PInfo";
			   this->edit_PInfo->Size = System::Drawing::Size(24, 26);
			   this->edit_PInfo->TabIndex = 4;
			   this->edit_PInfo->UseVisualStyleBackColor = true;
			   this->edit_PInfo->Click += gcnew System::EventHandler(this, &mainPage::edit_PInfo_Click);
			   // 
			   // view_PInfo
			   // 
			   this->view_PInfo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"view_PInfo.BackgroundImage")));
			   this->view_PInfo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->view_PInfo->FlatAppearance->BorderSize = 0;
			   this->view_PInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->view_PInfo->Location = System::Drawing::Point(209, 10);
			   this->view_PInfo->Name = L"view_PInfo";
			   this->view_PInfo->Size = System::Drawing::Size(24, 26);
			   this->view_PInfo->TabIndex = 3;
			   this->view_PInfo->UseVisualStyleBackColor = true;
			   this->view_PInfo->Click += gcnew System::EventHandler(this, &mainPage::view_PInfo_Click);
			   // 
			   // uesrType_PA_lab
			   // 
			   this->uesrType_PA_lab->AutoSize = true;
			   this->uesrType_PA_lab->Font = (gcnew System::Drawing::Font(L"MV Boli", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->uesrType_PA_lab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->uesrType_PA_lab->Location = System::Drawing::Point(171, 151);
			   this->uesrType_PA_lab->Name = L"uesrType_PA_lab";
			   this->uesrType_PA_lab->Size = System::Drawing::Size(93, 29);
			   this->uesrType_PA_lab->TabIndex = 2;
			   this->uesrType_PA_lab->Text = L"Patient";
			   // 
			   // FName_PA_lab
			   // 
			   this->FName_PA_lab->AutoSize = true;
			   this->FName_PA_lab->Font = (gcnew System::Drawing::Font(L"MV Boli", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->FName_PA_lab->Location = System::Drawing::Point(31, 115);
			   this->FName_PA_lab->Name = L"FName_PA_lab";
			   this->FName_PA_lab->Size = System::Drawing::Size(74, 29);
			   this->FName_PA_lab->TabIndex = 1;
			   this->FName_PA_lab->Text = L"label2";
			   // 
			   // PA_pic
			   // 
			   this->PA_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_pic.Image")));
			   this->PA_pic->Location = System::Drawing::Point(51, 3);
			   this->PA_pic->Name = L"PA_pic";
			   this->PA_pic->Size = System::Drawing::Size(152, 114);
			   this->PA_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->PA_pic->TabIndex = 0;
			   this->PA_pic->TabStop = false;
			   // 
			   // PA_logout_but
			   // 
			   this->PA_logout_but->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->PA_logout_but->FlatAppearance->BorderSize = 0;
			   this->PA_logout_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_logout_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_logout_but->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_logout_but->Location = System::Drawing::Point(0, 589);
			   this->PA_logout_but->Name = L"PA_logout_but";
			   this->PA_logout_but->Size = System::Drawing::Size(264, 65);
			   this->PA_logout_but->TabIndex = 1;
			   this->PA_logout_but->Text = L"Log out";
			   this->PA_logout_but->UseVisualStyleBackColor = true;
			   this->PA_logout_but->Click += gcnew System::EventHandler(this, &mainPage::PA_logout_but_Click);
			   // 
			   // mainPage
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->ClientSize = System::Drawing::Size(1030, 654);
			   this->Controls->Add(this->AD_conpage);
			   this->Controls->Add(this->StartUP_page);
			   this->Controls->Add(this->PA_conpage);
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"mainPage";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"CareConnect Hospital Suite";
			   this->Load += gcnew System::EventHandler(this, &mainPage::mainPage_Load);
			   this->StartUP_page->ResumeLayout(false);
			   this->regis_pn->ResumeLayout(false);
			   this->regis_pn->PerformLayout();
			   this->login_pn->ResumeLayout(false);
			   this->login_pn->PerformLayout();
			   this->AD_conpage->ResumeLayout(false);
			   this->AD_pages->ResumeLayout(false);
			   this->AD_modify_Hinfo->ResumeLayout(false);
			   this->AD_Modifyinput->ResumeLayout(false);
			   this->AD_Modifyinput->PerformLayout();
			   this->AD_modifyHSC_layout->ResumeLayout(false);
			   this->AD_modifyHSC_layout->PerformLayout();
			   this->AD_groupchoice->ResumeLayout(false);
			   this->AD_headerModify->ResumeLayout(false);
			   this->AD_viewAinfo->ResumeLayout(false);
			   this->AD_viewAinfo->PerformLayout();
			   this->AD_edit_Hlist->ResumeLayout(false);
			   this->AD_addHlayout->ResumeLayout(false);
			   this->AD_addHlayout->PerformLayout();
			   this->AD_waitingP->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->AD_deleteHlayout->ResumeLayout(false);
			   this->AD_deleteHlayout->PerformLayout();
			   this->AD_header_editH->ResumeLayout(false);
			   this->AD_editAinfo->ResumeLayout(false);
			   this->AD_editAinfo->PerformLayout();
			   this->AD_startWindow->ResumeLayout(false);
			   this->AD_startWindow->PerformLayout();
			   this->AD_view_Pinfo->ResumeLayout(false);
			   this->AD_view_Pinfo->PerformLayout();
			   this->AD_view_Hinfo->ResumeLayout(false);
			   this->AD_view_Hinfo->PerformLayout();
			   this->side_AD_bar_pn->ResumeLayout(false);
			   this->AD_info_pn->ResumeLayout(false);
			   this->AD_info_pn->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AD_pic))->EndInit();
			   this->PA_conpage->ResumeLayout(false);
			   this->PA_pages->ResumeLayout(false);
			   this->PA_startwindow->ResumeLayout(false);
			   this->PA_startwindow->PerformLayout();
			   this->PA_viewHinfo->ResumeLayout(false);
			   this->PA_viewHinfo->PerformLayout();
			   this->PA_reservlist->ResumeLayout(false);
			   this->PA_reservlist->PerformLayout();
			   this->PA_ModifyReserv->ResumeLayout(false);
			   this->PA_ModifyReserv->PerformLayout();
			   this->PA_editReserv->ResumeLayout(false);
			   this->PA_editReserv->PerformLayout();
			   this->PA_viewPinfo->ResumeLayout(false);
			   this->PA_viewPinfo->PerformLayout();
			   this->PA_editPinfo->ResumeLayout(false);
			   this->PA_editPinfo->PerformLayout();
			   this->side_PA_bar_pn->ResumeLayout(false);
			   this->PA_info_pn->ResumeLayout(false);
			   this->PA_info_pn->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PA_pic))->EndInit();
			   this->ResumeLayout(false);

		  }
#pragma endregion

	 private: System::Void mainPage_Load(System::Object^ sender, System::EventArgs^ e) {
		  StartUP_page->BringToFront();
		  login_pn->BringToFront();
	 }
	 private: System::Void SignIUP_but_Click(System::Object^ sender, System::EventArgs^ e) {

		  String^ name_user;
		  msclr::interop::marshal_context context;
		  temp.username = context.marshal_as<string>(userBox->Text);
		  temp.password = context.marshal_as<string>(passBox->Text);
		  if (f.loginAsAdmin(user, temp)) {
			   name_user = gcnew String(temp.name.c_str());

			   AD_conpage->BringToFront();
			   AD_startWindow->BringToFront();
			   FName_AD_lab->Text = name_user;
			   warning_massage->Text = "";
			   passBox->Text = "";
			   userBox->Text = "";
		  }
		  else if (f.loginAsPatient(user, temp)) {
			   name_user = gcnew String(temp.name.c_str());
			   FName_PA_lab->Text = name_user;
			   PA_conpage->BringToFront();
			   PA_startwindow->BringToFront();
			   warning_massage->Text = "";
			   passBox->Text = "";
			   userBox->Text = "";
		  }
		  else
			   warning_massage->Text = "may be passward or username os wrong\nplease try again";

	 }
	 private: System::Void request_regis_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  regis_pn->BringToFront();
	 }
	 private: System::Void regis_ShowPass_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  regis_ConPass_TBox->UseSystemPasswordChar = !regis_ConPass_TBox->UseSystemPasswordChar;
		  regis_Pass_TBox->UseSystemPasswordChar = !regis_Pass_TBox->UseSystemPasswordChar;
	 }
	 private: System::Void login_ShowPass_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  passBox->UseSystemPasswordChar = !passBox->UseSystemPasswordChar;
	 }
	 private: System::Void AD_logout_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  StartUP_page->BringToFront();
		  login_pn->BringToFront();
	 }
	 private: System::Void regis_backTologin_Click(System::Object^ sender, System::EventArgs^ e) {
		  login_pn->BringToFront();
	 }
	 private: System::Void PA_logout_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  StartUP_page->BringToFront();
		  login_pn->BringToFront();
	 }
	 private: System::Void AD_addORdel_hos_but_Click(System::Object^ sender, System::EventArgs^ e) {
		 
		  AD_edit_Hlist->BringToFront();
		  AD_waitingP->BringToFront();
	 }
	 private: System::Void AD_modify_hos_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  AD_modify_Hinfo->BringToFront();
	 }
	 private: System::Void AD_dispaly_hos_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  AD_view_Hinfo->BringToFront();
	 }
	 private: System::Void AD_dispatient_hos_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  AD_view_Pinfo->BringToFront();
	 }
     private: System::Void view_AInfo_Click(System::Object^ sender, System::EventArgs^ e) {
         AD_viewAinfo->BringToFront();
		 personalinfo();
     }
	 private: System::Void edit_AInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		  AD_editAinfo->BringToFront();
	 }
	 private: System::Void PA_view_hosInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_viewHinfo->BringToFront();
	 }
	 private: System::Void PA_ViewReserveList_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_reservlist->BringToFront();
	 }
	 private: System::Void PA_MOReserv_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_ModifyReserv->BringToFront();
	 }
	 private: System::Void PA_addORdelReserv_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_editReserv->BringToFront();
	 }
	 private: System::Void edit_PInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_editPinfo->BringToFront();
	 }
	 private: System::Void view_PInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_viewPinfo->BringToFront();
	 }
	

private: System::Void AD_IDselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "ID";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false; AD_ModifyHSClist->Visible = false;
}
private: System::Void AD_PRRselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Number of Avaliable rooms";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false;
	AD_ModifyHSClist->Visible = false;
}
private: System::Void AD_RPselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Reservation Price";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false;
	AD_ModifyHSClist->Visible = false;
}
private: System::Void AD_BPselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Bed Price";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false;
	AD_ModifyHSClist->Visible = false;
}
private: System::Void AD_HRselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Hospital Rate";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false;
	AD_ModifyHSClist->Visible = false;
}
private: System::Void AD_HNselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Hospital Name";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false; 
	AD_ModifyHSClist->Visible = false;
}
private: System::Void AD_HSselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Hospital Specialties";
	AD_HSClist->Text = "Specialties List";
	AD_ModifyHSClist->Text = "Specialties List";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = true;
	AD_ModifyHSClist->Visible = true;
	AD_addHSC->Visible = true;
}
private: System::Void AD_HCselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Hospital Clinics";
	AD_ModifyHSClist->Text = "Clinics List";
	AD_HSClist->Text = "Clinics List";
	AD_ModifyHSClist->Visible = true;
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = true;
	AD_addHSC->Visible = true;
}
private: System::Void AD_closeModify_Click(System::Object^ sender, System::EventArgs^ e) {
	 	AD_Modifyinput->Visible = false;
		AD_modifyHSC_layout->Visible = false;
		AD_deleteHSC->Visible = false;
		AD_addHSC->Visible = false;
		AD_ModifyHSClist->Visible = false;
		AD_HSClist->Visible = false;
}
private: System::Void AD_deleteHSC_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_modifyHSC_layout->Visible = true;
	 AD_HSCorder->Visible = false;
	 AD_TBforAddHSC->Visible = false;
	 AD_stateHSC->Visible = false;
	 AD_confirmAdd->Visible = false;
	 AD_stateHSC->Text = "";
	 AD_HSClist->Visible = true;
	 AD_selectHSC->Visible = true;
}
private: System::Void AD_addHSC_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_modifyHSC_layout->Visible = true;
	 AD_HSCorder->Visible = true;
	 AD_TBforAddHSC->Visible = true;
	 AD_stateHSC->Visible = true;
	 AD_stateHSC->Text="";
	 AD_HSClist->Visible = false;
	 AD_selectHSC->Visible = false;
	 AD_confirmAdd->Visible = true;
}
private: System::Void AD_addH_but_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_addHlayout->BringToFront();
}
private: System::Void AD_deleteH_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_deleteHlayout->BringToFront();
}
};
}
