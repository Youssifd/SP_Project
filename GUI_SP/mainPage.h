#pragma once
#include <msclr/marshal_cppstd.h>
#include"Structs.h"
#include"mainFun.h"
mainFun f;
Users user[NumberOfUsers], temp;
Hospitals hospital[NumberOfHospital],Htemp;
Reservations Rtemp;
bool exist = true;
namespace GUISP {

	 using namespace System;
	 using namespace System::ComponentModel;
	 using namespace System::Collections;
	 using namespace System::Windows::Forms;
	 using namespace System::Data;
	 using namespace System::Drawing;

	 public ref class mainPage : public System::Windows::Forms::Form
	 {
	 public:
		  msclr::interop::marshal_context context;
		  mainPage(void)
		  {
			   InitializeComponent();
		  }
		  void personalinfo();
		  void searchHindex(string Ser);
		  void searchRindex(int Ser);
		  void searchPindex(string Ser);
		  void searchSPindex(string Ser);
		  void searchDindex(string Ser);
		  void searchCLindex(string Ser);
		  void displayHinfo();
		  void displayPinfo();
		  void AddHospital(Hospitals hos[]);
		  void modifyHospital();
		  void modifyHSC();
		  void DisplayRInfo();
		  void makeReservation();
		  void modifyReservation();

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
	 private: System::Windows::Forms::Label^ AD_viewPinfo_Name;
	 private: System::Windows::Forms::Panel^ AD_editAinfo;
	 private: System::Windows::Forms::Panel^ AD_viewAinfo;
	 private: System::Windows::Forms::Label^ AD_AID;
	 private: System::Windows::Forms::Panel^ PA_pages;
	 private: System::Windows::Forms::Panel^ PA_startwindow;
	 private: System::Windows::Forms::Label^ label9;
	 private: System::Windows::Forms::Panel^ PA_viewHinfo;
	 private: System::Windows::Forms::Label^ PA_Hinfo_ID;
	 private: System::Windows::Forms::Panel^ PA_reservlist;
	 private: System::Windows::Forms::Label^ PA_viewR_RoomID;
	 private: System::Windows::Forms::Panel^ PA_ModifyReserv;
	 private: System::Windows::Forms::Panel^ PA_editReserv;
	 private: System::Windows::Forms::Label^ label13;
	 private: System::Windows::Forms::Panel^ PA_viewPinfo;
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

private: System::Windows::Forms::Label^ AD_HSCorder;
private: System::Windows::Forms::ComboBox^ AD_HSClist;
private: System::Windows::Forms::Label^ AD_stateHSC1;

private: System::Windows::Forms::Button^ AD_selectHSC;
private: System::Windows::Forms::Button^ AD_confirmAdd;
private: System::Windows::Forms::Panel^ AD_addHlayout;
private: System::Windows::Forms::Button^ AD_addH;
private: System::Windows::Forms::ComboBox^ AD_HListDEL;

private: System::Windows::Forms::Label^ AD_HNorder_lab;
private: System::Windows::Forms::TextBox^ AD_HNorder_TB;
private: System::Windows::Forms::Label^ AD_Herror;

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
private: System::Windows::Forms::Label^ PA_PEmail;
private: System::Windows::Forms::Label^ PA_PGender;
private: System::Windows::Forms::Label^ PA_PphoneN;
private: System::Windows::Forms::Label^ PA_Page;
private: System::Windows::Forms::Label^ PA_PID;
private: System::Windows::Forms::Label^ PA_Ptotalpaid;
private: System::Windows::Forms::Label^ PA_PNreservation;
private: System::Windows::Forms::Panel^ PA_header_editRlist;
private: System::Windows::Forms::Button^ PA_delRlist;
private: System::Windows::Forms::Button^ PA_addRlist;
private: System::Windows::Forms::Panel^ PA_delRlayout;
private: System::Windows::Forms::Label^ PA_delRlist_state;
private: System::Windows::Forms::ComboBox^ PA_delRlist_COM;
private: System::Windows::Forms::Button^ PA_delRlist_but;
private: System::Windows::Forms::Panel^ PA_waitingeditRlist;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Panel^ PA_addRlayout;
private: System::Windows::Forms::Label^ PA_DayenterH_lab;
private: System::Windows::Forms::Label^ PA_PAord_lab;
private: System::Windows::Forms::TextBox^ PA_PAord_TB;
private: System::Windows::Forms::Label^ PA_selectHforR_lab;
private: System::Windows::Forms::Label^ PA_RSClist_lab;
private: System::Windows::Forms::Label^ PA_PphNord_lab;
private: System::Windows::Forms::TextBox^ PA_PphNord_TB;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ PA_PNord_lab;
private: System::Windows::Forms::TextBox^ PA_PNord_TB;


private: System::Windows::Forms::Label^ PA_warningM;
private: System::Windows::Forms::RadioButton^ PA_askwhoreserv_RB2;
private: System::Windows::Forms::RadioButton^ PA_askwhoreserv_RB1;
private: System::Windows::Forms::Label^ PA_askwhoreserv_lab;

private: System::Windows::Forms::ComboBox^ PA_selectHforR_COM;



private: System::Windows::Forms::ComboBox^ PA_DayenterH_COM;

private: System::Windows::Forms::RadioButton^ PA_RtypeCheck_RB2;
private: System::Windows::Forms::RadioButton^ PA_RtypeCheck_RB1;
private: System::Windows::Forms::Panel^ PA_headerM;
private: System::Windows::Forms::Button^ PA_Rlistmodify_but;
private: System::Windows::Forms::ComboBox^ PA_Rlistmodify_com;
private: System::Windows::Forms::Panel^ PA_groupCmodify;
private: System::Windows::Forms::Button^ PA_MNumOfdays;
private: System::Windows::Forms::Button^ PA_MPRday;
private: System::Windows::Forms::Button^ PA_MPRtype;
private: System::Windows::Forms::Button^ PA_MRH;
private: System::Windows::Forms::Button^ PA_MPphNum;
private: System::Windows::Forms::Button^ PA_MPage;
private: System::Windows::Forms::Button^ PA_MPName;
private: System::Windows::Forms::Label^ PA_modifyRord_lab;
private: System::Windows::Forms::Panel^ PA_editNAPhnumlayout;
private: System::Windows::Forms::Label^ PA_modifyRstate_lab;
private: System::Windows::Forms::TextBox^ PA_modifyRord_TB;
private: System::Windows::Forms::Panel^ PA_modifyHRTRDsLayout;
private: System::Windows::Forms::ComboBox^ PA_listOfHRtypeRdays;
private: System::Windows::Forms::Label^ PA_StateOflist;
private: System::Windows::Forms::Label^ PA_OrderOflist;
private: System::Windows::Forms::Panel^ PA_viewHinfoHeader;
private: System::Windows::Forms::ComboBox^ PA_viewHList;
private: System::Windows::Forms::Label^ PA_Hinfo_bedsAva;


private: System::Windows::Forms::Label^ PA_Hinfo_rate;
private: System::Windows::Forms::Label^ PA_Hinfo_Name;
private: System::Windows::Forms::Label^ PA_Hinfo_Bedprice;
private: System::Windows::Forms::Label^ PA_Hinfo_surgeryprice;
private: System::Windows::Forms::Label^ PA_Hinfo_Rprice;


private: System::Windows::Forms::Button^ PA_viewHButton;


private: System::Windows::Forms::Label^ AD_viewHinfo_BedsPrice;
private: System::Windows::Forms::Label^ AD_viewHinfo_surgeryPrice;
private: System::Windows::Forms::Label^ AD_viewHinfo_Rprice;
private: System::Windows::Forms::Label^ AD_viewHinfo_bedsAva;
private: System::Windows::Forms::Label^ AD_viewHinfo_Rate;
private: System::Windows::Forms::Label^ AD_viewHinfo_Name;
private: System::Windows::Forms::Panel^ AD_viewHinfoHeader;
private: System::Windows::Forms::Button^ AD_viewHbutton;
private: System::Windows::Forms::ComboBox^ AD_viewHList;
private: System::Windows::Forms::Label^ AD_viewHinfo_ID;
private: System::Windows::Forms::Label^ PA_viewR_bedPrice;
private: System::Windows::Forms::Label^ PA_viewR_SurgeryPrice;
private: System::Windows::Forms::Label^ PA_viewR_ChandTPrice;
private: System::Windows::Forms::Label^ PA_viewR_phoneN;
private: System::Windows::Forms::Label^ PA_viewR_Day;
private: System::Windows::Forms::Label^ PA_viewR_HReserved;
private: System::Windows::Forms::Label^ PA_viewR_PName;
private: System::Windows::Forms::Panel^ PA_reservlist_header;
private: System::Windows::Forms::Button^ PA_viewRButton;
private: System::Windows::Forms::ComboBox^ PA_viewRlist;
private: System::Windows::Forms::Label^ PA_viewR_HSpCl;
private: System::Windows::Forms::Label^ AD_viewPinfo_NumOfR;
private: System::Windows::Forms::Label^ AD_viewPinfo_Totalpaid;
private: System::Windows::Forms::Label^ AD_viewPinfo_Email;
private: System::Windows::Forms::Label^ AD_viewPinfo_Gender;
private: System::Windows::Forms::Label^ AD_viewPinfo_PhNum;
private: System::Windows::Forms::Label^ AD_viewPinfo_Age;
private: System::Windows::Forms::Panel^ AD_viewPlist_header;
private: System::Windows::Forms::Button^ AD_viewPButton;
private: System::Windows::Forms::ComboBox^ AD_viewPlist;
private: System::Windows::Forms::Panel^ AD_GofCHEditAinfo;
private: System::Windows::Forms::Button^ AD_editPhNum;
private: System::Windows::Forms::Button^ AD_editpass_button;
private: System::Windows::Forms::Button^ AD_editusername;
private: System::Windows::Forms::Button^ AD_editAge;
private: System::Windows::Forms::Button^ AD_editName;
private: System::Windows::Forms::Panel^ AD_editpass;
private: System::Windows::Forms::Panel^ AD_editRemain;
private: System::Windows::Forms::Label^ AD_editRemain_state;
private: System::Windows::Forms::TextBox^ AD_editRemain_TB;
private: System::Windows::Forms::Label^ AD_editRemain_lab;
private: System::Windows::Forms::Label^ AD_askOldPass_lab;
private: System::Windows::Forms::TextBox^ AD_askconfPass_TB;
private: System::Windows::Forms::Label^ AD_askconfPass_lab;
private: System::Windows::Forms::TextBox^ AD_askNewPass_TB;
private: System::Windows::Forms::Label^ AD_askNewPass_lab;
private: System::Windows::Forms::TextBox^ AD_askOldPass_TB;
private: System::Windows::Forms::Panel^ PA_editPinfo;
private: System::Windows::Forms::Panel^ PA_editpass;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Panel^ PA_editRemain;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ PA_editRemain_TB;

private: System::Windows::Forms::Label^ PA_editRemain_lab;




private: System::Windows::Forms::Panel^ PA_GofCHEditPinfo;
private: System::Windows::Forms::Button^ PA_editPhNum;
private: System::Windows::Forms::Button^ PA_editpass_but;
private: System::Windows::Forms::Button^ PA_editusername;
private: System::Windows::Forms::Button^ PA_editAge;
private: System::Windows::Forms::Button^ PA_editName;
private: System::Windows::Forms::Panel^ AD_edit_wiating;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Panel^ PA_edit_waiting;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::ListBox^ AD_viewHinfo_HCllist;
private: System::Windows::Forms::ListBox^ AD_viewHinfo_HSplist;
private: System::Windows::Forms::Label^ AD_text2;
private: System::Windows::Forms::Label^ AD_text1;
private: System::Windows::Forms::Label^ PA_text2;



private: System::Windows::Forms::Label^ PA_text1;

private: System::Windows::Forms::ListBox^ PA_Hinfo_HCLlist;
private: System::Windows::Forms::ListBox^ PA_Hinfo_HSplist;
private: System::Windows::Forms::Label^ AD_viewPinfo_ID;
private: System::Windows::Forms::Label^ AD_DELhospitalRate;
private: System::Windows::Forms::Label^ AD_DELhospitalID;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::Label^ AD_addcom;
private: System::Windows::Forms::Label^ AD_HSPorder_lab11;

private: System::Windows::Forms::TextBox^ AD_HSPorder_TB;
private: System::Windows::Forms::Label^ Exist;
private: System::Windows::Forms::Panel^ AD_ADDHSC_lay;
private: System::Windows::Forms::Panel^ AD_DELHSC_lay;




private: System::Windows::Forms::Label^ AD_stateHSC2;
private: System::Windows::Forms::Label^ AD_AskHSC;


private: System::Windows::Forms::Button^ CloseTab1;
private: System::Windows::Forms::Button^ CloseTab2;

private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::Label^ AD_warning1;
private: System::Windows::Forms::TextBox^ AD_TBforAddHSC;
private: System::Windows::Forms::Label^ PA_viewR_PAge;
private: System::Windows::Forms::Panel^ PA_Check1;
private: System::Windows::Forms::Panel^ PA_Check2;


private: System::Windows::Forms::Label^ PA_RtypeCheck;
private: System::Windows::Forms::ComboBox^ PA_RSClist_COM;
private: System::Windows::Forms::Label^ PA_PNumOfDays_lab;
private: System::Windows::Forms::TextBox^ PA_PNumOfDays_TB;
private: System::Windows::Forms::Label^ PA_text4;
private: System::Windows::Forms::Label^ PA_text3;
private: System::Windows::Forms::Button^ PA_editRbutton;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ PA_Rnumbofdays;
private: System::Windows::Forms::Label^ PA_numofdays;
private: System::Windows::Forms::Label^ messege;
private: System::Windows::Forms::Label^ label7;






















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
			   this->login_pn = (gcnew System::Windows::Forms::Panel());
			   this->request_regis_but = (gcnew System::Windows::Forms::Button());
			   this->login_ShowPass_but = (gcnew System::Windows::Forms::Button());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->warning_massage = (gcnew System::Windows::Forms::Label());
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
			   this->AD_conpage = (gcnew System::Windows::Forms::Panel());
			   this->AD_pages = (gcnew System::Windows::Forms::Panel());
			   this->AD_editAinfo = (gcnew System::Windows::Forms::Panel());
			   this->AD_editRemain = (gcnew System::Windows::Forms::Panel());
			   this->AD_editRemain_state = (gcnew System::Windows::Forms::Label());
			   this->AD_editRemain_TB = (gcnew System::Windows::Forms::TextBox());
			   this->AD_editRemain_lab = (gcnew System::Windows::Forms::Label());
			   this->AD_edit_wiating = (gcnew System::Windows::Forms::Panel());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->AD_editpass = (gcnew System::Windows::Forms::Panel());
			   this->AD_askconfPass_TB = (gcnew System::Windows::Forms::TextBox());
			   this->AD_askconfPass_lab = (gcnew System::Windows::Forms::Label());
			   this->AD_askNewPass_TB = (gcnew System::Windows::Forms::TextBox());
			   this->AD_askNewPass_lab = (gcnew System::Windows::Forms::Label());
			   this->AD_askOldPass_TB = (gcnew System::Windows::Forms::TextBox());
			   this->AD_askOldPass_lab = (gcnew System::Windows::Forms::Label());
			   this->AD_GofCHEditAinfo = (gcnew System::Windows::Forms::Panel());
			   this->AD_editPhNum = (gcnew System::Windows::Forms::Button());
			   this->AD_editpass_button = (gcnew System::Windows::Forms::Button());
			   this->AD_editusername = (gcnew System::Windows::Forms::Button());
			   this->AD_editAge = (gcnew System::Windows::Forms::Button());
			   this->AD_editName = (gcnew System::Windows::Forms::Button());
			   this->AD_view_Pinfo = (gcnew System::Windows::Forms::Panel());
			   this->AD_viewPinfo_ID = (gcnew System::Windows::Forms::Label());
			   this->AD_viewPinfo_NumOfR = (gcnew System::Windows::Forms::Label());
			   this->AD_viewPinfo_Totalpaid = (gcnew System::Windows::Forms::Label());
			   this->AD_viewPinfo_Email = (gcnew System::Windows::Forms::Label());
			   this->AD_viewPinfo_Gender = (gcnew System::Windows::Forms::Label());
			   this->AD_viewPinfo_PhNum = (gcnew System::Windows::Forms::Label());
			   this->AD_viewPinfo_Age = (gcnew System::Windows::Forms::Label());
			   this->AD_viewPlist_header = (gcnew System::Windows::Forms::Panel());
			   this->AD_viewPButton = (gcnew System::Windows::Forms::Button());
			   this->AD_viewPlist = (gcnew System::Windows::Forms::ComboBox());
			   this->AD_viewPinfo_Name = (gcnew System::Windows::Forms::Label());
			   this->AD_modify_Hinfo = (gcnew System::Windows::Forms::Panel());
			   this->AD_Modifyinput = (gcnew System::Windows::Forms::Panel());
			   this->AD_warning1 = (gcnew System::Windows::Forms::Label());
			   this->AD_ModifyHSClist = (gcnew System::Windows::Forms::ComboBox());
			   this->AD_confirmedit = (gcnew System::Windows::Forms::Button());
			   this->AD_deleteHSC = (gcnew System::Windows::Forms::Button());
			   this->AD_addHSC = (gcnew System::Windows::Forms::Button());
			   this->AD_modifyHSC_layout = (gcnew System::Windows::Forms::Panel());
			   this->AD_DELHSC_lay = (gcnew System::Windows::Forms::Panel());
			   this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			   this->CloseTab1 = (gcnew System::Windows::Forms::Button());
			   this->AD_AskHSC = (gcnew System::Windows::Forms::Label());
			   this->AD_selectHSC = (gcnew System::Windows::Forms::Button());
			   this->AD_HSClist = (gcnew System::Windows::Forms::ComboBox());
			   this->AD_stateHSC1 = (gcnew System::Windows::Forms::Label());
			   this->AD_ADDHSC_lay = (gcnew System::Windows::Forms::Panel());
			   this->AD_TBforAddHSC = (gcnew System::Windows::Forms::TextBox());
			   this->CloseTab2 = (gcnew System::Windows::Forms::Button());
			   this->AD_stateHSC2 = (gcnew System::Windows::Forms::Label());
			   this->AD_confirmAdd = (gcnew System::Windows::Forms::Button());
			   this->AD_HSCorder = (gcnew System::Windows::Forms::Label());
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
			   this->AD_edit_Hlist = (gcnew System::Windows::Forms::Panel());
			   this->AD_addHlayout = (gcnew System::Windows::Forms::Panel());
			   this->AD_HSPorder_lab11 = (gcnew System::Windows::Forms::Label());
			   this->AD_HSPorder_TB = (gcnew System::Windows::Forms::TextBox());
			   this->AD_addcom = (gcnew System::Windows::Forms::Label());
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
			   this->AD_Herror = (gcnew System::Windows::Forms::Label());
			   this->AD_deleteHlayout = (gcnew System::Windows::Forms::Panel());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->AD_DELhospitalRate = (gcnew System::Windows::Forms::Label());
			   this->AD_DELhospitalID = (gcnew System::Windows::Forms::Label());
			   this->AD_messegeState = (gcnew System::Windows::Forms::Label());
			   this->AD_HListDEL = (gcnew System::Windows::Forms::ComboBox());
			   this->AD_selectHD = (gcnew System::Windows::Forms::Button());
			   this->AD_waitingP = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->AD_header_editH = (gcnew System::Windows::Forms::Panel());
			   this->AD_deleteH = (gcnew System::Windows::Forms::Button());
			   this->AD_addH_but = (gcnew System::Windows::Forms::Button());
			   this->AD_view_Hinfo = (gcnew System::Windows::Forms::Panel());
			   this->Exist = (gcnew System::Windows::Forms::Label());
			   this->AD_text2 = (gcnew System::Windows::Forms::Label());
			   this->AD_text1 = (gcnew System::Windows::Forms::Label());
			   this->AD_viewHinfo_HSplist = (gcnew System::Windows::Forms::ListBox());
			   this->AD_viewHinfo_HCllist = (gcnew System::Windows::Forms::ListBox());
			   this->AD_viewHinfo_ID = (gcnew System::Windows::Forms::Label());
			   this->AD_viewHinfo_BedsPrice = (gcnew System::Windows::Forms::Label());
			   this->AD_viewHinfo_surgeryPrice = (gcnew System::Windows::Forms::Label());
			   this->AD_viewHinfo_Rprice = (gcnew System::Windows::Forms::Label());
			   this->AD_viewHinfo_bedsAva = (gcnew System::Windows::Forms::Label());
			   this->AD_viewHinfo_Rate = (gcnew System::Windows::Forms::Label());
			   this->AD_viewHinfo_Name = (gcnew System::Windows::Forms::Label());
			   this->AD_viewHinfoHeader = (gcnew System::Windows::Forms::Panel());
			   this->AD_viewHbutton = (gcnew System::Windows::Forms::Button());
			   this->AD_viewHList = (gcnew System::Windows::Forms::ComboBox());
			   this->AD_startWindow = (gcnew System::Windows::Forms::Panel());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->AD_viewAinfo = (gcnew System::Windows::Forms::Panel());
			   this->AD_AEmail = (gcnew System::Windows::Forms::Label());
			   this->AD_AGender = (gcnew System::Windows::Forms::Label());
			   this->AD_AphoneN = (gcnew System::Windows::Forms::Label());
			   this->AD_Aage = (gcnew System::Windows::Forms::Label());
			   this->AD_AID = (gcnew System::Windows::Forms::Label());
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
			   this->PA_editReserv = (gcnew System::Windows::Forms::Panel());
			   this->PA_addRlayout = (gcnew System::Windows::Forms::Panel());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->PA_PNumOfDays_lab = (gcnew System::Windows::Forms::Label());
			   this->PA_PNumOfDays_TB = (gcnew System::Windows::Forms::TextBox());
			   this->PA_Check1 = (gcnew System::Windows::Forms::Panel());
			   this->PA_askwhoreserv_lab = (gcnew System::Windows::Forms::Label());
			   this->PA_askwhoreserv_RB2 = (gcnew System::Windows::Forms::RadioButton());
			   this->PA_askwhoreserv_RB1 = (gcnew System::Windows::Forms::RadioButton());
			   this->PA_Check2 = (gcnew System::Windows::Forms::Panel());
			   this->PA_RtypeCheck_RB2 = (gcnew System::Windows::Forms::RadioButton());
			   this->PA_RtypeCheck = (gcnew System::Windows::Forms::Label());
			   this->PA_RtypeCheck_RB1 = (gcnew System::Windows::Forms::RadioButton());
			   this->PA_DayenterH_COM = (gcnew System::Windows::Forms::ComboBox());
			   this->PA_RSClist_COM = (gcnew System::Windows::Forms::ComboBox());
			   this->PA_selectHforR_COM = (gcnew System::Windows::Forms::ComboBox());
			   this->PA_DayenterH_lab = (gcnew System::Windows::Forms::Label());
			   this->PA_PAord_lab = (gcnew System::Windows::Forms::Label());
			   this->PA_PAord_TB = (gcnew System::Windows::Forms::TextBox());
			   this->PA_selectHforR_lab = (gcnew System::Windows::Forms::Label());
			   this->PA_RSClist_lab = (gcnew System::Windows::Forms::Label());
			   this->PA_PphNord_lab = (gcnew System::Windows::Forms::Label());
			   this->PA_PphNord_TB = (gcnew System::Windows::Forms::TextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->PA_PNord_lab = (gcnew System::Windows::Forms::Label());
			   this->PA_PNord_TB = (gcnew System::Windows::Forms::TextBox());
			   this->PA_warningM = (gcnew System::Windows::Forms::Label());
			   this->PA_delRlayout = (gcnew System::Windows::Forms::Panel());
			   this->PA_text4 = (gcnew System::Windows::Forms::Label());
			   this->PA_text3 = (gcnew System::Windows::Forms::Label());
			   this->PA_delRlist_state = (gcnew System::Windows::Forms::Label());
			   this->PA_delRlist_COM = (gcnew System::Windows::Forms::ComboBox());
			   this->PA_delRlist_but = (gcnew System::Windows::Forms::Button());
			   this->PA_waitingeditRlist = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->PA_header_editRlist = (gcnew System::Windows::Forms::Panel());
			   this->PA_delRlist = (gcnew System::Windows::Forms::Button());
			   this->PA_addRlist = (gcnew System::Windows::Forms::Button());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->PA_reservlist = (gcnew System::Windows::Forms::Panel());
			   this->PA_viewR_PAge = (gcnew System::Windows::Forms::Label());
			   this->PA_viewR_HSpCl = (gcnew System::Windows::Forms::Label());
			   this->PA_viewR_bedPrice = (gcnew System::Windows::Forms::Label());
			   this->PA_viewR_SurgeryPrice = (gcnew System::Windows::Forms::Label());
			   this->PA_viewR_ChandTPrice = (gcnew System::Windows::Forms::Label());
			   this->PA_viewR_phoneN = (gcnew System::Windows::Forms::Label());
			   this->PA_viewR_Day = (gcnew System::Windows::Forms::Label());
			   this->PA_viewR_HReserved = (gcnew System::Windows::Forms::Label());
			   this->PA_viewR_PName = (gcnew System::Windows::Forms::Label());
			   this->PA_viewR_RoomID = (gcnew System::Windows::Forms::Label());
			   this->PA_reservlist_header = (gcnew System::Windows::Forms::Panel());
			   this->PA_viewRButton = (gcnew System::Windows::Forms::Button());
			   this->PA_viewRlist = (gcnew System::Windows::Forms::ComboBox());
			   this->PA_editPinfo = (gcnew System::Windows::Forms::Panel());
			   this->PA_editRemain = (gcnew System::Windows::Forms::Panel());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->PA_editRemain_TB = (gcnew System::Windows::Forms::TextBox());
			   this->PA_editRemain_lab = (gcnew System::Windows::Forms::Label());
			   this->PA_edit_waiting = (gcnew System::Windows::Forms::Panel());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->PA_editpass = (gcnew System::Windows::Forms::Panel());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->PA_GofCHEditPinfo = (gcnew System::Windows::Forms::Panel());
			   this->PA_editPhNum = (gcnew System::Windows::Forms::Button());
			   this->PA_editpass_but = (gcnew System::Windows::Forms::Button());
			   this->PA_editusername = (gcnew System::Windows::Forms::Button());
			   this->PA_editAge = (gcnew System::Windows::Forms::Button());
			   this->PA_editName = (gcnew System::Windows::Forms::Button());
			   this->PA_ModifyReserv = (gcnew System::Windows::Forms::Panel());
			   this->PA_editNAPhnumlayout = (gcnew System::Windows::Forms::Panel());
			   this->PA_editRbutton = (gcnew System::Windows::Forms::Button());
			   this->PA_modifyRstate_lab = (gcnew System::Windows::Forms::Label());
			   this->PA_modifyRord_TB = (gcnew System::Windows::Forms::TextBox());
			   this->PA_modifyRord_lab = (gcnew System::Windows::Forms::Label());
			   this->PA_modifyHRTRDsLayout = (gcnew System::Windows::Forms::Panel());
			   this->PA_Rnumbofdays = (gcnew System::Windows::Forms::TextBox());
			   this->PA_numofdays = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->PA_Rlistmodify_but = (gcnew System::Windows::Forms::Button());
			   this->PA_listOfHRtypeRdays = (gcnew System::Windows::Forms::ComboBox());
			   this->PA_StateOflist = (gcnew System::Windows::Forms::Label());
			   this->PA_OrderOflist = (gcnew System::Windows::Forms::Label());
			   this->PA_groupCmodify = (gcnew System::Windows::Forms::Panel());
			   this->PA_MNumOfdays = (gcnew System::Windows::Forms::Button());
			   this->PA_MPRday = (gcnew System::Windows::Forms::Button());
			   this->PA_MPRtype = (gcnew System::Windows::Forms::Button());
			   this->PA_MRH = (gcnew System::Windows::Forms::Button());
			   this->PA_MPphNum = (gcnew System::Windows::Forms::Button());
			   this->PA_MPage = (gcnew System::Windows::Forms::Button());
			   this->PA_MPName = (gcnew System::Windows::Forms::Button());
			   this->PA_headerM = (gcnew System::Windows::Forms::Panel());
			   this->messege = (gcnew System::Windows::Forms::Label());
			   this->PA_Rlistmodify_com = (gcnew System::Windows::Forms::ComboBox());
			   this->PA_viewHinfo = (gcnew System::Windows::Forms::Panel());
			   this->PA_Hinfo_HCLlist = (gcnew System::Windows::Forms::ListBox());
			   this->PA_Hinfo_HSplist = (gcnew System::Windows::Forms::ListBox());
			   this->PA_text2 = (gcnew System::Windows::Forms::Label());
			   this->PA_text1 = (gcnew System::Windows::Forms::Label());
			   this->PA_Hinfo_Bedprice = (gcnew System::Windows::Forms::Label());
			   this->PA_Hinfo_surgeryprice = (gcnew System::Windows::Forms::Label());
			   this->PA_Hinfo_Rprice = (gcnew System::Windows::Forms::Label());
			   this->PA_Hinfo_bedsAva = (gcnew System::Windows::Forms::Label());
			   this->PA_Hinfo_rate = (gcnew System::Windows::Forms::Label());
			   this->PA_Hinfo_Name = (gcnew System::Windows::Forms::Label());
			   this->PA_viewHinfoHeader = (gcnew System::Windows::Forms::Panel());
			   this->PA_viewHButton = (gcnew System::Windows::Forms::Button());
			   this->PA_viewHList = (gcnew System::Windows::Forms::ComboBox());
			   this->PA_Hinfo_ID = (gcnew System::Windows::Forms::Label());
			   this->PA_viewPinfo = (gcnew System::Windows::Forms::Panel());
			   this->PA_PNreservation = (gcnew System::Windows::Forms::Label());
			   this->PA_Ptotalpaid = (gcnew System::Windows::Forms::Label());
			   this->PA_PEmail = (gcnew System::Windows::Forms::Label());
			   this->PA_PGender = (gcnew System::Windows::Forms::Label());
			   this->PA_PphoneN = (gcnew System::Windows::Forms::Label());
			   this->PA_Page = (gcnew System::Windows::Forms::Label());
			   this->PA_PID = (gcnew System::Windows::Forms::Label());
			   this->PA_startwindow = (gcnew System::Windows::Forms::Panel());
			   this->label9 = (gcnew System::Windows::Forms::Label());
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
			   this->login_pn->SuspendLayout();
			   this->regis_pn->SuspendLayout();
			   this->AD_conpage->SuspendLayout();
			   this->AD_pages->SuspendLayout();
			   this->AD_editAinfo->SuspendLayout();
			   this->AD_editRemain->SuspendLayout();
			   this->AD_edit_wiating->SuspendLayout();
			   this->AD_editpass->SuspendLayout();
			   this->AD_GofCHEditAinfo->SuspendLayout();
			   this->AD_view_Pinfo->SuspendLayout();
			   this->AD_viewPlist_header->SuspendLayout();
			   this->AD_modify_Hinfo->SuspendLayout();
			   this->AD_Modifyinput->SuspendLayout();
			   this->AD_modifyHSC_layout->SuspendLayout();
			   this->AD_DELHSC_lay->SuspendLayout();
			   this->AD_ADDHSC_lay->SuspendLayout();
			   this->AD_groupchoice->SuspendLayout();
			   this->AD_headerModify->SuspendLayout();
			   this->AD_edit_Hlist->SuspendLayout();
			   this->AD_addHlayout->SuspendLayout();
			   this->AD_deleteHlayout->SuspendLayout();
			   this->AD_waitingP->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->AD_header_editH->SuspendLayout();
			   this->AD_view_Hinfo->SuspendLayout();
			   this->AD_viewHinfoHeader->SuspendLayout();
			   this->AD_startWindow->SuspendLayout();
			   this->AD_viewAinfo->SuspendLayout();
			   this->side_AD_bar_pn->SuspendLayout();
			   this->AD_info_pn->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AD_pic))->BeginInit();
			   this->PA_conpage->SuspendLayout();
			   this->PA_pages->SuspendLayout();
			   this->PA_editReserv->SuspendLayout();
			   this->PA_addRlayout->SuspendLayout();
			   this->PA_Check1->SuspendLayout();
			   this->PA_Check2->SuspendLayout();
			   this->PA_delRlayout->SuspendLayout();
			   this->PA_waitingeditRlist->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->PA_header_editRlist->SuspendLayout();
			   this->PA_reservlist->SuspendLayout();
			   this->PA_reservlist_header->SuspendLayout();
			   this->PA_editPinfo->SuspendLayout();
			   this->PA_editRemain->SuspendLayout();
			   this->PA_edit_waiting->SuspendLayout();
			   this->PA_editpass->SuspendLayout();
			   this->PA_GofCHEditPinfo->SuspendLayout();
			   this->PA_ModifyReserv->SuspendLayout();
			   this->PA_editNAPhnumlayout->SuspendLayout();
			   this->PA_modifyHRTRDsLayout->SuspendLayout();
			   this->panel1->SuspendLayout();
			   this->PA_groupCmodify->SuspendLayout();
			   this->PA_headerM->SuspendLayout();
			   this->PA_viewHinfo->SuspendLayout();
			   this->PA_viewHinfoHeader->SuspendLayout();
			   this->PA_viewPinfo->SuspendLayout();
			   this->PA_startwindow->SuspendLayout();
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
			   this->SignIUP_but->Text = L"Sign in";
			   this->SignIUP_but->UseVisualStyleBackColor = true;
			   this->SignIUP_but->Click += gcnew System::EventHandler(this, &mainPage::SignIIN_but_Click);
			   // 
			   // StartUP_page
			   // 
			   this->StartUP_page->Controls->Add(this->login_pn);
			   this->StartUP_page->Controls->Add(this->regis_pn);
			   this->StartUP_page->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->StartUP_page->Location = System::Drawing::Point(0, 0);
			   this->StartUP_page->Name = L"StartUP_page";
			   this->StartUP_page->Size = System::Drawing::Size(1030, 654);
			   this->StartUP_page->TabIndex = 6;
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
			   this->request_regis_but->Location = System::Drawing::Point(714, 337);
			   this->request_regis_but->Name = L"request_regis_but";
			   this->request_regis_but->Size = System::Drawing::Size(164, 56);
			   this->request_regis_but->TabIndex = 8;
			   this->request_regis_but->Text = L"Sign UP";
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
			   this->label3->Location = System::Drawing::Point(689, 233);
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
			   this->AD_pages->Controls->Add(this->AD_editAinfo);
			   this->AD_pages->Controls->Add(this->AD_view_Pinfo);
			   this->AD_pages->Controls->Add(this->AD_modify_Hinfo);
			   this->AD_pages->Controls->Add(this->AD_edit_Hlist);
			   this->AD_pages->Controls->Add(this->AD_view_Hinfo);
			   this->AD_pages->Controls->Add(this->AD_startWindow);
			   this->AD_pages->Controls->Add(this->AD_viewAinfo);
			   this->AD_pages->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_pages->Location = System::Drawing::Point(273, 0);
			   this->AD_pages->Name = L"AD_pages";
			   this->AD_pages->Size = System::Drawing::Size(757, 654);
			   this->AD_pages->TabIndex = 1;
			   // 
			   // AD_editAinfo
			   // 
			   this->AD_editAinfo->Controls->Add(this->AD_editRemain);
			   this->AD_editAinfo->Controls->Add(this->AD_edit_wiating);
			   this->AD_editAinfo->Controls->Add(this->AD_editpass);
			   this->AD_editAinfo->Controls->Add(this->AD_GofCHEditAinfo);
			   this->AD_editAinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_editAinfo->Location = System::Drawing::Point(0, 0);
			   this->AD_editAinfo->Name = L"AD_editAinfo";
			   this->AD_editAinfo->Size = System::Drawing::Size(757, 654);
			   this->AD_editAinfo->TabIndex = 6;
			   // 
			   // AD_editRemain
			   // 
			   this->AD_editRemain->Controls->Add(this->AD_editRemain_state);
			   this->AD_editRemain->Controls->Add(this->AD_editRemain_TB);
			   this->AD_editRemain->Controls->Add(this->AD_editRemain_lab);
			   this->AD_editRemain->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_editRemain->Location = System::Drawing::Point(195, 0);
			   this->AD_editRemain->Name = L"AD_editRemain";
			   this->AD_editRemain->Size = System::Drawing::Size(562, 654);
			   this->AD_editRemain->TabIndex = 14;
			   // 
			   // AD_editRemain_state
			   // 
			   this->AD_editRemain_state->AutoSize = true;
			   this->AD_editRemain_state->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_editRemain_state->ForeColor = System::Drawing::Color::Red;
			   this->AD_editRemain_state->Location = System::Drawing::Point(53, 200);
			   this->AD_editRemain_state->Name = L"AD_editRemain_state";
			   this->AD_editRemain_state->Size = System::Drawing::Size(53, 19);
			   this->AD_editRemain_state->TabIndex = 2;
			   this->AD_editRemain_state->Text = L"label2";
			   // 
			   // AD_editRemain_TB
			   // 
			   this->AD_editRemain_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_editRemain_TB->Location = System::Drawing::Point(49, 133);
			   this->AD_editRemain_TB->Name = L"AD_editRemain_TB";
			   this->AD_editRemain_TB->Size = System::Drawing::Size(236, 32);
			   this->AD_editRemain_TB->TabIndex = 1;
			   // 
			   // AD_editRemain_lab
			   // 
			   this->AD_editRemain_lab->AutoSize = true;
			   this->AD_editRemain_lab->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_editRemain_lab->Location = System::Drawing::Point(45, 87);
			   this->AD_editRemain_lab->Name = L"AD_editRemain_lab";
			   this->AD_editRemain_lab->Size = System::Drawing::Size(66, 24);
			   this->AD_editRemain_lab->TabIndex = 0;
			   this->AD_editRemain_lab->Text = L"label2";
			   // 
			   // AD_edit_wiating
			   // 
			   this->AD_edit_wiating->Controls->Add(this->label10);
			   this->AD_edit_wiating->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_edit_wiating->Location = System::Drawing::Point(195, 0);
			   this->AD_edit_wiating->Name = L"AD_edit_wiating";
			   this->AD_edit_wiating->Size = System::Drawing::Size(562, 654);
			   this->AD_edit_wiating->TabIndex = 15;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label10->Location = System::Drawing::Point(248, 279);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(136, 24);
			   this->label10->TabIndex = 0;
			   this->label10->Text = L"waiting select";
			   // 
			   // AD_editpass
			   // 
			   this->AD_editpass->Controls->Add(this->AD_askconfPass_TB);
			   this->AD_editpass->Controls->Add(this->AD_askconfPass_lab);
			   this->AD_editpass->Controls->Add(this->AD_askNewPass_TB);
			   this->AD_editpass->Controls->Add(this->AD_askNewPass_lab);
			   this->AD_editpass->Controls->Add(this->AD_askOldPass_TB);
			   this->AD_editpass->Controls->Add(this->AD_askOldPass_lab);
			   this->AD_editpass->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_editpass->Location = System::Drawing::Point(195, 0);
			   this->AD_editpass->Name = L"AD_editpass";
			   this->AD_editpass->Size = System::Drawing::Size(562, 654);
			   this->AD_editpass->TabIndex = 13;
			   // 
			   // AD_askconfPass_TB
			   // 
			   this->AD_askconfPass_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_askconfPass_TB->Location = System::Drawing::Point(57, 334);
			   this->AD_askconfPass_TB->Name = L"AD_askconfPass_TB";
			   this->AD_askconfPass_TB->Size = System::Drawing::Size(236, 32);
			   this->AD_askconfPass_TB->TabIndex = 6;
			   // 
			   // AD_askconfPass_lab
			   // 
			   this->AD_askconfPass_lab->AutoSize = true;
			   this->AD_askconfPass_lab->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_askconfPass_lab->Location = System::Drawing::Point(56, 294);
			   this->AD_askconfPass_lab->Name = L"AD_askconfPass_lab";
			   this->AD_askconfPass_lab->Size = System::Drawing::Size(229, 24);
			   this->AD_askconfPass_lab->TabIndex = 5;
			   this->AD_askconfPass_lab->Text = L"Confirm new password";
			   // 
			   // AD_askNewPass_TB
			   // 
			   this->AD_askNewPass_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_askNewPass_TB->Location = System::Drawing::Point(57, 240);
			   this->AD_askNewPass_TB->Name = L"AD_askNewPass_TB";
			   this->AD_askNewPass_TB->Size = System::Drawing::Size(236, 32);
			   this->AD_askNewPass_TB->TabIndex = 4;
			   // 
			   // AD_askNewPass_lab
			   // 
			   this->AD_askNewPass_lab->AutoSize = true;
			   this->AD_askNewPass_lab->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_askNewPass_lab->Location = System::Drawing::Point(56, 200);
			   this->AD_askNewPass_lab->Name = L"AD_askNewPass_lab";
			   this->AD_askNewPass_lab->Size = System::Drawing::Size(206, 24);
			   this->AD_askNewPass_lab->TabIndex = 3;
			   this->AD_askNewPass_lab->Text = L"Enter new password ";
			   // 
			   // AD_askOldPass_TB
			   // 
			   this->AD_askOldPass_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_askOldPass_TB->Location = System::Drawing::Point(57, 142);
			   this->AD_askOldPass_TB->Name = L"AD_askOldPass_TB";
			   this->AD_askOldPass_TB->Size = System::Drawing::Size(236, 32);
			   this->AD_askOldPass_TB->TabIndex = 2;
			   // 
			   // AD_askOldPass_lab
			   // 
			   this->AD_askOldPass_lab->AutoSize = true;
			   this->AD_askOldPass_lab->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_askOldPass_lab->Location = System::Drawing::Point(56, 102);
			   this->AD_askOldPass_lab->Name = L"AD_askOldPass_lab";
			   this->AD_askOldPass_lab->Size = System::Drawing::Size(191, 24);
			   this->AD_askOldPass_lab->TabIndex = 1;
			   this->AD_askOldPass_lab->Text = L"Enter old password";
			   // 
			   // AD_GofCHEditAinfo
			   // 
			   this->AD_GofCHEditAinfo->Controls->Add(this->AD_editPhNum);
			   this->AD_GofCHEditAinfo->Controls->Add(this->AD_editpass_button);
			   this->AD_GofCHEditAinfo->Controls->Add(this->AD_editusername);
			   this->AD_GofCHEditAinfo->Controls->Add(this->AD_editAge);
			   this->AD_GofCHEditAinfo->Controls->Add(this->AD_editName);
			   this->AD_GofCHEditAinfo->Dock = System::Windows::Forms::DockStyle::Left;
			   this->AD_GofCHEditAinfo->Location = System::Drawing::Point(0, 0);
			   this->AD_GofCHEditAinfo->Name = L"AD_GofCHEditAinfo";
			   this->AD_GofCHEditAinfo->Size = System::Drawing::Size(195, 654);
			   this->AD_GofCHEditAinfo->TabIndex = 12;
			   // 
			   // AD_editPhNum
			   // 
			   this->AD_editPhNum->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_editPhNum->FlatAppearance->BorderSize = 0;
			   this->AD_editPhNum->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_editPhNum->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_editPhNum->Location = System::Drawing::Point(0, 488);
			   this->AD_editPhNum->Name = L"AD_editPhNum";
			   this->AD_editPhNum->Size = System::Drawing::Size(195, 122);
			   this->AD_editPhNum->TabIndex = 6;
			   this->AD_editPhNum->Text = L"Edit Phone Number";
			   this->AD_editPhNum->UseVisualStyleBackColor = true;
			   this->AD_editPhNum->Click += gcnew System::EventHandler(this, &mainPage::AD_editPhNum_Click);
			   // 
			   // AD_editpass_button
			   // 
			   this->AD_editpass_button->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_editpass_button->FlatAppearance->BorderSize = 0;
			   this->AD_editpass_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_editpass_button->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_editpass_button->Location = System::Drawing::Point(0, 366);
			   this->AD_editpass_button->Name = L"AD_editpass_button";
			   this->AD_editpass_button->Size = System::Drawing::Size(195, 122);
			   this->AD_editpass_button->TabIndex = 5;
			   this->AD_editpass_button->Text = L"Change password";
			   this->AD_editpass_button->UseVisualStyleBackColor = true;
			   this->AD_editpass_button->Click += gcnew System::EventHandler(this, &mainPage::AD_editpass_button_Click);
			   // 
			   // AD_editusername
			   // 
			   this->AD_editusername->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_editusername->FlatAppearance->BorderSize = 0;
			   this->AD_editusername->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_editusername->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_editusername->Location = System::Drawing::Point(0, 244);
			   this->AD_editusername->Name = L"AD_editusername";
			   this->AD_editusername->Size = System::Drawing::Size(195, 122);
			   this->AD_editusername->TabIndex = 4;
			   this->AD_editusername->Text = L"Edit username";
			   this->AD_editusername->UseVisualStyleBackColor = true;
			   this->AD_editusername->Click += gcnew System::EventHandler(this, &mainPage::AD_editusername_Click);
			   // 
			   // AD_editAge
			   // 
			   this->AD_editAge->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_editAge->FlatAppearance->BorderSize = 0;
			   this->AD_editAge->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_editAge->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_editAge->Location = System::Drawing::Point(0, 122);
			   this->AD_editAge->Name = L"AD_editAge";
			   this->AD_editAge->Size = System::Drawing::Size(195, 122);
			   this->AD_editAge->TabIndex = 3;
			   this->AD_editAge->Text = L"Edit Age";
			   this->AD_editAge->UseVisualStyleBackColor = true;
			   this->AD_editAge->Click += gcnew System::EventHandler(this, &mainPage::AD_editAge_Click);
			   // 
			   // AD_editName
			   // 
			   this->AD_editName->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_editName->FlatAppearance->BorderSize = 0;
			   this->AD_editName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_editName->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_editName->Location = System::Drawing::Point(0, 0);
			   this->AD_editName->Name = L"AD_editName";
			   this->AD_editName->Size = System::Drawing::Size(195, 122);
			   this->AD_editName->TabIndex = 2;
			   this->AD_editName->Text = L"Edit Name";
			   this->AD_editName->UseVisualStyleBackColor = true;
			   this->AD_editName->Click += gcnew System::EventHandler(this, &mainPage::AD_editName_Click);
			   // 
			   // AD_view_Pinfo
			   // 
			   this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_ID);
			   this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_NumOfR);
			   this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_Totalpaid);
			   this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_Email);
			   this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_Gender);
			   this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_PhNum);
			   this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_Age);
			   this->AD_view_Pinfo->Controls->Add(this->AD_viewPlist_header);
			   this->AD_view_Pinfo->Controls->Add(this->AD_viewPinfo_Name);
			   this->AD_view_Pinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_view_Pinfo->Location = System::Drawing::Point(0, 0);
			   this->AD_view_Pinfo->Name = L"AD_view_Pinfo";
			   this->AD_view_Pinfo->Size = System::Drawing::Size(757, 654);
			   this->AD_view_Pinfo->TabIndex = 1;
			   // 
			   // AD_viewPinfo_ID
			   // 
			   this->AD_viewPinfo_ID->AutoSize = true;
			   this->AD_viewPinfo_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewPinfo_ID->Location = System::Drawing::Point(498, 200);
			   this->AD_viewPinfo_ID->Name = L"AD_viewPinfo_ID";
			   this->AD_viewPinfo_ID->Size = System::Drawing::Size(155, 38);
			   this->AD_viewPinfo_ID->TabIndex = 7;
			   this->AD_viewPinfo_ID->Text = L"patient ID";
			   // 
			   // AD_viewPinfo_NumOfR
			   // 
			   this->AD_viewPinfo_NumOfR->AutoSize = true;
			   this->AD_viewPinfo_NumOfR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewPinfo_NumOfR->Location = System::Drawing::Point(31, 575);
			   this->AD_viewPinfo_NumOfR->Name = L"AD_viewPinfo_NumOfR";
			   this->AD_viewPinfo_NumOfR->Size = System::Drawing::Size(314, 38);
			   this->AD_viewPinfo_NumOfR->TabIndex = 6;
			   this->AD_viewPinfo_NumOfR->Text = L"Number Of reserved";
			   // 
			   // AD_viewPinfo_Totalpaid
			   // 
			   this->AD_viewPinfo_Totalpaid->AutoSize = true;
			   this->AD_viewPinfo_Totalpaid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewPinfo_Totalpaid->Location = System::Drawing::Point(31, 500);
			   this->AD_viewPinfo_Totalpaid->Name = L"AD_viewPinfo_Totalpaid";
			   this->AD_viewPinfo_Totalpaid->Size = System::Drawing::Size(169, 38);
			   this->AD_viewPinfo_Totalpaid->TabIndex = 5;
			   this->AD_viewPinfo_Totalpaid->Text = L"Total price";
			   // 
			   // AD_viewPinfo_Email
			   // 
			   this->AD_viewPinfo_Email->AutoSize = true;
			   this->AD_viewPinfo_Email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewPinfo_Email->Location = System::Drawing::Point(33, 425);
			   this->AD_viewPinfo_Email->Name = L"AD_viewPinfo_Email";
			   this->AD_viewPinfo_Email->Size = System::Drawing::Size(200, 38);
			   this->AD_viewPinfo_Email->TabIndex = 4;
			   this->AD_viewPinfo_Email->Text = L"patient email";
			   // 
			   // AD_viewPinfo_Gender
			   // 
			   this->AD_viewPinfo_Gender->AutoSize = true;
			   this->AD_viewPinfo_Gender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewPinfo_Gender->Location = System::Drawing::Point(31, 350);
			   this->AD_viewPinfo_Gender->Name = L"AD_viewPinfo_Gender";
			   this->AD_viewPinfo_Gender->Size = System::Drawing::Size(224, 38);
			   this->AD_viewPinfo_Gender->TabIndex = 3;
			   this->AD_viewPinfo_Gender->Text = L"patient gender";
			   // 
			   // AD_viewPinfo_PhNum
			   // 
			   this->AD_viewPinfo_PhNum->AutoSize = true;
			   this->AD_viewPinfo_PhNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewPinfo_PhNum->Location = System::Drawing::Point(33, 275);
			   this->AD_viewPinfo_PhNum->Name = L"AD_viewPinfo_PhNum";
			   this->AD_viewPinfo_PhNum->Size = System::Drawing::Size(332, 38);
			   this->AD_viewPinfo_PhNum->TabIndex = 2;
			   this->AD_viewPinfo_PhNum->Text = L"patient phone number";
			   // 
			   // AD_viewPinfo_Age
			   // 
			   this->AD_viewPinfo_Age->AutoSize = true;
			   this->AD_viewPinfo_Age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewPinfo_Age->Location = System::Drawing::Point(33, 200);
			   this->AD_viewPinfo_Age->Name = L"AD_viewPinfo_Age";
			   this->AD_viewPinfo_Age->Size = System::Drawing::Size(181, 38);
			   this->AD_viewPinfo_Age->TabIndex = 1;
			   this->AD_viewPinfo_Age->Text = L"patient Age";
			   // 
			   // AD_viewPlist_header
			   // 
			   this->AD_viewPlist_header->Controls->Add(this->AD_viewPButton);
			   this->AD_viewPlist_header->Controls->Add(this->AD_viewPlist);
			   this->AD_viewPlist_header->Dock = System::Windows::Forms::DockStyle::Top;
			   this->AD_viewPlist_header->Location = System::Drawing::Point(0, 0);
			   this->AD_viewPlist_header->Name = L"AD_viewPlist_header";
			   this->AD_viewPlist_header->Size = System::Drawing::Size(757, 97);
			   this->AD_viewPlist_header->TabIndex = 2;
			   // 
			   // AD_viewPButton
			   // 
			   this->AD_viewPButton->FlatAppearance->BorderSize = 0;
			   this->AD_viewPButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_viewPButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_viewPButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_viewPButton.Image")));
			   this->AD_viewPButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->AD_viewPButton->Location = System::Drawing::Point(451, 24);
			   this->AD_viewPButton->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->AD_viewPButton->Name = L"AD_viewPButton";
			   this->AD_viewPButton->Size = System::Drawing::Size(119, 36);
			   this->AD_viewPButton->TabIndex = 6;
			   this->AD_viewPButton->Text = L"View";
			   this->AD_viewPButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->AD_viewPButton->UseVisualStyleBackColor = true;
			   this->AD_viewPButton->Click += gcnew System::EventHandler(this, &mainPage::AD_viewPButton_Click);
			   // 
			   // AD_viewPlist
			   // 
			   this->AD_viewPlist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_viewPlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewPlist->FormattingEnabled = true;
			   this->AD_viewPlist->Location = System::Drawing::Point(59, 23);
			   this->AD_viewPlist->Name = L"AD_viewPlist";
			   this->AD_viewPlist->Size = System::Drawing::Size(247, 37);
			   this->AD_viewPlist->TabIndex = 1;
			   this->AD_viewPlist->Text = L"Patient list";
			   // 
			   // AD_viewPinfo_Name
			   // 
			   this->AD_viewPinfo_Name->AutoSize = true;
			   this->AD_viewPinfo_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.27692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewPinfo_Name->Location = System::Drawing::Point(33, 125);
			   this->AD_viewPinfo_Name->Name = L"AD_viewPinfo_Name";
			   this->AD_viewPinfo_Name->Size = System::Drawing::Size(214, 38);
			   this->AD_viewPinfo_Name->TabIndex = 1;
			   this->AD_viewPinfo_Name->Text = L"Patient Name";
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
			   this->AD_Modifyinput->Controls->Add(this->AD_warning1);
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
			   // AD_warning1
			   // 
			   this->AD_warning1->AutoSize = true;
			   this->AD_warning1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 8.861538F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_warning1->ForeColor = System::Drawing::Color::Red;
			   this->AD_warning1->Location = System::Drawing::Point(14, 178);
			   this->AD_warning1->Name = L"AD_warning1";
			   this->AD_warning1->Size = System::Drawing::Size(45, 16);
			   this->AD_warning1->TabIndex = 8;
			   this->AD_warning1->Text = L"label2";
			   // 
			   // AD_ModifyHSClist
			   // 
			   this->AD_ModifyHSClist->FormattingEnabled = true;
			   this->AD_ModifyHSClist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"empty" });
			   this->AD_ModifyHSClist->Location = System::Drawing::Point(275, 50);
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
			   this->AD_confirmedit->Location = System::Drawing::Point(393, 121);
			   this->AD_confirmedit->Name = L"AD_confirmedit";
			   this->AD_confirmedit->Size = System::Drawing::Size(91, 45);
			   this->AD_confirmedit->TabIndex = 5;
			   this->AD_confirmedit->Text = L"Edit";
			   this->AD_confirmedit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->AD_confirmedit->UseVisualStyleBackColor = true;
			   this->AD_confirmedit->Click += gcnew System::EventHandler(this, &mainPage::AD_confirmedit_Click);
			   // 
			   // AD_deleteHSC
			   // 
			   this->AD_deleteHSC->FlatAppearance->BorderSize = 0;
			   this->AD_deleteHSC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_deleteHSC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_deleteHSC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_deleteHSC.Image")));
			   this->AD_deleteHSC->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->AD_deleteHSC->Location = System::Drawing::Point(310, 230);
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
			   this->AD_addHSC->Location = System::Drawing::Point(61, 230);
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
			   this->AD_modifyHSC_layout->Controls->Add(this->AD_DELHSC_lay);
			   this->AD_modifyHSC_layout->Controls->Add(this->AD_ADDHSC_lay);
			   this->AD_modifyHSC_layout->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->AD_modifyHSC_layout->Location = System::Drawing::Point(0, 303);
			   this->AD_modifyHSC_layout->Name = L"AD_modifyHSC_layout";
			   this->AD_modifyHSC_layout->Size = System::Drawing::Size(562, 298);
			   this->AD_modifyHSC_layout->TabIndex = 3;
			   // 
			   // AD_DELHSC_lay
			   // 
			   this->AD_DELHSC_lay->Controls->Add(this->checkBox2);
			   this->AD_DELHSC_lay->Controls->Add(this->CloseTab1);
			   this->AD_DELHSC_lay->Controls->Add(this->AD_AskHSC);
			   this->AD_DELHSC_lay->Controls->Add(this->AD_selectHSC);
			   this->AD_DELHSC_lay->Controls->Add(this->AD_HSClist);
			   this->AD_DELHSC_lay->Controls->Add(this->AD_stateHSC1);
			   this->AD_DELHSC_lay->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_DELHSC_lay->Location = System::Drawing::Point(0, 0);
			   this->AD_DELHSC_lay->Name = L"AD_DELHSC_lay";
			   this->AD_DELHSC_lay->Size = System::Drawing::Size(562, 298);
			   this->AD_DELHSC_lay->TabIndex = 7;
			   // 
			   // checkBox2
			   // 
			   this->checkBox2->AutoSize = true;
			   this->checkBox2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 7.753846F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->checkBox2->Location = System::Drawing::Point(23, 155);
			   this->checkBox2->Name = L"checkBox2";
			   this->checkBox2->Size = System::Drawing::Size(108, 19);
			   this->checkBox2->TabIndex = 7;
			   this->checkBox2->Text = L"Are you sure\?";
			   this->checkBox2->UseVisualStyleBackColor = true;
			   // 
			   // CloseTab1
			   // 
			   this->CloseTab1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CloseTab1.BackgroundImage")));
			   this->CloseTab1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->CloseTab1->FlatAppearance->BorderSize = 0;
			   this->CloseTab1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->CloseTab1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->CloseTab1->Location = System::Drawing::Point(526, 6);
			   this->CloseTab1->Name = L"CloseTab1";
			   this->CloseTab1->Size = System::Drawing::Size(29, 26);
			   this->CloseTab1->TabIndex = 6;
			   this->CloseTab1->UseVisualStyleBackColor = true;
			   this->CloseTab1->Click += gcnew System::EventHandler(this, &mainPage::CloseTab1_Click);
			   // 
			   // AD_AskHSC
			   // 
			   this->AD_AskHSC->AutoSize = true;
			   this->AD_AskHSC->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_AskHSC->Location = System::Drawing::Point(13, 40);
			   this->AD_AskHSC->Name = L"AD_AskHSC";
			   this->AD_AskHSC->Size = System::Drawing::Size(202, 26);
			   this->AD_AskHSC->TabIndex = 5;
			   this->AD_AskHSC->Text = L"Choose From list";
			   // 
			   // AD_selectHSC
			   // 
			   this->AD_selectHSC->FlatAppearance->BorderSize = 0;
			   this->AD_selectHSC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_selectHSC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_selectHSC->Location = System::Drawing::Point(333, 144);
			   this->AD_selectHSC->Name = L"AD_selectHSC";
			   this->AD_selectHSC->Size = System::Drawing::Size(125, 33);
			   this->AD_selectHSC->TabIndex = 3;
			   this->AD_selectHSC->Text = L"Delete";
			   this->AD_selectHSC->UseVisualStyleBackColor = true;
			   this->AD_selectHSC->Click += gcnew System::EventHandler(this, &mainPage::AD_selectHSC_Click);
			   // 
			   // AD_HSClist
			   // 
			   this->AD_HSClist->FormattingEnabled = true;
			   this->AD_HSClist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"empty" });
			   this->AD_HSClist->Location = System::Drawing::Point(18, 90);
			   this->AD_HSClist->Name = L"AD_HSClist";
			   this->AD_HSClist->Size = System::Drawing::Size(251, 34);
			   this->AD_HSClist->TabIndex = 0;
			   // 
			   // AD_stateHSC1
			   // 
			   this->AD_stateHSC1->AutoSize = true;
			   this->AD_stateHSC1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_stateHSC1->ForeColor = System::Drawing::Color::Red;
			   this->AD_stateHSC1->Location = System::Drawing::Point(15, 128);
			   this->AD_stateHSC1->Name = L"AD_stateHSC1";
			   this->AD_stateHSC1->Size = System::Drawing::Size(53, 19);
			   this->AD_stateHSC1->TabIndex = 4;
			   this->AD_stateHSC1->Text = L"label2";
			   // 
			   // AD_ADDHSC_lay
			   // 
			   this->AD_ADDHSC_lay->Controls->Add(this->AD_TBforAddHSC);
			   this->AD_ADDHSC_lay->Controls->Add(this->CloseTab2);
			   this->AD_ADDHSC_lay->Controls->Add(this->AD_stateHSC2);
			   this->AD_ADDHSC_lay->Controls->Add(this->AD_confirmAdd);
			   this->AD_ADDHSC_lay->Controls->Add(this->AD_HSCorder);
			   this->AD_ADDHSC_lay->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_ADDHSC_lay->Location = System::Drawing::Point(0, 0);
			   this->AD_ADDHSC_lay->Name = L"AD_ADDHSC_lay";
			   this->AD_ADDHSC_lay->Size = System::Drawing::Size(562, 298);
			   this->AD_ADDHSC_lay->TabIndex = 6;
			   // 
			   // AD_TBforAddHSC
			   // 
			   this->AD_TBforAddHSC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->AD_TBforAddHSC->Location = System::Drawing::Point(40, 82);
			   this->AD_TBforAddHSC->Name = L"AD_TBforAddHSC";
			   this->AD_TBforAddHSC->Size = System::Drawing::Size(241, 29);
			   this->AD_TBforAddHSC->TabIndex = 8;
			   // 
			   // CloseTab2
			   // 
			   this->CloseTab2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CloseTab2.BackgroundImage")));
			   this->CloseTab2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->CloseTab2->FlatAppearance->BorderSize = 0;
			   this->CloseTab2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->CloseTab2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->CloseTab2->Location = System::Drawing::Point(526, 6);
			   this->CloseTab2->Name = L"CloseTab2";
			   this->CloseTab2->Size = System::Drawing::Size(29, 26);
			   this->CloseTab2->TabIndex = 7;
			   this->CloseTab2->UseVisualStyleBackColor = true;
			   this->CloseTab2->Click += gcnew System::EventHandler(this, &mainPage::CloseTab2_Click);
			   // 
			   // AD_stateHSC2
			   // 
			   this->AD_stateHSC2->AutoSize = true;
			   this->AD_stateHSC2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_stateHSC2->ForeColor = System::Drawing::Color::Red;
			   this->AD_stateHSC2->Location = System::Drawing::Point(55, 130);
			   this->AD_stateHSC2->Name = L"AD_stateHSC2";
			   this->AD_stateHSC2->Size = System::Drawing::Size(53, 19);
			   this->AD_stateHSC2->TabIndex = 6;
			   this->AD_stateHSC2->Text = L"label2";
			   // 
			   // AD_confirmAdd
			   // 
			   this->AD_confirmAdd->FlatAppearance->BorderSize = 0;
			   this->AD_confirmAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_confirmAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_confirmAdd->Location = System::Drawing::Point(322, 76);
			   this->AD_confirmAdd->Name = L"AD_confirmAdd";
			   this->AD_confirmAdd->Size = System::Drawing::Size(125, 33);
			   this->AD_confirmAdd->TabIndex = 5;
			   this->AD_confirmAdd->Text = L"Add";
			   this->AD_confirmAdd->UseVisualStyleBackColor = true;
			   this->AD_confirmAdd->Click += gcnew System::EventHandler(this, &mainPage::AD_confirmAdd_Click);
			   this->AD_confirmAdd->Leave += gcnew System::EventHandler(this, &mainPage::AD_confirmAdd_Leave);
			   // 
			   // AD_HSCorder
			   // 
			   this->AD_HSCorder->AutoSize = true;
			   this->AD_HSCorder->Location = System::Drawing::Point(34, 24);
			   this->AD_HSCorder->Name = L"AD_HSCorder";
			   this->AD_HSCorder->Size = System::Drawing::Size(131, 26);
			   this->AD_HSCorder->TabIndex = 1;
			   this->AD_HSCorder->Text = L"Enter Name";
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
			   this->AD_TBinput->Location = System::Drawing::Point(12, 133);
			   this->AD_TBinput->Name = L"AD_TBinput";
			   this->AD_TBinput->Size = System::Drawing::Size(241, 29);
			   this->AD_TBinput->TabIndex = 1;
			   // 
			   // AD_nameOfinput
			   // 
			   this->AD_nameOfinput->AutoSize = true;
			   this->AD_nameOfinput->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_nameOfinput->Location = System::Drawing::Point(9, 53);
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
			   this->AD_HCselected->Location = System::Drawing::Point(0, 532);
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
			   this->AD_HSselected->Location = System::Drawing::Point(0, 458);
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
			   this->AD_HNselected->Location = System::Drawing::Point(0, 384);
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
			   this->AD_HRselected->Location = System::Drawing::Point(0, 310);
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
			   this->AD_BPselected->Location = System::Drawing::Point(0, 236);
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
			   this->AD_RPselected->Location = System::Drawing::Point(0, 162);
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
			   this->AD_PRRselected->Size = System::Drawing::Size(195, 88);
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
			   this->AD_IDselected->Text = L"Hospital ID";
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
			   this->AD_Hlist_combox->SelectedIndexChanged += gcnew System::EventHandler(this, &mainPage::AD_Hlist_combox_SelectedIndexChanged);
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
			   // AD_edit_Hlist
			   // 
			   this->AD_edit_Hlist->Controls->Add(this->AD_addHlayout);
			   this->AD_edit_Hlist->Controls->Add(this->AD_deleteHlayout);
			   this->AD_edit_Hlist->Controls->Add(this->AD_waitingP);
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
			   this->AD_addHlayout->Controls->Add(this->AD_HSPorder_lab11);
			   this->AD_addHlayout->Controls->Add(this->AD_HSPorder_TB);
			   this->AD_addHlayout->Controls->Add(this->AD_addcom);
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
			   this->AD_addHlayout->Controls->Add(this->AD_Herror);
			   this->AD_addHlayout->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_addHlayout->Location = System::Drawing::Point(0, 80);
			   this->AD_addHlayout->Name = L"AD_addHlayout";
			   this->AD_addHlayout->Size = System::Drawing::Size(757, 574);
			   this->AD_addHlayout->TabIndex = 14;
			   // 
			   // AD_HSPorder_lab11
			   // 
			   this->AD_HSPorder_lab11->AutoSize = true;
			   this->AD_HSPorder_lab11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_HSPorder_lab11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HSPorder_lab11->Location = System::Drawing::Point(25, 327);
			   this->AD_HSPorder_lab11->Name = L"AD_HSPorder_lab11";
			   this->AD_HSPorder_lab11->Size = System::Drawing::Size(166, 29);
			   this->AD_HSPorder_lab11->TabIndex = 23;
			   this->AD_HSPorder_lab11->Text = L"Surgery Price";
			   // 
			   // AD_HSPorder_TB
			   // 
			   this->AD_HSPorder_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->AD_HSPorder_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HSPorder_TB->Location = System::Drawing::Point(30, 376);
			   this->AD_HSPorder_TB->Name = L"AD_HSPorder_TB";
			   this->AD_HSPorder_TB->Size = System::Drawing::Size(238, 29);
			   this->AD_HSPorder_TB->TabIndex = 24;
			   // 
			   // AD_addcom
			   // 
			   this->AD_addcom->AutoSize = true;
			   this->AD_addcom->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_addcom->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->AD_addcom->Location = System::Drawing::Point(395, 501);
			   this->AD_addcom->Name = L"AD_addcom";
			   this->AD_addcom->Size = System::Drawing::Size(53, 19);
			   this->AD_addcom->TabIndex = 22;
			   this->AD_addcom->Text = L"label2";
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
			   this->AD_HRPorder_lab->Location = System::Drawing::Point(25, 229);
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
			   this->AD_HRPorder_TB->Location = System::Drawing::Point(30, 278);
			   this->AD_HRPorder_TB->Name = L"AD_HRPorder_TB";
			   this->AD_HRPorder_TB->Size = System::Drawing::Size(238, 29);
			   this->AD_HRPorder_TB->TabIndex = 15;
			   // 
			   // AD_HBPorder_lab
			   // 
			   this->AD_HBPorder_lab->AutoSize = true;
			   this->AD_HBPorder_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_HBPorder_lab->Location = System::Drawing::Point(25, 131);
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
			   this->AD_HBPorder_TB->Location = System::Drawing::Point(30, 180);
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
			   this->AD_addH->Location = System::Drawing::Point(383, 408);
			   this->AD_addH->Name = L"AD_addH";
			   this->AD_addH->Size = System::Drawing::Size(222, 72);
			   this->AD_addH->TabIndex = 11;
			   this->AD_addH->Text = L"Add";
			   this->AD_addH->UseVisualStyleBackColor = true;
			   this->AD_addH->Click += gcnew System::EventHandler(this, &mainPage::AD_addH_Click);
			   this->AD_addH->Leave += gcnew System::EventHandler(this, &mainPage::AD_addH_Leave);
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
			   this->AD_HNorder_TB->Location = System::Drawing::Point(30, 82);
			   this->AD_HNorder_TB->Name = L"AD_HNorder_TB";
			   this->AD_HNorder_TB->Size = System::Drawing::Size(238, 29);
			   this->AD_HNorder_TB->TabIndex = 8;
			   // 
			   // AD_Herror
			   // 
			   this->AD_Herror->AutoSize = true;
			   this->AD_Herror->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_Herror->ForeColor = System::Drawing::Color::Red;
			   this->AD_Herror->Location = System::Drawing::Point(377, 333);
			   this->AD_Herror->Name = L"AD_Herror";
			   this->AD_Herror->Size = System::Drawing::Size(0, 19);
			   this->AD_Herror->TabIndex = 10;
			   // 
			   // AD_deleteHlayout
			   // 
			   this->AD_deleteHlayout->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->AD_deleteHlayout->Controls->Add(this->checkBox1);
			   this->AD_deleteHlayout->Controls->Add(this->AD_DELhospitalRate);
			   this->AD_deleteHlayout->Controls->Add(this->AD_DELhospitalID);
			   this->AD_deleteHlayout->Controls->Add(this->AD_messegeState);
			   this->AD_deleteHlayout->Controls->Add(this->AD_HListDEL);
			   this->AD_deleteHlayout->Controls->Add(this->AD_selectHD);
			   this->AD_deleteHlayout->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_deleteHlayout->Location = System::Drawing::Point(0, 80);
			   this->AD_deleteHlayout->Name = L"AD_deleteHlayout";
			   this->AD_deleteHlayout->Size = System::Drawing::Size(757, 574);
			   this->AD_deleteHlayout->TabIndex = 16;
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->Location = System::Drawing::Point(47, 281);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(111, 20);
			   this->checkBox1->TabIndex = 13;
			   this->checkBox1->Text = L"Are you sure\?";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   // 
			   // AD_DELhospitalRate
			   // 
			   this->AD_DELhospitalRate->AutoSize = true;
			   this->AD_DELhospitalRate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_DELhospitalRate->Location = System::Drawing::Point(366, 89);
			   this->AD_DELhospitalRate->Name = L"AD_DELhospitalRate";
			   this->AD_DELhospitalRate->Size = System::Drawing::Size(165, 29);
			   this->AD_DELhospitalRate->TabIndex = 12;
			   this->AD_DELhospitalRate->Text = L"Hospital Rate";
			   // 
			   // AD_DELhospitalID
			   // 
			   this->AD_DELhospitalID->AutoSize = true;
			   this->AD_DELhospitalID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_DELhospitalID->Location = System::Drawing::Point(42, 87);
			   this->AD_DELhospitalID->Name = L"AD_DELhospitalID";
			   this->AD_DELhospitalID->Size = System::Drawing::Size(136, 29);
			   this->AD_DELhospitalID->TabIndex = 11;
			   this->AD_DELhospitalID->Text = L"Hospital ID";
			   // 
			   // AD_messegeState
			   // 
			   this->AD_messegeState->AutoSize = true;
			   this->AD_messegeState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_messegeState->ForeColor = System::Drawing::Color::LightCoral;
			   this->AD_messegeState->Location = System::Drawing::Point(309, 246);
			   this->AD_messegeState->Name = L"AD_messegeState";
			   this->AD_messegeState->Size = System::Drawing::Size(51, 20);
			   this->AD_messegeState->TabIndex = 10;
			   this->AD_messegeState->Text = L"label4";
			   // 
			   // AD_HListDEL
			   // 
			   this->AD_HListDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_HListDEL->FormattingEnabled = true;
			   this->AD_HListDEL->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"empty" });
			   this->AD_HListDEL->Location = System::Drawing::Point(41, 229);
			   this->AD_HListDEL->Name = L"AD_HListDEL";
			   this->AD_HListDEL->Size = System::Drawing::Size(251, 37);
			   this->AD_HListDEL->TabIndex = 6;
			   this->AD_HListDEL->Text = L"Hospital List";
			   this->AD_HListDEL->SelectedIndexChanged += gcnew System::EventHandler(this, &mainPage::AD_HListDEL_SelectedIndexChanged);
			   // 
			   // AD_selectHD
			   // 
			   this->AD_selectHD->FlatAppearance->BorderSize = 0;
			   this->AD_selectHD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_selectHD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_selectHD->Location = System::Drawing::Point(41, 313);
			   this->AD_selectHD->Name = L"AD_selectHD";
			   this->AD_selectHD->Size = System::Drawing::Size(125, 33);
			   this->AD_selectHD->TabIndex = 9;
			   this->AD_selectHD->Text = L"Select";
			   this->AD_selectHD->UseVisualStyleBackColor = true;
			   this->AD_selectHD->Click += gcnew System::EventHandler(this, &mainPage::AD_selectHD_Click);
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
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(247, 131);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(264, 277);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
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
			   // AD_view_Hinfo
			   // 
			   this->AD_view_Hinfo->Controls->Add(this->Exist);
			   this->AD_view_Hinfo->Controls->Add(this->AD_text2);
			   this->AD_view_Hinfo->Controls->Add(this->AD_text1);
			   this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_HSplist);
			   this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_HCllist);
			   this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_ID);
			   this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_BedsPrice);
			   this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_surgeryPrice);
			   this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_Rprice);
			   this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_bedsAva);
			   this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_Rate);
			   this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfo_Name);
			   this->AD_view_Hinfo->Controls->Add(this->AD_viewHinfoHeader);
			   this->AD_view_Hinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->AD_view_Hinfo->Location = System::Drawing::Point(0, 0);
			   this->AD_view_Hinfo->Name = L"AD_view_Hinfo";
			   this->AD_view_Hinfo->Size = System::Drawing::Size(757, 654);
			   this->AD_view_Hinfo->TabIndex = 0;
			   // 
			   // Exist
			   // 
			   this->Exist->AutoSize = true;
			   this->Exist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->Exist->ForeColor = System::Drawing::Color::Red;
			   this->Exist->Location = System::Drawing::Point(595, 516);
			   this->Exist->Name = L"Exist";
			   this->Exist->Size = System::Drawing::Size(0, 29);
			   this->Exist->TabIndex = 14;
			   this->Exist->Visible = false;
			   // 
			   // AD_text2
			   // 
			   this->AD_text2->AutoSize = true;
			   this->AD_text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_text2->Location = System::Drawing::Point(413, 323);
			   this->AD_text2->Name = L"AD_text2";
			   this->AD_text2->Size = System::Drawing::Size(142, 25);
			   this->AD_text2->TabIndex = 13;
			   this->AD_text2->Text = L"Specialties List";
			   this->AD_text2->Visible = false;
			   // 
			   // AD_text1
			   // 
			   this->AD_text1->AutoSize = true;
			   this->AD_text1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_text1->Location = System::Drawing::Point(412, 133);
			   this->AD_text1->Name = L"AD_text1";
			   this->AD_text1->Size = System::Drawing::Size(116, 29);
			   this->AD_text1->TabIndex = 12;
			   this->AD_text1->Text = L"Clinic List";
			   this->AD_text1->Visible = false;
			   // 
			   // AD_viewHinfo_HSplist
			   // 
			   this->AD_viewHinfo_HSplist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewHinfo_HSplist->FormattingEnabled = true;
			   this->AD_viewHinfo_HSplist->ItemHeight = 26;
			   this->AD_viewHinfo_HSplist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Specialties List" });
			   this->AD_viewHinfo_HSplist->Location = System::Drawing::Point(412, 353);
			   this->AD_viewHinfo_HSplist->Name = L"AD_viewHinfo_HSplist";
			   this->AD_viewHinfo_HSplist->Size = System::Drawing::Size(267, 108);
			   this->AD_viewHinfo_HSplist->TabIndex = 11;
			   // 
			   // AD_viewHinfo_HCllist
			   // 
			   this->AD_viewHinfo_HCllist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewHinfo_HCllist->FormattingEnabled = true;
			   this->AD_viewHinfo_HCllist->ItemHeight = 26;
			   this->AD_viewHinfo_HCllist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Clinic List" });
			   this->AD_viewHinfo_HCllist->Location = System::Drawing::Point(412, 160);
			   this->AD_viewHinfo_HCllist->Name = L"AD_viewHinfo_HCllist";
			   this->AD_viewHinfo_HCllist->Size = System::Drawing::Size(267, 108);
			   this->AD_viewHinfo_HCllist->TabIndex = 10;
			   // 
			   // AD_viewHinfo_ID
			   // 
			   this->AD_viewHinfo_ID->AutoSize = true;
			   this->AD_viewHinfo_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewHinfo_ID->Location = System::Drawing::Point(25, 111);
			   this->AD_viewHinfo_ID->Name = L"AD_viewHinfo_ID";
			   this->AD_viewHinfo_ID->Size = System::Drawing::Size(160, 36);
			   this->AD_viewHinfo_ID->TabIndex = 0;
			   this->AD_viewHinfo_ID->Text = L"Hospital ID";
			   // 
			   // AD_viewHinfo_BedsPrice
			   // 
			   this->AD_viewHinfo_BedsPrice->AutoSize = true;
			   this->AD_viewHinfo_BedsPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewHinfo_BedsPrice->Location = System::Drawing::Point(26, 514);
			   this->AD_viewHinfo_BedsPrice->Name = L"AD_viewHinfo_BedsPrice";
			   this->AD_viewHinfo_BedsPrice->Size = System::Drawing::Size(159, 36);
			   this->AD_viewHinfo_BedsPrice->TabIndex = 7;
			   this->AD_viewHinfo_BedsPrice->Text = L"Beds Price";
			   // 
			   // AD_viewHinfo_surgeryPrice
			   // 
			   this->AD_viewHinfo_surgeryPrice->AutoSize = true;
			   this->AD_viewHinfo_surgeryPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewHinfo_surgeryPrice->Location = System::Drawing::Point(25, 445);
			   this->AD_viewHinfo_surgeryPrice->Name = L"AD_viewHinfo_surgeryPrice";
			   this->AD_viewHinfo_surgeryPrice->Size = System::Drawing::Size(196, 36);
			   this->AD_viewHinfo_surgeryPrice->TabIndex = 6;
			   this->AD_viewHinfo_surgeryPrice->Text = L"Surgery Price";
			   // 
			   // AD_viewHinfo_Rprice
			   // 
			   this->AD_viewHinfo_Rprice->AutoSize = true;
			   this->AD_viewHinfo_Rprice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewHinfo_Rprice->Location = System::Drawing::Point(25, 376);
			   this->AD_viewHinfo_Rprice->Name = L"AD_viewHinfo_Rprice";
			   this->AD_viewHinfo_Rprice->Size = System::Drawing::Size(227, 36);
			   this->AD_viewHinfo_Rprice->TabIndex = 5;
			   this->AD_viewHinfo_Rprice->Text = L"Check-UP Price";
			   // 
			   // AD_viewHinfo_bedsAva
			   // 
			   this->AD_viewHinfo_bedsAva->AutoSize = true;
			   this->AD_viewHinfo_bedsAva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewHinfo_bedsAva->Location = System::Drawing::Point(25, 307);
			   this->AD_viewHinfo_bedsAva->Name = L"AD_viewHinfo_bedsAva";
			   this->AD_viewHinfo_bedsAva->Size = System::Drawing::Size(213, 36);
			   this->AD_viewHinfo_bedsAva->TabIndex = 4;
			   this->AD_viewHinfo_bedsAva->Text = L"Beds Avaliable";
			   // 
			   // AD_viewHinfo_Rate
			   // 
			   this->AD_viewHinfo_Rate->AutoSize = true;
			   this->AD_viewHinfo_Rate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewHinfo_Rate->Location = System::Drawing::Point(25, 238);
			   this->AD_viewHinfo_Rate->Name = L"AD_viewHinfo_Rate";
			   this->AD_viewHinfo_Rate->Size = System::Drawing::Size(193, 36);
			   this->AD_viewHinfo_Rate->TabIndex = 3;
			   this->AD_viewHinfo_Rate->Text = L"Hospital Rate";
			   // 
			   // AD_viewHinfo_Name
			   // 
			   this->AD_viewHinfo_Name->AutoSize = true;
			   this->AD_viewHinfo_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewHinfo_Name->Location = System::Drawing::Point(24, 169);
			   this->AD_viewHinfo_Name->Name = L"AD_viewHinfo_Name";
			   this->AD_viewHinfo_Name->Size = System::Drawing::Size(208, 36);
			   this->AD_viewHinfo_Name->TabIndex = 2;
			   this->AD_viewHinfo_Name->Text = L"Hospital Name";
			   // 
			   // AD_viewHinfoHeader
			   // 
			   this->AD_viewHinfoHeader->BackColor = System::Drawing::Color::DarkGray;
			   this->AD_viewHinfoHeader->Controls->Add(this->AD_viewHbutton);
			   this->AD_viewHinfoHeader->Controls->Add(this->AD_viewHList);
			   this->AD_viewHinfoHeader->Location = System::Drawing::Point(0, 0);
			   this->AD_viewHinfoHeader->Name = L"AD_viewHinfoHeader";
			   this->AD_viewHinfoHeader->Size = System::Drawing::Size(757, 84);
			   this->AD_viewHinfoHeader->TabIndex = 1;
			   // 
			   // AD_viewHbutton
			   // 
			   this->AD_viewHbutton->FlatAppearance->BorderSize = 0;
			   this->AD_viewHbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_viewHbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->AD_viewHbutton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AD_viewHbutton.Image")));
			   this->AD_viewHbutton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->AD_viewHbutton->Location = System::Drawing::Point(399, 23);
			   this->AD_viewHbutton->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->AD_viewHbutton->Name = L"AD_viewHbutton";
			   this->AD_viewHbutton->Size = System::Drawing::Size(119, 36);
			   this->AD_viewHbutton->TabIndex = 5;
			   this->AD_viewHbutton->Text = L"View";
			   this->AD_viewHbutton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->AD_viewHbutton->UseVisualStyleBackColor = true;
			   this->AD_viewHbutton->Click += gcnew System::EventHandler(this, &mainPage::AD_viewHbutton_Click);
			   // 
			   // AD_viewHList
			   // 
			   this->AD_viewHList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->AD_viewHList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->AD_viewHList->FormattingEnabled = true;
			   this->AD_viewHList->Location = System::Drawing::Point(33, 21);
			   this->AD_viewHList->Name = L"AD_viewHList";
			   this->AD_viewHList->Size = System::Drawing::Size(247, 37);
			   this->AD_viewHList->TabIndex = 0;
			   this->AD_viewHList->Text = L"Hospital list";
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
			   this->PA_pages->Controls->Add(this->PA_editReserv);
			   this->PA_pages->Controls->Add(this->PA_reservlist);
			   this->PA_pages->Controls->Add(this->PA_editPinfo);
			   this->PA_pages->Controls->Add(this->PA_ModifyReserv);
			   this->PA_pages->Controls->Add(this->PA_viewHinfo);
			   this->PA_pages->Controls->Add(this->PA_viewPinfo);
			   this->PA_pages->Controls->Add(this->PA_startwindow);
			   this->PA_pages->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_pages->Location = System::Drawing::Point(264, 0);
			   this->PA_pages->Name = L"PA_pages";
			   this->PA_pages->Size = System::Drawing::Size(766, 654);
			   this->PA_pages->TabIndex = 3;
			   // 
			   // PA_editReserv
			   // 
			   this->PA_editReserv->Controls->Add(this->PA_addRlayout);
			   this->PA_editReserv->Controls->Add(this->PA_delRlayout);
			   this->PA_editReserv->Controls->Add(this->PA_waitingeditRlist);
			   this->PA_editReserv->Controls->Add(this->PA_header_editRlist);
			   this->PA_editReserv->Controls->Add(this->label13);
			   this->PA_editReserv->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_editReserv->Location = System::Drawing::Point(0, 0);
			   this->PA_editReserv->Name = L"PA_editReserv";
			   this->PA_editReserv->Size = System::Drawing::Size(766, 654);
			   this->PA_editReserv->TabIndex = 2;
			   // 
			   // PA_addRlayout
			   // 
			   this->PA_addRlayout->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->PA_addRlayout->Controls->Add(this->label7);
			   this->PA_addRlayout->Controls->Add(this->PA_PNumOfDays_lab);
			   this->PA_addRlayout->Controls->Add(this->PA_PNumOfDays_TB);
			   this->PA_addRlayout->Controls->Add(this->PA_Check1);
			   this->PA_addRlayout->Controls->Add(this->PA_Check2);
			   this->PA_addRlayout->Controls->Add(this->PA_DayenterH_COM);
			   this->PA_addRlayout->Controls->Add(this->PA_RSClist_COM);
			   this->PA_addRlayout->Controls->Add(this->PA_selectHforR_COM);
			   this->PA_addRlayout->Controls->Add(this->PA_DayenterH_lab);
			   this->PA_addRlayout->Controls->Add(this->PA_PAord_lab);
			   this->PA_addRlayout->Controls->Add(this->PA_PAord_TB);
			   this->PA_addRlayout->Controls->Add(this->PA_selectHforR_lab);
			   this->PA_addRlayout->Controls->Add(this->PA_RSClist_lab);
			   this->PA_addRlayout->Controls->Add(this->PA_PphNord_lab);
			   this->PA_addRlayout->Controls->Add(this->PA_PphNord_TB);
			   this->PA_addRlayout->Controls->Add(this->button1);
			   this->PA_addRlayout->Controls->Add(this->PA_PNord_lab);
			   this->PA_addRlayout->Controls->Add(this->PA_PNord_TB);
			   this->PA_addRlayout->Controls->Add(this->PA_warningM);
			   this->PA_addRlayout->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_addRlayout->Location = System::Drawing::Point(0, 80);
			   this->PA_addRlayout->Name = L"PA_addRlayout";
			   this->PA_addRlayout->Size = System::Drawing::Size(766, 574);
			   this->PA_addRlayout->TabIndex = 14;
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label7->Location = System::Drawing::Point(254, 498);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(144, 29);
			   this->label7->TabIndex = 38;
			   this->label7->Text = L"Patient Age";
			   // 
			   // PA_PNumOfDays_lab
			   // 
			   this->PA_PNumOfDays_lab->AutoSize = true;
			   this->PA_PNumOfDays_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_PNumOfDays_lab->Location = System::Drawing::Point(28, 415);
			   this->PA_PNumOfDays_lab->Name = L"PA_PNumOfDays_lab";
			   this->PA_PNumOfDays_lab->Size = System::Drawing::Size(161, 29);
			   this->PA_PNumOfDays_lab->TabIndex = 36;
			   this->PA_PNumOfDays_lab->Text = L"Num Of days";
			   // 
			   // PA_PNumOfDays_TB
			   // 
			   this->PA_PNumOfDays_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->PA_PNumOfDays_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_PNumOfDays_TB->Location = System::Drawing::Point(33, 465);
			   this->PA_PNumOfDays_TB->Name = L"PA_PNumOfDays_TB";
			   this->PA_PNumOfDays_TB->Size = System::Drawing::Size(88, 29);
			   this->PA_PNumOfDays_TB->TabIndex = 37;
			   // 
			   // PA_Check1
			   // 
			   this->PA_Check1->Controls->Add(this->PA_askwhoreserv_lab);
			   this->PA_Check1->Controls->Add(this->PA_askwhoreserv_RB2);
			   this->PA_Check1->Controls->Add(this->PA_askwhoreserv_RB1);
			   this->PA_Check1->Location = System::Drawing::Point(0, -3);
			   this->PA_Check1->Name = L"PA_Check1";
			   this->PA_Check1->Size = System::Drawing::Size(223, 77);
			   this->PA_Check1->TabIndex = 35;
			   // 
			   // PA_askwhoreserv_lab
			   // 
			   this->PA_askwhoreserv_lab->AutoSize = true;
			   this->PA_askwhoreserv_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_askwhoreserv_lab->Location = System::Drawing::Point(6, 12);
			   this->PA_askwhoreserv_lab->Name = L"PA_askwhoreserv_lab";
			   this->PA_askwhoreserv_lab->Size = System::Drawing::Size(186, 25);
			   this->PA_askwhoreserv_lab->TabIndex = 24;
			   this->PA_askwhoreserv_lab->Text = L"this reservation for \?";
			   // 
			   // PA_askwhoreserv_RB2
			   // 
			   this->PA_askwhoreserv_RB2->AutoSize = true;
			   this->PA_askwhoreserv_RB2->Checked = true;
			   this->PA_askwhoreserv_RB2->Location = System::Drawing::Point(116, 46);
			   this->PA_askwhoreserv_RB2->Name = L"PA_askwhoreserv_RB2";
			   this->PA_askwhoreserv_RB2->Size = System::Drawing::Size(60, 20);
			   this->PA_askwhoreserv_RB2->TabIndex = 23;
			   this->PA_askwhoreserv_RB2->TabStop = true;
			   this->PA_askwhoreserv_RB2->Text = L"Other";
			   this->PA_askwhoreserv_RB2->UseVisualStyleBackColor = true;
			   this->PA_askwhoreserv_RB2->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_askwhoreserv_RB2_CheckedChanged);
			   // 
			   // PA_askwhoreserv_RB1
			   // 
			   this->PA_askwhoreserv_RB1->AutoSize = true;
			   this->PA_askwhoreserv_RB1->Location = System::Drawing::Point(12, 44);
			   this->PA_askwhoreserv_RB1->Name = L"PA_askwhoreserv_RB1";
			   this->PA_askwhoreserv_RB1->Size = System::Drawing::Size(48, 20);
			   this->PA_askwhoreserv_RB1->TabIndex = 22;
			   this->PA_askwhoreserv_RB1->Text = L"ME";
			   this->PA_askwhoreserv_RB1->UseVisualStyleBackColor = true;
			   this->PA_askwhoreserv_RB1->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_askwhoreserv_RB1_CheckedChanged);
			   // 
			   // PA_Check2
			   // 
			   this->PA_Check2->Controls->Add(this->PA_RtypeCheck_RB2);
			   this->PA_Check2->Controls->Add(this->PA_RtypeCheck);
			   this->PA_Check2->Controls->Add(this->PA_RtypeCheck_RB1);
			   this->PA_Check2->Location = System::Drawing::Point(358, 0);
			   this->PA_Check2->Name = L"PA_Check2";
			   this->PA_Check2->Size = System::Drawing::Size(246, 68);
			   this->PA_Check2->TabIndex = 34;
			   // 
			   // PA_RtypeCheck_RB2
			   // 
			   this->PA_RtypeCheck_RB2->AutoSize = true;
			   this->PA_RtypeCheck_RB2->Location = System::Drawing::Point(101, 40);
			   this->PA_RtypeCheck_RB2->Name = L"PA_RtypeCheck_RB2";
			   this->PA_RtypeCheck_RB2->Size = System::Drawing::Size(89, 20);
			   this->PA_RtypeCheck_RB2->TabIndex = 32;
			   this->PA_RtypeCheck_RB2->Text = L"Check-UP";
			   this->PA_RtypeCheck_RB2->UseVisualStyleBackColor = true;
			   this->PA_RtypeCheck_RB2->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_RtypeCheck_RB2_CheckedChanged);
			   // 
			   // PA_RtypeCheck
			   // 
			   this->PA_RtypeCheck->AutoSize = true;
			   this->PA_RtypeCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_RtypeCheck->Location = System::Drawing::Point(2, 9);
			   this->PA_RtypeCheck->Name = L"PA_RtypeCheck";
			   this->PA_RtypeCheck->Size = System::Drawing::Size(233, 25);
			   this->PA_RtypeCheck->TabIndex = 33;
			   this->PA_RtypeCheck->Text = L"what do you want reserve";
			   // 
			   // PA_RtypeCheck_RB1
			   // 
			   this->PA_RtypeCheck_RB1->AutoSize = true;
			   this->PA_RtypeCheck_RB1->Checked = true;
			   this->PA_RtypeCheck_RB1->Location = System::Drawing::Point(14, 40);
			   this->PA_RtypeCheck_RB1->Name = L"PA_RtypeCheck_RB1";
			   this->PA_RtypeCheck_RB1->Size = System::Drawing::Size(75, 20);
			   this->PA_RtypeCheck_RB1->TabIndex = 31;
			   this->PA_RtypeCheck_RB1->TabStop = true;
			   this->PA_RtypeCheck_RB1->Text = L"Surgery";
			   this->PA_RtypeCheck_RB1->UseVisualStyleBackColor = true;
			   this->PA_RtypeCheck_RB1->CheckedChanged += gcnew System::EventHandler(this, &mainPage::PA_RtypeCheck_RB1_CheckedChanged);
			   // 
			   // PA_DayenterH_COM
			   // 
			   this->PA_DayenterH_COM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_DayenterH_COM->FormattingEnabled = true;
			   this->PA_DayenterH_COM->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			   this->PA_DayenterH_COM->Location = System::Drawing::Point(380, 352);
			   this->PA_DayenterH_COM->Name = L"PA_DayenterH_COM";
			   this->PA_DayenterH_COM->Size = System::Drawing::Size(239, 34);
			   this->PA_DayenterH_COM->TabIndex = 28;
			   this->PA_DayenterH_COM->Text = L"None";
			   // 
			   // PA_RSClist_COM
			   // 
			   this->PA_RSClist_COM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_RSClist_COM->FormattingEnabled = true;
			   this->PA_RSClist_COM->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			   this->PA_RSClist_COM->Location = System::Drawing::Point(35, 348);
			   this->PA_RSClist_COM->Name = L"PA_RSClist_COM";
			   this->PA_RSClist_COM->Size = System::Drawing::Size(239, 34);
			   this->PA_RSClist_COM->TabIndex = 27;
			   // 
			   // PA_selectHforR_COM
			   // 
			   this->PA_selectHforR_COM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_selectHforR_COM->FormattingEnabled = true;
			   this->PA_selectHforR_COM->Location = System::Drawing::Point(380, 248);
			   this->PA_selectHforR_COM->Name = L"PA_selectHforR_COM";
			   this->PA_selectHforR_COM->Size = System::Drawing::Size(239, 34);
			   this->PA_selectHforR_COM->TabIndex = 25;
			   this->PA_selectHforR_COM->Text = L"None";
			   this->PA_selectHforR_COM->SelectedIndexChanged += gcnew System::EventHandler(this, &mainPage::PA_selectHforR_COM_SelectedIndexChanged);
			   this->PA_selectHforR_COM->TextChanged += gcnew System::EventHandler(this, &mainPage::PA_selectHforR_COM_TextChanged);
			   // 
			   // PA_DayenterH_lab
			   // 
			   this->PA_DayenterH_lab->AutoSize = true;
			   this->PA_DayenterH_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_DayenterH_lab->Location = System::Drawing::Point(376, 304);
			   this->PA_DayenterH_lab->Name = L"PA_DayenterH_lab";
			   this->PA_DayenterH_lab->Size = System::Drawing::Size(217, 29);
			   this->PA_DayenterH_lab->TabIndex = 20;
			   this->PA_DayenterH_lab->Text = L"Day enter hospital";
			   // 
			   // PA_PAord_lab
			   // 
			   this->PA_PAord_lab->AutoSize = true;
			   this->PA_PAord_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_PAord_lab->Location = System::Drawing::Point(376, 111);
			   this->PA_PAord_lab->Name = L"PA_PAord_lab";
			   this->PA_PAord_lab->Size = System::Drawing::Size(144, 29);
			   this->PA_PAord_lab->TabIndex = 18;
			   this->PA_PAord_lab->Text = L"Patient Age";
			   // 
			   // PA_PAord_TB
			   // 
			   this->PA_PAord_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->PA_PAord_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_PAord_TB->Location = System::Drawing::Point(381, 159);
			   this->PA_PAord_TB->Name = L"PA_PAord_TB";
			   this->PA_PAord_TB->Size = System::Drawing::Size(238, 29);
			   this->PA_PAord_TB->TabIndex = 19;
			   // 
			   // PA_selectHforR_lab
			   // 
			   this->PA_selectHforR_lab->AutoSize = true;
			   this->PA_selectHforR_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_selectHforR_lab->Location = System::Drawing::Point(375, 204);
			   this->PA_selectHforR_lab->Name = L"PA_selectHforR_lab";
			   this->PA_selectHforR_lab->Size = System::Drawing::Size(180, 29);
			   this->PA_selectHforR_lab->TabIndex = 16;
			   this->PA_selectHforR_lab->Text = L"Hospital Name";
			   // 
			   // PA_RSClist_lab
			   // 
			   this->PA_RSClist_lab->AutoSize = true;
			   this->PA_RSClist_lab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_RSClist_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_RSClist_lab->Location = System::Drawing::Point(31, 298);
			   this->PA_RSClist_lab->Name = L"PA_RSClist_lab";
			   this->PA_RSClist_lab->Size = System::Drawing::Size(154, 29);
			   this->PA_RSClist_lab->TabIndex = 14;
			   this->PA_RSClist_lab->Text = L"SP or CL list";
			   // 
			   // PA_PphNord_lab
			   // 
			   this->PA_PphNord_lab->AutoSize = true;
			   this->PA_PphNord_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_PphNord_lab->Location = System::Drawing::Point(31, 198);
			   this->PA_PphNord_lab->Name = L"PA_PphNord_lab";
			   this->PA_PphNord_lab->Size = System::Drawing::Size(183, 29);
			   this->PA_PphNord_lab->TabIndex = 12;
			   this->PA_PphNord_lab->Text = L"Phone Number";
			   // 
			   // PA_PphNord_TB
			   // 
			   this->PA_PphNord_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->PA_PphNord_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_PphNord_TB->Location = System::Drawing::Point(36, 248);
			   this->PA_PphNord_TB->Name = L"PA_PphNord_TB";
			   this->PA_PphNord_TB->Size = System::Drawing::Size(238, 29);
			   this->PA_PphNord_TB->TabIndex = 13;
			   // 
			   // button1
			   // 
			   this->button1->FlatAppearance->BorderSize = 0;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.93846F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(546, 487);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(105, 52);
			   this->button1->TabIndex = 11;
			   this->button1->Text = L"Add";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &mainPage::button1_Click);
			   this->button1->Leave += gcnew System::EventHandler(this, &mainPage::button1_Leave);
			   // 
			   // PA_PNord_lab
			   // 
			   this->PA_PNord_lab->AutoSize = true;
			   this->PA_PNord_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_PNord_lab->Location = System::Drawing::Point(31, 98);
			   this->PA_PNord_lab->Name = L"PA_PNord_lab";
			   this->PA_PNord_lab->Size = System::Drawing::Size(167, 29);
			   this->PA_PNord_lab->TabIndex = 7;
			   this->PA_PNord_lab->Text = L"Patient Name";
			   // 
			   // PA_PNord_TB
			   // 
			   this->PA_PNord_TB->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->PA_PNord_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_PNord_TB->Location = System::Drawing::Point(36, 148);
			   this->PA_PNord_TB->Name = L"PA_PNord_TB";
			   this->PA_PNord_TB->Size = System::Drawing::Size(238, 29);
			   this->PA_PNord_TB->TabIndex = 8;
			   // 
			   // PA_warningM
			   // 
			   this->PA_warningM->AutoSize = true;
			   this->PA_warningM->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_warningM->ForeColor = System::Drawing::Color::Red;
			   this->PA_warningM->Location = System::Drawing::Point(395, 403);
			   this->PA_warningM->Name = L"PA_warningM";
			   this->PA_warningM->Size = System::Drawing::Size(53, 19);
			   this->PA_warningM->TabIndex = 10;
			   this->PA_warningM->Text = L"label2";
			   // 
			   // PA_delRlayout
			   // 
			   this->PA_delRlayout->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->PA_delRlayout->Controls->Add(this->PA_text4);
			   this->PA_delRlayout->Controls->Add(this->PA_text3);
			   this->PA_delRlayout->Controls->Add(this->PA_delRlist_state);
			   this->PA_delRlayout->Controls->Add(this->PA_delRlist_COM);
			   this->PA_delRlayout->Controls->Add(this->PA_delRlist_but);
			   this->PA_delRlayout->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_delRlayout->Location = System::Drawing::Point(0, 80);
			   this->PA_delRlayout->Name = L"PA_delRlayout";
			   this->PA_delRlayout->Size = System::Drawing::Size(766, 574);
			   this->PA_delRlayout->TabIndex = 16;
			   // 
			   // PA_text4
			   // 
			   this->PA_text4->AutoSize = true;
			   this->PA_text4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_text4->Location = System::Drawing::Point(37, 107);
			   this->PA_text4->Name = L"PA_text4";
			   this->PA_text4->Size = System::Drawing::Size(180, 29);
			   this->PA_text4->TabIndex = 12;
			   this->PA_text4->Text = L"Hospital Name";
			   // 
			   // PA_text3
			   // 
			   this->PA_text3->AutoSize = true;
			   this->PA_text3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_text3->Location = System::Drawing::Point(37, 53);
			   this->PA_text3->Name = L"PA_text3";
			   this->PA_text3->Size = System::Drawing::Size(167, 29);
			   this->PA_text3->TabIndex = 11;
			   this->PA_text3->Text = L"Patient Name";
			   // 
			   // PA_delRlist_state
			   // 
			   this->PA_delRlist_state->AutoSize = true;
			   this->PA_delRlist_state->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_delRlist_state->ForeColor = System::Drawing::Color::IndianRed;
			   this->PA_delRlist_state->Location = System::Drawing::Point(37, 245);
			   this->PA_delRlist_state->Name = L"PA_delRlist_state";
			   this->PA_delRlist_state->Size = System::Drawing::Size(64, 25);
			   this->PA_delRlist_state->TabIndex = 10;
			   this->PA_delRlist_state->Text = L"label4";
			   // 
			   // PA_delRlist_COM
			   // 
			   this->PA_delRlist_COM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_delRlist_COM->FormattingEnabled = true;
			   this->PA_delRlist_COM->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"empty" });
			   this->PA_delRlist_COM->Location = System::Drawing::Point(39, 188);
			   this->PA_delRlist_COM->Name = L"PA_delRlist_COM";
			   this->PA_delRlist_COM->Size = System::Drawing::Size(251, 37);
			   this->PA_delRlist_COM->TabIndex = 6;
			   this->PA_delRlist_COM->Text = L"Reservation List";
			   this->PA_delRlist_COM->SelectedIndexChanged += gcnew System::EventHandler(this, &mainPage::PA_delRlist_COM_SelectedIndexChanged);
			   // 
			   // PA_delRlist_but
			   // 
			   this->PA_delRlist_but->FlatAppearance->BorderSize = 0;
			   this->PA_delRlist_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_delRlist_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_delRlist_but->Location = System::Drawing::Point(358, 188);
			   this->PA_delRlist_but->Name = L"PA_delRlist_but";
			   this->PA_delRlist_but->Size = System::Drawing::Size(107, 41);
			   this->PA_delRlist_but->TabIndex = 9;
			   this->PA_delRlist_but->Text = L"Delete";
			   this->PA_delRlist_but->UseVisualStyleBackColor = true;
			   this->PA_delRlist_but->Click += gcnew System::EventHandler(this, &mainPage::PA_delRlist_but_Click);
			   this->PA_delRlist_but->Leave += gcnew System::EventHandler(this, &mainPage::PA_delRlist_but_Leave);
			   // 
			   // PA_waitingeditRlist
			   // 
			   this->PA_waitingeditRlist->BackColor = System::Drawing::SystemColors::ControlLight;
			   this->PA_waitingeditRlist->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			   this->PA_waitingeditRlist->Controls->Add(this->pictureBox2);
			   this->PA_waitingeditRlist->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_waitingeditRlist->Location = System::Drawing::Point(0, 80);
			   this->PA_waitingeditRlist->Name = L"PA_waitingeditRlist";
			   this->PA_waitingeditRlist->Size = System::Drawing::Size(766, 574);
			   this->PA_waitingeditRlist->TabIndex = 17;
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(162, 80);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(457, 383);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox2->TabIndex = 0;
			   this->pictureBox2->TabStop = false;
			   // 
			   // PA_header_editRlist
			   // 
			   this->PA_header_editRlist->Controls->Add(this->PA_delRlist);
			   this->PA_header_editRlist->Controls->Add(this->PA_addRlist);
			   this->PA_header_editRlist->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_header_editRlist->Location = System::Drawing::Point(0, 0);
			   this->PA_header_editRlist->Name = L"PA_header_editRlist";
			   this->PA_header_editRlist->Size = System::Drawing::Size(766, 80);
			   this->PA_header_editRlist->TabIndex = 15;
			   // 
			   // PA_delRlist
			   // 
			   this->PA_delRlist->FlatAppearance->BorderSize = 0;
			   this->PA_delRlist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_delRlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_delRlist->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_delRlist.Image")));
			   this->PA_delRlist->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_delRlist->Location = System::Drawing::Point(432, 10);
			   this->PA_delRlist->Name = L"PA_delRlist";
			   this->PA_delRlist->Size = System::Drawing::Size(120, 60);
			   this->PA_delRlist->TabIndex = 13;
			   this->PA_delRlist->Text = L"Delete";
			   this->PA_delRlist->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->PA_delRlist->UseVisualStyleBackColor = true;
			   this->PA_delRlist->Click += gcnew System::EventHandler(this, &mainPage::PA_delRlist_Click);
			   // 
			   // PA_addRlist
			   // 
			   this->PA_addRlist->FlatAppearance->BorderSize = 0;
			   this->PA_addRlist->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_addRlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_addRlist->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_addRlist.Image")));
			   this->PA_addRlist->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_addRlist->Location = System::Drawing::Point(183, 10);
			   this->PA_addRlist->Name = L"PA_addRlist";
			   this->PA_addRlist->Size = System::Drawing::Size(105, 60);
			   this->PA_addRlist->TabIndex = 12;
			   this->PA_addRlist->Text = L"Add";
			   this->PA_addRlist->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->PA_addRlist->UseVisualStyleBackColor = true;
			   this->PA_addRlist->Click += gcnew System::EventHandler(this, &mainPage::PA_addRlayout_Click);
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
			   // PA_reservlist
			   // 
			   this->PA_reservlist->Controls->Add(this->PA_viewR_PAge);
			   this->PA_reservlist->Controls->Add(this->PA_viewR_HSpCl);
			   this->PA_reservlist->Controls->Add(this->PA_viewR_bedPrice);
			   this->PA_reservlist->Controls->Add(this->PA_viewR_SurgeryPrice);
			   this->PA_reservlist->Controls->Add(this->PA_viewR_ChandTPrice);
			   this->PA_reservlist->Controls->Add(this->PA_viewR_phoneN);
			   this->PA_reservlist->Controls->Add(this->PA_viewR_Day);
			   this->PA_reservlist->Controls->Add(this->PA_viewR_HReserved);
			   this->PA_reservlist->Controls->Add(this->PA_viewR_PName);
			   this->PA_reservlist->Controls->Add(this->PA_viewR_RoomID);
			   this->PA_reservlist->Controls->Add(this->PA_reservlist_header);
			   this->PA_reservlist->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_reservlist->Location = System::Drawing::Point(0, 0);
			   this->PA_reservlist->Name = L"PA_reservlist";
			   this->PA_reservlist->Size = System::Drawing::Size(766, 654);
			   this->PA_reservlist->TabIndex = 4;
			   this->PA_reservlist->Leave += gcnew System::EventHandler(this, &mainPage::PA_reservlist_Leave);
			   // 
			   // PA_viewR_PAge
			   // 
			   this->PA_viewR_PAge->AutoSize = true;
			   this->PA_viewR_PAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_viewR_PAge->Location = System::Drawing::Point(410, 234);
			   this->PA_viewR_PAge->Name = L"PA_viewR_PAge";
			   this->PA_viewR_PAge->Size = System::Drawing::Size(169, 36);
			   this->PA_viewR_PAge->TabIndex = 9;
			   this->PA_viewR_PAge->Text = L"Patient Age";
			   // 
			   // PA_viewR_HSpCl
			   // 
			   this->PA_viewR_HSpCl->AutoSize = true;
			   this->PA_viewR_HSpCl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_viewR_HSpCl->Location = System::Drawing::Point(27, 360);
			   this->PA_viewR_HSpCl->Name = L"PA_viewR_HSpCl";
			   this->PA_viewR_HSpCl->Size = System::Drawing::Size(279, 36);
			   this->PA_viewR_HSpCl->TabIndex = 8;
			   this->PA_viewR_HSpCl->Text = L"HSpecialty Or Clinic";
			   // 
			   // PA_viewR_bedPrice
			   // 
			   this->PA_viewR_bedPrice->AutoSize = true;
			   this->PA_viewR_bedPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_viewR_bedPrice->Location = System::Drawing::Point(410, 488);
			   this->PA_viewR_bedPrice->Name = L"PA_viewR_bedPrice";
			   this->PA_viewR_bedPrice->Size = System::Drawing::Size(159, 36);
			   this->PA_viewR_bedPrice->TabIndex = 7;
			   this->PA_viewR_bedPrice->Text = L"Beds Price";
			   // 
			   // PA_viewR_SurgeryPrice
			   // 
			   this->PA_viewR_SurgeryPrice->AutoSize = true;
			   this->PA_viewR_SurgeryPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_viewR_SurgeryPrice->Location = System::Drawing::Point(27, 490);
			   this->PA_viewR_SurgeryPrice->Name = L"PA_viewR_SurgeryPrice";
			   this->PA_viewR_SurgeryPrice->Size = System::Drawing::Size(196, 36);
			   this->PA_viewR_SurgeryPrice->TabIndex = 6;
			   this->PA_viewR_SurgeryPrice->Text = L"Surgery Price";
			   // 
			   // PA_viewR_ChandTPrice
			   // 
			   this->PA_viewR_ChandTPrice->AutoSize = true;
			   this->PA_viewR_ChandTPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_viewR_ChandTPrice->Location = System::Drawing::Point(24, 425);
			   this->PA_viewR_ChandTPrice->Name = L"PA_viewR_ChandTPrice";
			   this->PA_viewR_ChandTPrice->Size = System::Drawing::Size(288, 36);
			   this->PA_viewR_ChandTPrice->TabIndex = 5;
			   this->PA_viewR_ChandTPrice->Text = L"Check-UP/total price";
			   // 
			   // PA_viewR_phoneN
			   // 
			   this->PA_viewR_phoneN->AutoSize = true;
			   this->PA_viewR_phoneN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_viewR_phoneN->Location = System::Drawing::Point(25, 295);
			   this->PA_viewR_phoneN->Name = L"PA_viewR_phoneN";
			   this->PA_viewR_phoneN->Size = System::Drawing::Size(215, 36);
			   this->PA_viewR_phoneN->TabIndex = 4;
			   this->PA_viewR_phoneN->Text = L"Phone Number";
			   // 
			   // PA_viewR_Day
			   // 
			   this->PA_viewR_Day->AutoSize = true;
			   this->PA_viewR_Day->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_viewR_Day->Location = System::Drawing::Point(25, 230);
			   this->PA_viewR_Day->Name = L"PA_viewR_Day";
			   this->PA_viewR_Day->Size = System::Drawing::Size(234, 36);
			   this->PA_viewR_Day->TabIndex = 3;
			   this->PA_viewR_Day->Text = L"Reservation Day";
			   // 
			   // PA_viewR_HReserved
			   // 
			   this->PA_viewR_HReserved->AutoSize = true;
			   this->PA_viewR_HReserved->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_viewR_HReserved->Location = System::Drawing::Point(24, 165);
			   this->PA_viewR_HReserved->Name = L"PA_viewR_HReserved";
			   this->PA_viewR_HReserved->Size = System::Drawing::Size(208, 36);
			   this->PA_viewR_HReserved->TabIndex = 2;
			   this->PA_viewR_HReserved->Text = L"Hospital Name";
			   // 
			   // PA_viewR_PName
			   // 
			   this->PA_viewR_PName->AutoSize = true;
			   this->PA_viewR_PName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_viewR_PName->Location = System::Drawing::Point(24, 100);
			   this->PA_viewR_PName->Name = L"PA_viewR_PName";
			   this->PA_viewR_PName->Size = System::Drawing::Size(200, 36);
			   this->PA_viewR_PName->TabIndex = 0;
			   this->PA_viewR_PName->Text = L"Patient Name ";
			   // 
			   // PA_viewR_RoomID
			   // 
			   this->PA_viewR_RoomID->AutoSize = true;
			   this->PA_viewR_RoomID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_viewR_RoomID->Location = System::Drawing::Point(410, 431);
			   this->PA_viewR_RoomID->Name = L"PA_viewR_RoomID";
			   this->PA_viewR_RoomID->Size = System::Drawing::Size(131, 36);
			   this->PA_viewR_RoomID->TabIndex = 0;
			   this->PA_viewR_RoomID->Text = L"Room ID";
			   // 
			   // PA_reservlist_header
			   // 
			   this->PA_reservlist_header->Controls->Add(this->PA_viewRButton);
			   this->PA_reservlist_header->Controls->Add(this->PA_viewRlist);
			   this->PA_reservlist_header->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_reservlist_header->Location = System::Drawing::Point(0, 0);
			   this->PA_reservlist_header->Name = L"PA_reservlist_header";
			   this->PA_reservlist_header->Size = System::Drawing::Size(766, 84);
			   this->PA_reservlist_header->TabIndex = 1;
			   // 
			   // PA_viewRButton
			   // 
			   this->PA_viewRButton->FlatAppearance->BorderSize = 0;
			   this->PA_viewRButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_viewRButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_viewRButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_viewRButton.Image")));
			   this->PA_viewRButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_viewRButton->Location = System::Drawing::Point(399, 23);
			   this->PA_viewRButton->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_viewRButton->Name = L"PA_viewRButton";
			   this->PA_viewRButton->Size = System::Drawing::Size(119, 36);
			   this->PA_viewRButton->TabIndex = 5;
			   this->PA_viewRButton->Text = L"View";
			   this->PA_viewRButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->PA_viewRButton->UseVisualStyleBackColor = true;
			   this->PA_viewRButton->Click += gcnew System::EventHandler(this, &mainPage::PA_viewRButton_Click);
			   // 
			   // PA_viewRlist
			   // 
			   this->PA_viewRlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_viewRlist->FormattingEnabled = true;
			   this->PA_viewRlist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			   this->PA_viewRlist->Location = System::Drawing::Point(33, 21);
			   this->PA_viewRlist->Name = L"PA_viewRlist";
			   this->PA_viewRlist->Size = System::Drawing::Size(247, 37);
			   this->PA_viewRlist->TabIndex = 0;
			   this->PA_viewRlist->Text = L"Reservations list";
			   // 
			   // PA_editPinfo
			   // 
			   this->PA_editPinfo->Controls->Add(this->PA_editRemain);
			   this->PA_editPinfo->Controls->Add(this->PA_edit_waiting);
			   this->PA_editPinfo->Controls->Add(this->PA_editpass);
			   this->PA_editPinfo->Controls->Add(this->PA_GofCHEditPinfo);
			   this->PA_editPinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_editPinfo->Location = System::Drawing::Point(0, 0);
			   this->PA_editPinfo->Name = L"PA_editPinfo";
			   this->PA_editPinfo->Size = System::Drawing::Size(766, 654);
			   this->PA_editPinfo->TabIndex = 7;
			   // 
			   // PA_editRemain
			   // 
			   this->PA_editRemain->Controls->Add(this->label6);
			   this->PA_editRemain->Controls->Add(this->PA_editRemain_TB);
			   this->PA_editRemain->Controls->Add(this->PA_editRemain_lab);
			   this->PA_editRemain->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_editRemain->Location = System::Drawing::Point(195, 0);
			   this->PA_editRemain->Name = L"PA_editRemain";
			   this->PA_editRemain->Size = System::Drawing::Size(571, 654);
			   this->PA_editRemain->TabIndex = 14;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.969231F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label6->ForeColor = System::Drawing::Color::Red;
			   this->label6->Location = System::Drawing::Point(53, 200);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(53, 19);
			   this->label6->TabIndex = 2;
			   this->label6->Text = L"label2";
			   // 
			   // PA_editRemain_TB
			   // 
			   this->PA_editRemain_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_editRemain_TB->Location = System::Drawing::Point(49, 133);
			   this->PA_editRemain_TB->Name = L"PA_editRemain_TB";
			   this->PA_editRemain_TB->Size = System::Drawing::Size(236, 32);
			   this->PA_editRemain_TB->TabIndex = 1;
			   // 
			   // PA_editRemain_lab
			   // 
			   this->PA_editRemain_lab->AutoSize = true;
			   this->PA_editRemain_lab->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_editRemain_lab->Location = System::Drawing::Point(45, 87);
			   this->PA_editRemain_lab->Name = L"PA_editRemain_lab";
			   this->PA_editRemain_lab->Size = System::Drawing::Size(66, 24);
			   this->PA_editRemain_lab->TabIndex = 0;
			   this->PA_editRemain_lab->Text = L"label2";
			   // 
			   // PA_edit_waiting
			   // 
			   this->PA_edit_waiting->Controls->Add(this->label8);
			   this->PA_edit_waiting->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_edit_waiting->Location = System::Drawing::Point(195, 0);
			   this->PA_edit_waiting->Name = L"PA_edit_waiting";
			   this->PA_edit_waiting->Size = System::Drawing::Size(571, 654);
			   this->PA_edit_waiting->TabIndex = 16;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label8->Location = System::Drawing::Point(248, 279);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(136, 24);
			   this->label8->TabIndex = 0;
			   this->label8->Text = L"waiting select";
			   // 
			   // PA_editpass
			   // 
			   this->PA_editpass->Controls->Add(this->textBox1);
			   this->PA_editpass->Controls->Add(this->label2);
			   this->PA_editpass->Controls->Add(this->textBox2);
			   this->PA_editpass->Controls->Add(this->label4);
			   this->PA_editpass->Controls->Add(this->textBox3);
			   this->PA_editpass->Controls->Add(this->label5);
			   this->PA_editpass->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_editpass->Location = System::Drawing::Point(195, 0);
			   this->PA_editpass->Name = L"PA_editpass";
			   this->PA_editpass->Size = System::Drawing::Size(571, 654);
			   this->PA_editpass->TabIndex = 13;
			   // 
			   // textBox1
			   // 
			   this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->textBox1->Location = System::Drawing::Point(57, 334);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(236, 32);
			   this->textBox1->TabIndex = 6;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(56, 294);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(229, 24);
			   this->label2->TabIndex = 5;
			   this->label2->Text = L"Confirm new password";
			   // 
			   // textBox2
			   // 
			   this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->textBox2->Location = System::Drawing::Point(57, 240);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(236, 32);
			   this->textBox2->TabIndex = 4;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(56, 200);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(206, 24);
			   this->label4->TabIndex = 3;
			   this->label4->Text = L"Enter new password ";
			   // 
			   // textBox3
			   // 
			   this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->textBox3->Location = System::Drawing::Point(57, 142);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(236, 32);
			   this->textBox3->TabIndex = 2;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(56, 102);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(191, 24);
			   this->label5->TabIndex = 1;
			   this->label5->Text = L"Enter old password";
			   // 
			   // PA_GofCHEditPinfo
			   // 
			   this->PA_GofCHEditPinfo->Controls->Add(this->PA_editPhNum);
			   this->PA_GofCHEditPinfo->Controls->Add(this->PA_editpass_but);
			   this->PA_GofCHEditPinfo->Controls->Add(this->PA_editusername);
			   this->PA_GofCHEditPinfo->Controls->Add(this->PA_editAge);
			   this->PA_GofCHEditPinfo->Controls->Add(this->PA_editName);
			   this->PA_GofCHEditPinfo->Dock = System::Windows::Forms::DockStyle::Left;
			   this->PA_GofCHEditPinfo->Location = System::Drawing::Point(0, 0);
			   this->PA_GofCHEditPinfo->Name = L"PA_GofCHEditPinfo";
			   this->PA_GofCHEditPinfo->Size = System::Drawing::Size(195, 654);
			   this->PA_GofCHEditPinfo->TabIndex = 12;
			   // 
			   // PA_editPhNum
			   // 
			   this->PA_editPhNum->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_editPhNum->FlatAppearance->BorderSize = 0;
			   this->PA_editPhNum->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_editPhNum->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_editPhNum->Location = System::Drawing::Point(0, 488);
			   this->PA_editPhNum->Name = L"PA_editPhNum";
			   this->PA_editPhNum->Size = System::Drawing::Size(195, 122);
			   this->PA_editPhNum->TabIndex = 6;
			   this->PA_editPhNum->Text = L"Edit Phone Number";
			   this->PA_editPhNum->UseVisualStyleBackColor = true;
			   this->PA_editPhNum->Click += gcnew System::EventHandler(this, &mainPage::PA_editPhNum_Click);
			   // 
			   // PA_editpass_but
			   // 
			   this->PA_editpass_but->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_editpass_but->FlatAppearance->BorderSize = 0;
			   this->PA_editpass_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_editpass_but->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_editpass_but->Location = System::Drawing::Point(0, 366);
			   this->PA_editpass_but->Name = L"PA_editpass_but";
			   this->PA_editpass_but->Size = System::Drawing::Size(195, 122);
			   this->PA_editpass_but->TabIndex = 5;
			   this->PA_editpass_but->Text = L"Change password";
			   this->PA_editpass_but->UseVisualStyleBackColor = true;
			   this->PA_editpass_but->Click += gcnew System::EventHandler(this, &mainPage::PA_editpass_but_Click);
			   // 
			   // PA_editusername
			   // 
			   this->PA_editusername->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_editusername->FlatAppearance->BorderSize = 0;
			   this->PA_editusername->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_editusername->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_editusername->Location = System::Drawing::Point(0, 244);
			   this->PA_editusername->Name = L"PA_editusername";
			   this->PA_editusername->Size = System::Drawing::Size(195, 122);
			   this->PA_editusername->TabIndex = 4;
			   this->PA_editusername->Text = L"Edit username";
			   this->PA_editusername->UseVisualStyleBackColor = true;
			   this->PA_editusername->Click += gcnew System::EventHandler(this, &mainPage::PA_editusername_Click);
			   // 
			   // PA_editAge
			   // 
			   this->PA_editAge->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_editAge->FlatAppearance->BorderSize = 0;
			   this->PA_editAge->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_editAge->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_editAge->Location = System::Drawing::Point(0, 122);
			   this->PA_editAge->Name = L"PA_editAge";
			   this->PA_editAge->Size = System::Drawing::Size(195, 122);
			   this->PA_editAge->TabIndex = 3;
			   this->PA_editAge->Text = L"Edit Age";
			   this->PA_editAge->UseVisualStyleBackColor = true;
			   this->PA_editAge->Click += gcnew System::EventHandler(this, &mainPage::PA_editAge_Click);
			   // 
			   // PA_editName
			   // 
			   this->PA_editName->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_editName->FlatAppearance->BorderSize = 0;
			   this->PA_editName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_editName->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_editName->Location = System::Drawing::Point(0, 0);
			   this->PA_editName->Name = L"PA_editName";
			   this->PA_editName->Size = System::Drawing::Size(195, 122);
			   this->PA_editName->TabIndex = 2;
			   this->PA_editName->Text = L"Edit Name";
			   this->PA_editName->UseVisualStyleBackColor = true;
			   this->PA_editName->Click += gcnew System::EventHandler(this, &mainPage::PA_editName_Click);
			   // 
			   // PA_ModifyReserv
			   // 
			   this->PA_ModifyReserv->Controls->Add(this->PA_editNAPhnumlayout);
			   this->PA_ModifyReserv->Controls->Add(this->PA_modifyHRTRDsLayout);
			   this->PA_ModifyReserv->Controls->Add(this->PA_groupCmodify);
			   this->PA_ModifyReserv->Controls->Add(this->PA_headerM);
			   this->PA_ModifyReserv->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_ModifyReserv->Location = System::Drawing::Point(0, 0);
			   this->PA_ModifyReserv->Name = L"PA_ModifyReserv";
			   this->PA_ModifyReserv->Size = System::Drawing::Size(766, 654);
			   this->PA_ModifyReserv->TabIndex = 3;
			   // 
			   // PA_editNAPhnumlayout
			   // 
			   this->PA_editNAPhnumlayout->Controls->Add(this->PA_editRbutton);
			   this->PA_editNAPhnumlayout->Controls->Add(this->PA_modifyRstate_lab);
			   this->PA_editNAPhnumlayout->Controls->Add(this->PA_modifyRord_TB);
			   this->PA_editNAPhnumlayout->Controls->Add(this->PA_modifyRord_lab);
			   this->PA_editNAPhnumlayout->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_editNAPhnumlayout->Location = System::Drawing::Point(216, 87);
			   this->PA_editNAPhnumlayout->Name = L"PA_editNAPhnumlayout";
			   this->PA_editNAPhnumlayout->Size = System::Drawing::Size(550, 567);
			   this->PA_editNAPhnumlayout->TabIndex = 6;
			   this->PA_editNAPhnumlayout->Tag = L"";
			   this->PA_editNAPhnumlayout->Visible = false;
			   // 
			   // PA_editRbutton
			   // 
			   this->PA_editRbutton->FlatAppearance->BorderSize = 0;
			   this->PA_editRbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_editRbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_editRbutton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_editRbutton->Location = System::Drawing::Point(298, 57);
			   this->PA_editRbutton->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_editRbutton->Name = L"PA_editRbutton";
			   this->PA_editRbutton->Size = System::Drawing::Size(114, 36);
			   this->PA_editRbutton->TabIndex = 11;
			   this->PA_editRbutton->Text = L"Edit";
			   this->PA_editRbutton->UseVisualStyleBackColor = true;
			   this->PA_editRbutton->Click += gcnew System::EventHandler(this, &mainPage::PA_editRbutton_Click);
			   this->PA_editRbutton->Leave += gcnew System::EventHandler(this, &mainPage::PA_editRbutton_Leave);
			   // 
			   // PA_modifyRstate_lab
			   // 
			   this->PA_modifyRstate_lab->AutoSize = true;
			   this->PA_modifyRstate_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.969231F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_modifyRstate_lab->ForeColor = System::Drawing::Color::Red;
			   this->PA_modifyRstate_lab->Location = System::Drawing::Point(30, 106);
			   this->PA_modifyRstate_lab->Name = L"PA_modifyRstate_lab";
			   this->PA_modifyRstate_lab->Size = System::Drawing::Size(93, 22);
			   this->PA_modifyRstate_lab->TabIndex = 5;
			   this->PA_modifyRstate_lab->Text = L"input state";
			   // 
			   // PA_modifyRord_TB
			   // 
			   this->PA_modifyRord_TB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_modifyRord_TB->Location = System::Drawing::Point(34, 61);
			   this->PA_modifyRord_TB->Name = L"PA_modifyRord_TB";
			   this->PA_modifyRord_TB->Size = System::Drawing::Size(189, 32);
			   this->PA_modifyRord_TB->TabIndex = 4;
			   // 
			   // PA_modifyRord_lab
			   // 
			   this->PA_modifyRord_lab->AutoSize = true;
			   this->PA_modifyRord_lab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_modifyRord_lab->Location = System::Drawing::Point(29, 13);
			   this->PA_modifyRord_lab->Name = L"PA_modifyRord_lab";
			   this->PA_modifyRord_lab->Size = System::Drawing::Size(119, 29);
			   this->PA_modifyRord_lab->TabIndex = 3;
			   this->PA_modifyRord_lab->Text = L"Order text";
			   // 
			   // PA_modifyHRTRDsLayout
			   // 
			   this->PA_modifyHRTRDsLayout->Controls->Add(this->PA_Rnumbofdays);
			   this->PA_modifyHRTRDsLayout->Controls->Add(this->PA_numofdays);
			   this->PA_modifyHRTRDsLayout->Controls->Add(this->panel1);
			   this->PA_modifyHRTRDsLayout->Controls->Add(this->PA_Rlistmodify_but);
			   this->PA_modifyHRTRDsLayout->Controls->Add(this->PA_listOfHRtypeRdays);
			   this->PA_modifyHRTRDsLayout->Controls->Add(this->PA_StateOflist);
			   this->PA_modifyHRTRDsLayout->Controls->Add(this->PA_OrderOflist);
			   this->PA_modifyHRTRDsLayout->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_modifyHRTRDsLayout->Location = System::Drawing::Point(216, 87);
			   this->PA_modifyHRTRDsLayout->Name = L"PA_modifyHRTRDsLayout";
			   this->PA_modifyHRTRDsLayout->Size = System::Drawing::Size(550, 567);
			   this->PA_modifyHRTRDsLayout->TabIndex = 7;
			   this->PA_modifyHRTRDsLayout->Tag = L"";
			   this->PA_modifyHRTRDsLayout->Visible = false;
			   // 
			   // PA_Rnumbofdays
			   // 
			   this->PA_Rnumbofdays->Location = System::Drawing::Point(45, 148);
			   this->PA_Rnumbofdays->Name = L"PA_Rnumbofdays";
			   this->PA_Rnumbofdays->Size = System::Drawing::Size(96, 22);
			   this->PA_Rnumbofdays->TabIndex = 13;
			   this->PA_Rnumbofdays->Visible = false;
			   // 
			   // PA_numofdays
			   // 
			   this->PA_numofdays->AutoSize = true;
			   this->PA_numofdays->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_numofdays->Location = System::Drawing::Point(32, 121);
			   this->PA_numofdays->Name = L"PA_numofdays";
			   this->PA_numofdays->Size = System::Drawing::Size(153, 20);
			   this->PA_numofdays->TabIndex = 12;
			   this->PA_numofdays->Text = L"Enter number of day";
			   this->PA_numofdays->Visible = false;
			   // 
			   // panel1
			   // 
			   this->panel1->Controls->Add(this->radioButton2);
			   this->panel1->Controls->Add(this->radioButton1);
			   this->panel1->Controls->Add(this->label11);
			   this->panel1->Location = System::Drawing::Point(345, 12);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(145, 81);
			   this->panel1->TabIndex = 11;
			   this->panel1->Visible = false;
			   // 
			   // radioButton2
			   // 
			   this->radioButton2->AutoSize = true;
			   this->radioButton2->Location = System::Drawing::Point(17, 53);
			   this->radioButton2->Name = L"radioButton2";
			   this->radioButton2->Size = System::Drawing::Size(89, 20);
			   this->radioButton2->TabIndex = 6;
			   this->radioButton2->TabStop = true;
			   this->radioButton2->Text = L"Check-UP";
			   this->radioButton2->UseVisualStyleBackColor = true;
			   this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &mainPage::radioButton2_CheckedChanged);
			   // 
			   // radioButton1
			   // 
			   this->radioButton1->AutoSize = true;
			   this->radioButton1->Location = System::Drawing::Point(17, 27);
			   this->radioButton1->Name = L"radioButton1";
			   this->radioButton1->Size = System::Drawing::Size(75, 20);
			   this->radioButton1->TabIndex = 5;
			   this->radioButton1->TabStop = true;
			   this->radioButton1->Text = L"Surgery";
			   this->radioButton1->UseVisualStyleBackColor = true;
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.861538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->label11->Location = System::Drawing::Point(13, 4);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(132, 20);
			   this->label11->TabIndex = 4;
			   this->label11->Text = L"Reservation Type";
			   // 
			   // PA_Rlistmodify_but
			   // 
			   this->PA_Rlistmodify_but->FlatAppearance->BorderSize = 0;
			   this->PA_Rlistmodify_but->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_Rlistmodify_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_Rlistmodify_but->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_Rlistmodify_but->Location = System::Drawing::Point(17, 227);
			   this->PA_Rlistmodify_but->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_Rlistmodify_but->Name = L"PA_Rlistmodify_but";
			   this->PA_Rlistmodify_but->Size = System::Drawing::Size(114, 36);
			   this->PA_Rlistmodify_but->TabIndex = 10;
			   this->PA_Rlistmodify_but->Text = L"Edit";
			   this->PA_Rlistmodify_but->UseVisualStyleBackColor = true;
			   this->PA_Rlistmodify_but->Click += gcnew System::EventHandler(this, &mainPage::PA_Rlistmodify_but_Click);
			   this->PA_Rlistmodify_but->Leave += gcnew System::EventHandler(this, &mainPage::PA_Rlistmodify_but_Leave);
			   // 
			   // PA_listOfHRtypeRdays
			   // 
			   this->PA_listOfHRtypeRdays->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_listOfHRtypeRdays->FormattingEnabled = true;
			   this->PA_listOfHRtypeRdays->Location = System::Drawing::Point(33, 73);
			   this->PA_listOfHRtypeRdays->Name = L"PA_listOfHRtypeRdays";
			   this->PA_listOfHRtypeRdays->Size = System::Drawing::Size(224, 34);
			   this->PA_listOfHRtypeRdays->TabIndex = 6;
			   this->PA_listOfHRtypeRdays->Text = L"Clinic list";
			   // 
			   // PA_StateOflist
			   // 
			   this->PA_StateOflist->AutoSize = true;
			   this->PA_StateOflist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.969231F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_StateOflist->ForeColor = System::Drawing::Color::Red;
			   this->PA_StateOflist->Location = System::Drawing::Point(26, 191);
			   this->PA_StateOflist->Name = L"PA_StateOflist";
			   this->PA_StateOflist->Size = System::Drawing::Size(15, 22);
			   this->PA_StateOflist->TabIndex = 5;
			   this->PA_StateOflist->Text = L".";
			   // 
			   // PA_OrderOflist
			   // 
			   this->PA_OrderOflist->AutoSize = true;
			   this->PA_OrderOflist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_OrderOflist->Location = System::Drawing::Point(29, 13);
			   this->PA_OrderOflist->Name = L"PA_OrderOflist";
			   this->PA_OrderOflist->Size = System::Drawing::Size(119, 29);
			   this->PA_OrderOflist->TabIndex = 3;
			   this->PA_OrderOflist->Text = L"Order text";
			   // 
			   // PA_groupCmodify
			   // 
			   this->PA_groupCmodify->BackColor = System::Drawing::SystemColors::ActiveBorder;
			   this->PA_groupCmodify->Controls->Add(this->PA_MNumOfdays);
			   this->PA_groupCmodify->Controls->Add(this->PA_MPRday);
			   this->PA_groupCmodify->Controls->Add(this->PA_MPRtype);
			   this->PA_groupCmodify->Controls->Add(this->PA_MRH);
			   this->PA_groupCmodify->Controls->Add(this->PA_MPphNum);
			   this->PA_groupCmodify->Controls->Add(this->PA_MPage);
			   this->PA_groupCmodify->Controls->Add(this->PA_MPName);
			   this->PA_groupCmodify->Dock = System::Windows::Forms::DockStyle::Left;
			   this->PA_groupCmodify->Location = System::Drawing::Point(0, 87);
			   this->PA_groupCmodify->Name = L"PA_groupCmodify";
			   this->PA_groupCmodify->Size = System::Drawing::Size(216, 567);
			   this->PA_groupCmodify->TabIndex = 2;
			   // 
			   // PA_MNumOfdays
			   // 
			   this->PA_MNumOfdays->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_MNumOfdays->FlatAppearance->BorderSize = 0;
			   this->PA_MNumOfdays->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_MNumOfdays->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Italic,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_MNumOfdays->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_MNumOfdays->Location = System::Drawing::Point(0, 468);
			   this->PA_MNumOfdays->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_MNumOfdays->Name = L"PA_MNumOfdays";
			   this->PA_MNumOfdays->Size = System::Drawing::Size(216, 75);
			   this->PA_MNumOfdays->TabIndex = 9;
			   this->PA_MNumOfdays->Text = L"Number of days";
			   this->PA_MNumOfdays->UseVisualStyleBackColor = true;
			   this->PA_MNumOfdays->Visible = false;
			   this->PA_MNumOfdays->Click += gcnew System::EventHandler(this, &mainPage::PA_MNumOfdays_Click);
			   // 
			   // PA_MPRday
			   // 
			   this->PA_MPRday->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_MPRday->FlatAppearance->BorderSize = 0;
			   this->PA_MPRday->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_MPRday->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_MPRday->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_MPRday->Location = System::Drawing::Point(0, 390);
			   this->PA_MPRday->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_MPRday->Name = L"PA_MPRday";
			   this->PA_MPRday->Size = System::Drawing::Size(216, 78);
			   this->PA_MPRday->TabIndex = 8;
			   this->PA_MPRday->Text = L"Reservation Day";
			   this->PA_MPRday->UseVisualStyleBackColor = true;
			   this->PA_MPRday->Click += gcnew System::EventHandler(this, &mainPage::PA_MPRday_Click);
			   // 
			   // PA_MPRtype
			   // 
			   this->PA_MPRtype->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_MPRtype->FlatAppearance->BorderSize = 0;
			   this->PA_MPRtype->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_MPRtype->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_MPRtype->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_MPRtype->Location = System::Drawing::Point(0, 312);
			   this->PA_MPRtype->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_MPRtype->Name = L"PA_MPRtype";
			   this->PA_MPRtype->Size = System::Drawing::Size(216, 78);
			   this->PA_MPRtype->TabIndex = 7;
			   this->PA_MPRtype->Text = L"Reservation Type";
			   this->PA_MPRtype->UseVisualStyleBackColor = true;
			   this->PA_MPRtype->Click += gcnew System::EventHandler(this, &mainPage::PA_MPRtype_Click);
			   // 
			   // PA_MRH
			   // 
			   this->PA_MRH->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_MRH->FlatAppearance->BorderSize = 0;
			   this->PA_MRH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_MRH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_MRH->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_MRH->Location = System::Drawing::Point(0, 234);
			   this->PA_MRH->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_MRH->Name = L"PA_MRH";
			   this->PA_MRH->Size = System::Drawing::Size(216, 78);
			   this->PA_MRH->TabIndex = 6;
			   this->PA_MRH->Text = L" Hospital Name";
			   this->PA_MRH->UseVisualStyleBackColor = true;
			   this->PA_MRH->Click += gcnew System::EventHandler(this, &mainPage::PA_MRH_Click);
			   // 
			   // PA_MPphNum
			   // 
			   this->PA_MPphNum->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_MPphNum->FlatAppearance->BorderSize = 0;
			   this->PA_MPphNum->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_MPphNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_MPphNum->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_MPphNum->Location = System::Drawing::Point(0, 156);
			   this->PA_MPphNum->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_MPphNum->Name = L"PA_MPphNum";
			   this->PA_MPphNum->Size = System::Drawing::Size(216, 78);
			   this->PA_MPphNum->TabIndex = 5;
			   this->PA_MPphNum->Text = L"Phone Number";
			   this->PA_MPphNum->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_MPphNum->UseVisualStyleBackColor = true;
			   this->PA_MPphNum->Click += gcnew System::EventHandler(this, &mainPage::PA_MPphNum_Click);
			   // 
			   // PA_MPage
			   // 
			   this->PA_MPage->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_MPage->FlatAppearance->BorderSize = 0;
			   this->PA_MPage->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_MPage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_MPage->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_MPage->Location = System::Drawing::Point(0, 78);
			   this->PA_MPage->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_MPage->Name = L"PA_MPage";
			   this->PA_MPage->Size = System::Drawing::Size(216, 78);
			   this->PA_MPage->TabIndex = 4;
			   this->PA_MPage->Text = L"Patient Age";
			   this->PA_MPage->UseVisualStyleBackColor = true;
			   this->PA_MPage->Click += gcnew System::EventHandler(this, &mainPage::PA_MPage_Click);
			   // 
			   // PA_MPName
			   // 
			   this->PA_MPName->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_MPName->FlatAppearance->BorderSize = 0;
			   this->PA_MPName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_MPName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_MPName->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_MPName->Location = System::Drawing::Point(0, 0);
			   this->PA_MPName->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_MPName->Name = L"PA_MPName";
			   this->PA_MPName->Size = System::Drawing::Size(216, 78);
			   this->PA_MPName->TabIndex = 3;
			   this->PA_MPName->Text = L"Patient Name";
			   this->PA_MPName->UseVisualStyleBackColor = true;
			   this->PA_MPName->Click += gcnew System::EventHandler(this, &mainPage::PA_MPName_Click);
			   // 
			   // PA_headerM
			   // 
			   this->PA_headerM->Controls->Add(this->messege);
			   this->PA_headerM->Controls->Add(this->PA_Rlistmodify_com);
			   this->PA_headerM->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_headerM->Location = System::Drawing::Point(0, 0);
			   this->PA_headerM->Name = L"PA_headerM";
			   this->PA_headerM->Size = System::Drawing::Size(766, 87);
			   this->PA_headerM->TabIndex = 1;
			   // 
			   // messege
			   // 
			   this->messege->AutoSize = true;
			   this->messege->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->messege->ForeColor = System::Drawing::Color::Red;
			   this->messege->Location = System::Drawing::Point(367, 12);
			   this->messege->Name = L"messege";
			   this->messege->Size = System::Drawing::Size(266, 58);
			   this->messege->TabIndex = 4;
			   this->messege->Text = L"Select before choose \r\nwhat you wnat to modify";
			   // 
			   // PA_Rlistmodify_com
			   // 
			   this->PA_Rlistmodify_com->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_Rlistmodify_com->FormattingEnabled = true;
			   this->PA_Rlistmodify_com->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			   this->PA_Rlistmodify_com->Location = System::Drawing::Point(26, 23);
			   this->PA_Rlistmodify_com->Name = L"PA_Rlistmodify_com";
			   this->PA_Rlistmodify_com->Size = System::Drawing::Size(231, 34);
			   this->PA_Rlistmodify_com->TabIndex = 0;
			   this->PA_Rlistmodify_com->Text = L"Reservations list";
			   this->PA_Rlistmodify_com->SelectedIndexChanged += gcnew System::EventHandler(this, &mainPage::PA_Rlistmodify_com_SelectedIndexChanged);
			   // 
			   // PA_viewHinfo
			   // 
			   this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_HCLlist);
			   this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_HSplist);
			   this->PA_viewHinfo->Controls->Add(this->PA_text2);
			   this->PA_viewHinfo->Controls->Add(this->PA_text1);
			   this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_Bedprice);
			   this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_surgeryprice);
			   this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_Rprice);
			   this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_bedsAva);
			   this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_rate);
			   this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_Name);
			   this->PA_viewHinfo->Controls->Add(this->PA_viewHinfoHeader);
			   this->PA_viewHinfo->Controls->Add(this->PA_Hinfo_ID);
			   this->PA_viewHinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_viewHinfo->Location = System::Drawing::Point(0, 0);
			   this->PA_viewHinfo->Name = L"PA_viewHinfo";
			   this->PA_viewHinfo->Size = System::Drawing::Size(766, 654);
			   this->PA_viewHinfo->TabIndex = 5;
			   // 
			   // PA_Hinfo_HCLlist
			   // 
			   this->PA_Hinfo_HCLlist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_Hinfo_HCLlist->FormattingEnabled = true;
			   this->PA_Hinfo_HCLlist->ItemHeight = 26;
			   this->PA_Hinfo_HCLlist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Specialties List" });
			   this->PA_Hinfo_HCLlist->Location = System::Drawing::Point(447, 399);
			   this->PA_Hinfo_HCLlist->Name = L"PA_Hinfo_HCLlist";
			   this->PA_Hinfo_HCLlist->Size = System::Drawing::Size(267, 108);
			   this->PA_Hinfo_HCLlist->TabIndex = 18;
			   // 
			   // PA_Hinfo_HSplist
			   // 
			   this->PA_Hinfo_HSplist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.18462F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_Hinfo_HSplist->FormattingEnabled = true;
			   this->PA_Hinfo_HSplist->ItemHeight = 26;
			   this->PA_Hinfo_HSplist->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Clinic List" });
			   this->PA_Hinfo_HSplist->Location = System::Drawing::Point(447, 193);
			   this->PA_Hinfo_HSplist->Name = L"PA_Hinfo_HSplist";
			   this->PA_Hinfo_HSplist->Size = System::Drawing::Size(267, 108);
			   this->PA_Hinfo_HSplist->TabIndex = 17;
			   // 
			   // PA_text2
			   // 
			   this->PA_text2->AutoSize = true;
			   this->PA_text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_text2->Location = System::Drawing::Point(442, 371);
			   this->PA_text2->Name = L"PA_text2";
			   this->PA_text2->Size = System::Drawing::Size(142, 25);
			   this->PA_text2->TabIndex = 16;
			   this->PA_text2->Text = L"Specialties List";
			   this->PA_text2->Visible = false;
			   // 
			   // PA_text1
			   // 
			   this->PA_text1->AutoSize = true;
			   this->PA_text1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.07692F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_text1->Location = System::Drawing::Point(442, 162);
			   this->PA_text1->Name = L"PA_text1";
			   this->PA_text1->Size = System::Drawing::Size(95, 25);
			   this->PA_text1->TabIndex = 15;
			   this->PA_text1->Text = L"Clinic List";
			   this->PA_text1->Visible = false;
			   // 
			   // PA_Hinfo_Bedprice
			   // 
			   this->PA_Hinfo_Bedprice->AutoSize = true;
			   this->PA_Hinfo_Bedprice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_Hinfo_Bedprice->Location = System::Drawing::Point(26, 514);
			   this->PA_Hinfo_Bedprice->Name = L"PA_Hinfo_Bedprice";
			   this->PA_Hinfo_Bedprice->Size = System::Drawing::Size(159, 36);
			   this->PA_Hinfo_Bedprice->TabIndex = 7;
			   this->PA_Hinfo_Bedprice->Text = L"Beds Price";
			   // 
			   // PA_Hinfo_surgeryprice
			   // 
			   this->PA_Hinfo_surgeryprice->AutoSize = true;
			   this->PA_Hinfo_surgeryprice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_Hinfo_surgeryprice->Location = System::Drawing::Point(25, 445);
			   this->PA_Hinfo_surgeryprice->Name = L"PA_Hinfo_surgeryprice";
			   this->PA_Hinfo_surgeryprice->Size = System::Drawing::Size(196, 36);
			   this->PA_Hinfo_surgeryprice->TabIndex = 6;
			   this->PA_Hinfo_surgeryprice->Text = L"Surgery Price";
			   // 
			   // PA_Hinfo_Rprice
			   // 
			   this->PA_Hinfo_Rprice->AutoSize = true;
			   this->PA_Hinfo_Rprice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_Hinfo_Rprice->Location = System::Drawing::Point(25, 376);
			   this->PA_Hinfo_Rprice->Name = L"PA_Hinfo_Rprice";
			   this->PA_Hinfo_Rprice->Size = System::Drawing::Size(224, 36);
			   this->PA_Hinfo_Rprice->TabIndex = 5;
			   this->PA_Hinfo_Rprice->Text = L"Check-UP price";
			   // 
			   // PA_Hinfo_bedsAva
			   // 
			   this->PA_Hinfo_bedsAva->AutoSize = true;
			   this->PA_Hinfo_bedsAva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_Hinfo_bedsAva->Location = System::Drawing::Point(25, 307);
			   this->PA_Hinfo_bedsAva->Name = L"PA_Hinfo_bedsAva";
			   this->PA_Hinfo_bedsAva->Size = System::Drawing::Size(213, 36);
			   this->PA_Hinfo_bedsAva->TabIndex = 4;
			   this->PA_Hinfo_bedsAva->Text = L"Beds Avaliable";
			   // 
			   // PA_Hinfo_rate
			   // 
			   this->PA_Hinfo_rate->AutoSize = true;
			   this->PA_Hinfo_rate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_Hinfo_rate->Location = System::Drawing::Point(25, 238);
			   this->PA_Hinfo_rate->Name = L"PA_Hinfo_rate";
			   this->PA_Hinfo_rate->Size = System::Drawing::Size(193, 36);
			   this->PA_Hinfo_rate->TabIndex = 3;
			   this->PA_Hinfo_rate->Text = L"Hospital Rate";
			   // 
			   // PA_Hinfo_Name
			   // 
			   this->PA_Hinfo_Name->AutoSize = true;
			   this->PA_Hinfo_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_Hinfo_Name->Location = System::Drawing::Point(24, 169);
			   this->PA_Hinfo_Name->Name = L"PA_Hinfo_Name";
			   this->PA_Hinfo_Name->Size = System::Drawing::Size(208, 36);
			   this->PA_Hinfo_Name->TabIndex = 2;
			   this->PA_Hinfo_Name->Text = L"Hospital Name";
			   // 
			   // PA_viewHinfoHeader
			   // 
			   this->PA_viewHinfoHeader->Controls->Add(this->PA_viewHButton);
			   this->PA_viewHinfoHeader->Controls->Add(this->PA_viewHList);
			   this->PA_viewHinfoHeader->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PA_viewHinfoHeader->Location = System::Drawing::Point(0, 0);
			   this->PA_viewHinfoHeader->Name = L"PA_viewHinfoHeader";
			   this->PA_viewHinfoHeader->Size = System::Drawing::Size(766, 84);
			   this->PA_viewHinfoHeader->TabIndex = 1;
			   // 
			   // PA_viewHButton
			   // 
			   this->PA_viewHButton->FlatAppearance->BorderSize = 0;
			   this->PA_viewHButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PA_viewHButton->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.84615F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_viewHButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PA_viewHButton.Image")));
			   this->PA_viewHButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->PA_viewHButton->Location = System::Drawing::Point(399, 23);
			   this->PA_viewHButton->Margin = System::Windows::Forms::Padding(3, 50, 3, 3);
			   this->PA_viewHButton->Name = L"PA_viewHButton";
			   this->PA_viewHButton->Size = System::Drawing::Size(119, 36);
			   this->PA_viewHButton->TabIndex = 5;
			   this->PA_viewHButton->Text = L"View";
			   this->PA_viewHButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->PA_viewHButton->UseVisualStyleBackColor = true;
			   this->PA_viewHButton->Click += gcnew System::EventHandler(this, &mainPage::PA_viewHButton_Click);
			   // 
			   // PA_viewHList
			   // 
			   this->PA_viewHList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.84615F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->PA_viewHList->FormattingEnabled = true;
			   this->PA_viewHList->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Empty" });
			   this->PA_viewHList->Location = System::Drawing::Point(33, 21);
			   this->PA_viewHList->Name = L"PA_viewHList";
			   this->PA_viewHList->Size = System::Drawing::Size(247, 37);
			   this->PA_viewHList->TabIndex = 0;
			   this->PA_viewHList->Text = L"Hospital list";
			   // 
			   // PA_Hinfo_ID
			   // 
			   this->PA_Hinfo_ID->AutoSize = true;
			   this->PA_Hinfo_ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.06154F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_Hinfo_ID->Location = System::Drawing::Point(24, 100);
			   this->PA_Hinfo_ID->Name = L"PA_Hinfo_ID";
			   this->PA_Hinfo_ID->Size = System::Drawing::Size(160, 36);
			   this->PA_Hinfo_ID->TabIndex = 0;
			   this->PA_Hinfo_ID->Text = L"Hospital ID";
			   // 
			   // PA_viewPinfo
			   // 
			   this->PA_viewPinfo->Controls->Add(this->PA_PNreservation);
			   this->PA_viewPinfo->Controls->Add(this->PA_Ptotalpaid);
			   this->PA_viewPinfo->Controls->Add(this->PA_PEmail);
			   this->PA_viewPinfo->Controls->Add(this->PA_PGender);
			   this->PA_viewPinfo->Controls->Add(this->PA_PphoneN);
			   this->PA_viewPinfo->Controls->Add(this->PA_Page);
			   this->PA_viewPinfo->Controls->Add(this->PA_PID);
			   this->PA_viewPinfo->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->PA_viewPinfo->Location = System::Drawing::Point(0, 0);
			   this->PA_viewPinfo->Name = L"PA_viewPinfo";
			   this->PA_viewPinfo->Size = System::Drawing::Size(766, 654);
			   this->PA_viewPinfo->TabIndex = 1;
			   // 
			   // PA_PNreservation
			   // 
			   this->PA_PNreservation->AutoSize = true;
			   this->PA_PNreservation->Font = (gcnew System::Drawing::Font(L"MV Boli", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_PNreservation->Location = System::Drawing::Point(50, 551);
			   this->PA_PNreservation->Name = L"PA_PNreservation";
			   this->PA_PNreservation->Size = System::Drawing::Size(432, 55);
			   this->PA_PNreservation->TabIndex = 6;
			   this->PA_PNreservation->Text = L"Number Of reserved";
			   // 
			   // PA_Ptotalpaid
			   // 
			   this->PA_Ptotalpaid->AutoSize = true;
			   this->PA_Ptotalpaid->Font = (gcnew System::Drawing::Font(L"MV Boli", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_Ptotalpaid->Location = System::Drawing::Point(46, 463);
			   this->PA_Ptotalpaid->Name = L"PA_Ptotalpaid";
			   this->PA_Ptotalpaid->Size = System::Drawing::Size(243, 55);
			   this->PA_Ptotalpaid->TabIndex = 5;
			   this->PA_Ptotalpaid->Text = L"Total price";
			   // 
			   // PA_PEmail
			   // 
			   this->PA_PEmail->AutoSize = true;
			   this->PA_PEmail->Font = (gcnew System::Drawing::Font(L"MV Boli", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_PEmail->Location = System::Drawing::Point(50, 375);
			   this->PA_PEmail->Name = L"PA_PEmail";
			   this->PA_PEmail->Size = System::Drawing::Size(293, 55);
			   this->PA_PEmail->TabIndex = 4;
			   this->PA_PEmail->Text = L"patient email";
			   // 
			   // PA_PGender
			   // 
			   this->PA_PGender->AutoSize = true;
			   this->PA_PGender->Font = (gcnew System::Drawing::Font(L"MV Boli", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_PGender->Location = System::Drawing::Point(50, 287);
			   this->PA_PGender->Name = L"PA_PGender";
			   this->PA_PGender->Size = System::Drawing::Size(319, 55);
			   this->PA_PGender->TabIndex = 3;
			   this->PA_PGender->Text = L"patient gender";
			   // 
			   // PA_PphoneN
			   // 
			   this->PA_PphoneN->AutoSize = true;
			   this->PA_PphoneN->Font = (gcnew System::Drawing::Font(L"MV Boli", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_PphoneN->Location = System::Drawing::Point(50, 199);
			   this->PA_PphoneN->Name = L"PA_PphoneN";
			   this->PA_PphoneN->Size = System::Drawing::Size(476, 55);
			   this->PA_PphoneN->TabIndex = 2;
			   this->PA_PphoneN->Text = L"patient phone number";
			   // 
			   // PA_Page
			   // 
			   this->PA_Page->AutoSize = true;
			   this->PA_Page->Font = (gcnew System::Drawing::Font(L"MV Boli", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_Page->Location = System::Drawing::Point(50, 111);
			   this->PA_Page->Name = L"PA_Page";
			   this->PA_Page->Size = System::Drawing::Size(263, 55);
			   this->PA_Page->TabIndex = 1;
			   this->PA_Page->Text = L"patient Age";
			   // 
			   // PA_PID
			   // 
			   this->PA_PID->AutoSize = true;
			   this->PA_PID->Font = (gcnew System::Drawing::Font(L"MV Boli", 23.81538F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
			   this->PA_PID->Location = System::Drawing::Point(50, 23);
			   this->PA_PID->Name = L"PA_PID";
			   this->PA_PID->Size = System::Drawing::Size(235, 55);
			   this->PA_PID->TabIndex = 0;
			   this->PA_PID->Text = L"patient ID";
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
			   this->label9->Location = System::Drawing::Point(412, 338);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(354, 51);
			   this->label9->TabIndex = 0;
			   this->label9->Text = L"start patient page";
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
			   this->PA_addORdelReserv->Location = System::Drawing::Point(0, 367);
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
			   this->PA_MOReserv->Location = System::Drawing::Point(0, 305);
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
			   this->PA_ViewReserveList->Location = System::Drawing::Point(0, 243);
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
			   this->PA_view_hosInfo->Location = System::Drawing::Point(0, 181);
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
			   this->PA_info_pn->Size = System::Drawing::Size(264, 181);
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
			   this->Controls->Add(this->PA_conpage);
			   this->Controls->Add(this->AD_conpage);
			   this->Controls->Add(this->StartUP_page);
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"mainPage";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"CareConnect Hospitals Suite";
			   this->Load += gcnew System::EventHandler(this, &mainPage::mainPage_Load);
			   this->StartUP_page->ResumeLayout(false);
			   this->login_pn->ResumeLayout(false);
			   this->login_pn->PerformLayout();
			   this->regis_pn->ResumeLayout(false);
			   this->regis_pn->PerformLayout();
			   this->AD_conpage->ResumeLayout(false);
			   this->AD_pages->ResumeLayout(false);
			   this->AD_editAinfo->ResumeLayout(false);
			   this->AD_editRemain->ResumeLayout(false);
			   this->AD_editRemain->PerformLayout();
			   this->AD_edit_wiating->ResumeLayout(false);
			   this->AD_edit_wiating->PerformLayout();
			   this->AD_editpass->ResumeLayout(false);
			   this->AD_editpass->PerformLayout();
			   this->AD_GofCHEditAinfo->ResumeLayout(false);
			   this->AD_view_Pinfo->ResumeLayout(false);
			   this->AD_view_Pinfo->PerformLayout();
			   this->AD_viewPlist_header->ResumeLayout(false);
			   this->AD_modify_Hinfo->ResumeLayout(false);
			   this->AD_Modifyinput->ResumeLayout(false);
			   this->AD_Modifyinput->PerformLayout();
			   this->AD_modifyHSC_layout->ResumeLayout(false);
			   this->AD_DELHSC_lay->ResumeLayout(false);
			   this->AD_DELHSC_lay->PerformLayout();
			   this->AD_ADDHSC_lay->ResumeLayout(false);
			   this->AD_ADDHSC_lay->PerformLayout();
			   this->AD_groupchoice->ResumeLayout(false);
			   this->AD_headerModify->ResumeLayout(false);
			   this->AD_edit_Hlist->ResumeLayout(false);
			   this->AD_addHlayout->ResumeLayout(false);
			   this->AD_addHlayout->PerformLayout();
			   this->AD_deleteHlayout->ResumeLayout(false);
			   this->AD_deleteHlayout->PerformLayout();
			   this->AD_waitingP->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->AD_header_editH->ResumeLayout(false);
			   this->AD_view_Hinfo->ResumeLayout(false);
			   this->AD_view_Hinfo->PerformLayout();
			   this->AD_viewHinfoHeader->ResumeLayout(false);
			   this->AD_startWindow->ResumeLayout(false);
			   this->AD_startWindow->PerformLayout();
			   this->AD_viewAinfo->ResumeLayout(false);
			   this->AD_viewAinfo->PerformLayout();
			   this->side_AD_bar_pn->ResumeLayout(false);
			   this->AD_info_pn->ResumeLayout(false);
			   this->AD_info_pn->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AD_pic))->EndInit();
			   this->PA_conpage->ResumeLayout(false);
			   this->PA_pages->ResumeLayout(false);
			   this->PA_editReserv->ResumeLayout(false);
			   this->PA_editReserv->PerformLayout();
			   this->PA_addRlayout->ResumeLayout(false);
			   this->PA_addRlayout->PerformLayout();
			   this->PA_Check1->ResumeLayout(false);
			   this->PA_Check1->PerformLayout();
			   this->PA_Check2->ResumeLayout(false);
			   this->PA_Check2->PerformLayout();
			   this->PA_delRlayout->ResumeLayout(false);
			   this->PA_delRlayout->PerformLayout();
			   this->PA_waitingeditRlist->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->PA_header_editRlist->ResumeLayout(false);
			   this->PA_reservlist->ResumeLayout(false);
			   this->PA_reservlist->PerformLayout();
			   this->PA_reservlist_header->ResumeLayout(false);
			   this->PA_editPinfo->ResumeLayout(false);
			   this->PA_editRemain->ResumeLayout(false);
			   this->PA_editRemain->PerformLayout();
			   this->PA_edit_waiting->ResumeLayout(false);
			   this->PA_edit_waiting->PerformLayout();
			   this->PA_editpass->ResumeLayout(false);
			   this->PA_editpass->PerformLayout();
			   this->PA_GofCHEditPinfo->ResumeLayout(false);
			   this->PA_ModifyReserv->ResumeLayout(false);
			   this->PA_editNAPhnumlayout->ResumeLayout(false);
			   this->PA_editNAPhnumlayout->PerformLayout();
			   this->PA_modifyHRTRDsLayout->ResumeLayout(false);
			   this->PA_modifyHRTRDsLayout->PerformLayout();
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   this->PA_groupCmodify->ResumeLayout(false);
			   this->PA_headerM->ResumeLayout(false);
			   this->PA_headerM->PerformLayout();
			   this->PA_viewHinfo->ResumeLayout(false);
			   this->PA_viewHinfo->PerformLayout();
			   this->PA_viewHinfoHeader->ResumeLayout(false);
			   this->PA_viewPinfo->ResumeLayout(false);
			   this->PA_viewPinfo->PerformLayout();
			   this->PA_startwindow->ResumeLayout(false);
			   this->PA_startwindow->PerformLayout();
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
	 private: System::Void SignIIN_but_Click(System::Object^ sender, System::EventArgs^ e) {

		  String^ name_user;
		  msclr::interop::marshal_context context;
		  temp.username = context.marshal_as<string>(userBox->Text);
		  temp.password = context.marshal_as<string>(passBox->Text);
		  if (f.loginAsAdmin(user, temp)) {
			   name_user = gcnew String(user[Lindex].name.c_str());

			   AD_conpage->BringToFront();
			   AD_startWindow->BringToFront();
			   FName_AD_lab->Text = name_user;
			   warning_massage->Text = "";
			   passBox->Text = "";
			   userBox->Text = "";
		  }
		  else if (f.loginAsPatient(user, temp)) {
			   name_user = gcnew String(user[Lindex].name.c_str());
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
		  Hindex = -1;
		  Lindex = -1;
		  Rindex = -1;
	 }
	 private: System::Void regis_backTologin_Click(System::Object^ sender, System::EventArgs^ e) {
		  login_pn->BringToFront();
	 }
	 private: System::Void PA_logout_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  StartUP_page->BringToFront();
		  login_pn->BringToFront();
		  PA_viewRlist->Text= "Reservation list";
		  PA_viewR_PName->Text = "Patient Name";
		  PA_viewR_PAge->Text = "Patient Age";
		  PA_viewR_bedPrice->Text = "Bed Price";
		  PA_viewR_HReserved->Text = "Hospital Name";
		  PA_viewR_RoomID->Text = "Room ID";
		  PA_viewR_phoneN->Text = "Phone Number";
		  PA_viewR_Day->Text = "Reservation Day";
		  PA_viewR_SurgeryPrice->Text = "Surgery Price";
		  PA_viewR_HSpCl->Text = "HSpecialty Or Clinic";
		  PA_viewR_ChandTPrice->Text = "Check-UP/total price";

		  Hindex = -1;
		  Lindex = -1;
		  Rindex = -1;
	 }
	 private: System::Void AD_addORdel_hos_but_Click(System::Object^ sender, System::EventArgs^ e) {
		 
		  AD_edit_Hlist->BringToFront();
		  AD_waitingP->BringToFront();
	 }
	 private: System::Void AD_modify_hos_but_Click(System::Object^ sender, System::EventArgs^ e) {
		AD_modify_Hinfo->BringToFront();
		AD_Hlist_combox->Items->Clear();
		  String^ hospitalName;
		  for (int i = 0; i < hospitalCount; i++) {
			   hospitalName=gcnew String(hospital[i].HospitalName.c_str());
			   AD_Hlist_combox->Items->Add(hospitalName);
		  }
		 
		//  modifyHospital();
	 }
	 private: System::Void AD_dispaly_hos_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  AD_view_Hinfo->BringToFront();
		  AD_viewHList->Items->Clear();
		 
		  string checkname;
		  if (AD_viewHList->Text != "Hospital list") {
			    checkname = msclr::interop::marshal_as<std::string>(AD_viewHList->Text);
		  }
		  String^ hospitalName;
		  for (int i = 0; i < hospitalCount; i++) {
			   hospitalName = gcnew String(hospital[i].HospitalName.c_str());
			   AD_viewHList->Items->Add(hospitalName);
					
		  }
		  for (int i = 0; i < hospitalCount; i++)
		  {
			   if (checkname != hospital[i].HospitalName)
					exist = false;
			   else { exist = true; break; }
		  }
			  
		  if (AD_viewHList->Text != "Hospital list")
		  {
			   if (exist) {
					Exist->Visible = true;
					Exist->Text = "exist";
			   }
			   else {
					Exist->Visible = true;
					Exist->Text = "was deleted";
			   }
		  }

	 }
	 private: System::Void AD_dispatient_hos_but_Click(System::Object^ sender, System::EventArgs^ e) {
		  AD_view_Pinfo->BringToFront();
		  AD_viewPlist->Items->Clear();
		  String^ patientName;
		  for (int i = 0; i < userCount; i++) {
			  if(user[i].userType=="Patient") {
					patientName = gcnew String(user[i].username.c_str());
					AD_viewPlist->Items->Add(patientName);
			   }
		  }
		 
	 }
     private: System::Void view_AInfo_Click(System::Object^ sender, System::EventArgs^ e) {
         AD_viewAinfo->BringToFront();
		 personalinfo();
     }
	 private: System::Void edit_AInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		  AD_editAinfo->BringToFront();
		  AD_edit_wiating->BringToFront();
	 }
	 private: System::Void PA_view_hosInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_viewHinfo->BringToFront();
		  PA_viewHList->Items->Clear();
		  String^ hospitalName;
		  for (int i = 0; i < hospitalCount; i++) {
			   hospitalName = gcnew String(hospital[i].HospitalName.c_str());
			   PA_viewHList->Items->Add(hospitalName);

		  }
	 }
	 private: System::Void PA_ViewReserveList_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_reservlist->BringToFront();
		 if(user[Lindex].reserCount!=0) {
			   PA_viewRlist->Items->Clear();
			   String^ RID ="";
			   for (int i = 0; i < user[Lindex].reserCount; i++) {
				RID = "";
				RID += gcnew INT( user[Lindex].reservation[i].ReservtionID);
				PA_viewRlist->Items->Add(RID);

			   }
		  }
	 }
	 private: System::Void PA_MOReserv_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_ModifyReserv->BringToFront();
		  String^ RID;
	if(user[Lindex].reserCount>0) {
			   PA_Rlistmodify_com->Items->Clear();
			   for (int i = 0; i < user[Lindex].reserCount; i++) {
					RID = "";
					RID += gcnew INT(user[Lindex].reservation[i].ReservtionID);
					PA_Rlistmodify_com->Items->Add(RID);
			   }
		  }

		 
	 }
	 private: System::Void PA_addORdelReserv_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_editReserv->BringToFront();
		  PA_waitingeditRlist->BringToFront();
		  
	 }
	 private: System::Void edit_PInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_editPinfo->BringToFront();
		  PA_edit_waiting->BringToFront();
	 }
	 private: System::Void view_PInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		  PA_viewPinfo->BringToFront();
		  personalinfo();

	 }
private: System::Void AD_IDselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Hospital ID";
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = false;
	AD_addHSC->Visible = false;
	
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
	//AD_TBforAddHSC
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
	AD_HSCorder->Text = "Enter Specialty Name";
	AD_AskHSC->Text="Choose Specialty";
	AD_ModifyHSClist->Visible = true;
	AD_modifyHSC_layout->Visible = false;
	AD_deleteHSC->Visible = true;
	AD_addHSC->Visible = true; 
	
	
}
private: System::Void AD_HCselected_Click(System::Object^ sender, System::EventArgs^ e) {
	AD_Modifyinput->Visible = true;
	AD_nameOfinput->Text = "Hospital Clinics";
	AD_ModifyHSClist->Text = "Clinics List";
	AD_HSClist->Text = "Clinics List";
	AD_HSCorder->Text = "Enter Clinics Name";
	AD_AskHSC->Text = "Choose Clinic";
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
		
}
private: System::Void AD_deleteHSC_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_modifyHSC_layout->Visible = true;
	 AD_DELHSC_lay->BringToFront();
	 AD_HSCorder->Visible = false;
	 AD_HSClist->Visible = true;
	 AD_selectHSC->Visible = true;
	 if (AD_Hlist_combox->Text != "Hospital list ") {
		  searchHindex(msclr::interop::marshal_as<string>(AD_Hlist_combox->Text));
		  if (AD_AskHSC->Text == "Choose Clinic") {
			   AD_HSClist->Items->Clear();
			   for (int i = 0; i < hospital[Hindex].clinicsCount; i++) {
					AD_HSClist->Items->Add(gcnew String(hospital[Hindex].HospitalClinics[i].c_str()));
			   }

		  }
		  if (AD_AskHSC->Text == "Choose Specialty") {
			   AD_HSClist->Items->Clear();
			   for (int i = 0; i < hospital[Hindex].specialtiesCount; i++)
			   {
					AD_HSClist->Items->Add(gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str()));
			   }

		  }

	 }
}
private: System::Void AD_addHSC_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_modifyHSC_layout->Visible = true;
	 AD_HSCorder->Visible = true;
	 AD_ADDHSC_lay->BringToFront();
	// AD_stateHSC->Visible = true;
	// AD_stateHSC->Text="";
	 AD_HSClist->Visible = false;
	 AD_selectHSC->Visible = false;
	 AD_confirmAdd->Visible = true;
}
private: System::Void AD_addH_but_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_addHlayout->BringToFront();
}
private: System::Void AD_deleteH_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_deleteHlayout->BringToFront();
	 AD_messegeState->Text = "";
	 AD_DELhospitalID->Text = "Hospital ID";
	 AD_DELhospitalRate->Text = "Hospital Rate";
	 AD_HListDEL->Items->Clear();
	 String^ hospitalName;
	 for (int i = 0; i < hospitalCount; i++) {
		  hospitalName= gcnew String(hospital[i].HospitalName.c_str());
		  AD_HListDEL->Items->Add(hospitalName);
	}
}
private: System::Void PA_addRlayout_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_addRlayout->BringToFront();
	 PA_DayenterH_COM->Items->Clear();
	 PA_selectHforR_COM->Items->Clear();
	 PA_warningM->Text = "";
	 String^ day,^ Hospital,^addSP;
	 for (int i = 0; i < daysInWeek;i++) {
		  day=gcnew String(ReservationDays[i].c_str());
		  Hospital = gcnew String(hospital[i].HospitalName.c_str());
		  PA_DayenterH_COM->Items->Add(day);
		  if(i<hospitalCount)
		  PA_selectHforR_COM->Items->Add(Hospital);
	 }

	 if (PA_RtypeCheck_RB1->Checked == true) {
		
		  PA_RSClist_lab->Text="Specialties List";
		  PA_RSClist_COM->Text="select Specialty";
		  PA_PNumOfDays_lab->Text = "Num Of days";
		  PA_PNumOfDays_TB->Visible = true;
		
	 }
	 else {
		  PA_RSClist_lab->Text = "Clinics List";
		  PA_RSClist_COM->Text = "select Clinic";
		  PA_PNumOfDays_lab->Text = "";
		  PA_PNumOfDays_TB->Visible=false;
	 }
}
private: System::Void PA_delRlist_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_delRlayout->BringToFront(); 
	 PA_delRlist_COM->Items->Clear();
	 String^ RID;
	 for (int i = 0; i < user[Lindex].reserCount; i++) {
		  RID = "";
		  RID += gcnew INT(user[Lindex].reservation[i].ReservtionID);
		  PA_delRlist_COM->Items->Add(RID);
	 }
	 PA_delRlist_state->Text = "";
}
private: System::Void PA_RtypeCheck_RB1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_RtypeCheck_RB1->Checked == true) {
		  PA_PNumOfDays_lab->Text = "Num Of days";
		  PA_PNumOfDays_TB->Visible = true;

	 }
	 else {
		  PA_PNumOfDays_lab->Text = "";
		  PA_PNumOfDays_TB->Visible = false;

	 }
}
private: System::Void PA_RtypeCheck_RB2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_RtypeCheck_RB2->Checked == true) {
		  PA_RSClist_lab->Text = "Clinics List";
		  PA_RSClist_COM->Text = "select Clinic";
		  PA_selectHforR_COM->Text = "None";		
	 }
	 else {
		  PA_RSClist_lab->Text = "Specialties List";
		  PA_RSClist_COM->Text = "select Specialty";
		  PA_selectHforR_COM->Text = "None";
	 }
}
private: System::Void PA_MPName_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = true;
	 PA_modifyHRTRDsLayout->Visible = false;
	 PA_modifyRord_lab->Text = "New Full Name";
	
	
}
private: System::Void PA_MPage_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = true;
	 PA_modifyHRTRDsLayout->Visible = false;
	 PA_modifyRord_lab->Text="New Age";
	
}
private: System::Void PA_MPphNum_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = true;
	 PA_modifyHRTRDsLayout->Visible = false;
	 PA_modifyRord_lab->Text="New Phone Number";
}
private: System::Void PA_MNumOfdays_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = true;
	 PA_modifyHRTRDsLayout->Visible = false;
	 PA_modifyRord_lab->Text="New Number of days";
}
private: System::Void PA_MRH_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = false;
	 PA_modifyHRTRDsLayout->Visible = true;
	 PA_OrderOflist->Text = "Select new hospital";
	 panel1->Visible = false;
	 PA_modifyRord_lab->Text = "None";

}
private: System::Void PA_MPRtype_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = false;
	 PA_modifyHRTRDsLayout->Visible = true;
	 PA_OrderOflist->Text = "Select new item";
	 panel1->Visible = true;
	 PA_modifyRord_lab->Text = "None";

	 
		  
}
private: System::Void PA_MPRday_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editNAPhnumlayout->Visible = false;
	 PA_modifyHRTRDsLayout->Visible = true;
	 PA_OrderOflist->Text = "Select new Days";
	 panel1->Visible = false;
	 PA_modifyRord_lab->Text = "None";

}
private: System::Void AD_editName_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_editRemain->BringToFront();
	 AD_editRemain_lab->Text = "New Full Name";
}
private: System::Void AD_editAge_Click(System::Object^ sender, System::EventArgs^ e) {
	 	 AD_editRemain->BringToFront();
		 AD_editRemain_lab->Text = "New Age";
}
private: System::Void AD_editusername_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_editRemain->BringToFront();
	 AD_editRemain_lab->Text = "New Username";
}
private: System::Void AD_editPhNum_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_editRemain->BringToFront();
	 AD_editRemain_lab->Text = "New Phone Number";
}
private: System::Void AD_editpass_button_Click(System::Object^ sender, System::EventArgs^ e) {
	  AD_editpass->BringToFront();
}
private: System::Void PA_editName_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editRemain->BringToFront();
	 PA_editRemain_lab->Text="New Full Name";
}
private: System::Void PA_editAge_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editRemain->BringToFront();
	 PA_editRemain_lab->Text ="New Age";

}
private: System::Void PA_editusername_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editRemain->BringToFront();
	 PA_editRemain_lab->Text = "New Username";
}
private: System::Void PA_editPhNum_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editRemain->BringToFront();
	 PA_editRemain_lab->Text = "New Phone Number";

}
private: System::Void PA_editpass_but_Click(System::Object^ sender, System::EventArgs^ e) {
	 PA_editpass->BringToFront();
}
private: System::Void AD_viewHbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	 
	 string indexname = context.marshal_as<string>(AD_viewHList->Text);
	 if (AD_viewHList->Text != "Hospital list")
	 {
	AD_text1->Visible = true;
	 AD_text2->Visible = true;
		  searchHindex(indexname);
		  displayHinfo();
	 }

}


private: System::Void PA_viewHButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	 string indexname = context.marshal_as<string>(PA_viewHList->Text);
	 if (PA_viewHList->Text != "Hospital list")
	 {
	 PA_text1->Visible = true;
	 PA_text2->Visible = true;
		  searchHindex(indexname);
		  displayHinfo();
	 }
}
private: System::Void AD_viewPButton_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (AD_viewPlist->Text != "Patient list") {
		  string patientindex = context.marshal_as<string>(AD_viewPlist->Text);
		  searchPindex(patientindex);
		  displayPinfo();
	 }
}
private: System::Void AD_HListDEL_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	 AD_messegeState->Text = "";
	 searchHindex(context.marshal_as<string>(AD_HListDEL->Text));
	 if (AD_HListDEL->Text!="Hospital List") {
		  AD_DELhospitalID->Text = "ID: " + gcnew INT(hospital[Hindex].HospitalID);
		  AD_DELhospitalRate->Text = "Rate: " + gcnew FLOAT(hospital[Hindex].HospitalRate);
	 }
}
private: System::Void AD_selectHD_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (AD_HListDEL->Text != "Hospital List") {
		  if (checkBox1->Checked == true) {
			   string found = context.marshal_as<string>(AD_HListDEL->Text);
			   f.DeleteHospital(hospital, found);
			   AD_messegeState->Text = "Hospital Deleted";
			   AD_HListDEL->Items->Clear();
			   String^ hospitalName;
			   for (int i = 0; i < hospitalCount; i++) {
					hospitalName = gcnew String(hospital[i].HospitalName.c_str());
					AD_HListDEL->Items->Add(hospitalName);
			   }
			   AD_HListDEL->Text = "Hospital List";
			   AD_DELhospitalID->Text = "Hospital ID";
			   AD_DELhospitalRate->Text = "Hospital Rate";
		  }
	 }
	 else {
		  AD_messegeState->Text = "Please choose from the box";
	 }

}
private: System::Void AD_addH_Click(System::Object^ sender, System::EventArgs^ e) {
	 AddHospital(hospital);
	
}
private: System::Void AD_addH_Leave(System::Object^ sender, System::EventArgs^ e) {
	 AD_addcom->Text = "";
}
private: System::Void CloseTab1_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_modifyHSC_layout->Visible = false;
}
private: System::Void CloseTab2_Click(System::Object^ sender, System::EventArgs^ e) {
	 AD_modifyHSC_layout->Visible = false;
}
private: System::Void AD_confirmedit_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (AD_Hlist_combox->Text != "Hospital list ") {
		  searchHindex(msclr::interop::marshal_as<string>(AD_Hlist_combox->Text));
		  modifyHospital();
	 }

}
private: System::Void AD_confirmAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (AD_Hlist_combox->Text != "Hospital list ")
	 modifyHSC();
}
private: System::Void AD_confirmAdd_Leave(System::Object^ sender, System::EventArgs^ e) {
	 AD_TBforAddHSC->Text = "";
	 AD_stateHSC2->Text =  "";
}
private: System::Void AD_selectHSC_Click(System::Object^ sender, System::EventArgs^ e) {
	
	 if (AD_AskHSC->Text == "Choose Specialty") {
			   searchSPindex(msclr::interop::marshal_as<string>(AD_HSClist->Text));
		  String^ foundSp = gcnew String(hospital[Hindex].HospitalSpecialties[SPindex].c_str());

		  if (AD_HSClist->Text != "Specialties List" && AD_HSClist->Text == foundSp){
		  if (SPindex != hospital[Hindex].specialtiesCount - 1)
			   swap(hospital[Hindex].HospitalSpecialties[hospital[Hindex].specialtiesCount - 1], hospital[Hindex].HospitalSpecialties[SPindex]);
		  hospital[Hindex].specialtiesCount--;
				  AD_stateHSC1->Text="Specialty Deleted";
	 }
			 else {
				  AD_stateHSC1->Text="this Specialty is not exist";
			 }
		  }
		else if(AD_AskHSC->Text == "Choose Clinic")  {
					searchCLindex(msclr::interop::marshal_as<string>(AD_HSClist->Text));
		  String^ foundCl = gcnew String(hospital[Hindex].HospitalClinics[CLindex].c_str());
			
			   if (AD_HSClist->Text != "Clincis List" && AD_HSClist->Text == foundCl) {
					if (CLindex!=hospital[Hindex].clinicsCount -1)
					swap(hospital[Hindex].HospitalClinics[hospital[Hindex].clinicsCount - 1], hospital[Hindex].HospitalClinics[CLindex]);
					hospital[Hindex].clinicsCount--;
				  AD_stateHSC1->Text="Clinic Deleted";
			   }
		else {
			 AD_stateHSC1->Text = "this Clinic is not exist";
		}
		  }

	 
}
private: System::Void AD_Hlist_combox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	 AD_ModifyHSClist->Items->Clear();
	 searchHindex(msclr::interop::marshal_as<string>(AD_Hlist_combox->Text));
	 for (int i = 0; i < hospital[Hindex].clinicsCount; i++) {
		  AD_ModifyHSClist->Items->Add(gcnew String(hospital[Hindex].HospitalClinics[i].c_str()));
	 }
	 searchHindex(msclr::interop::marshal_as<string>(AD_Hlist_combox->Text));
	 AD_ModifyHSClist->Items->Clear();
	 for (int i = 0; i < hospital[Hindex].specialtiesCount; i++)
	 {
		  AD_ModifyHSClist->Items->Add(gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str()));
	 }

}
private: System::Void PA_viewRButton_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_viewRlist->Text != "") {
		  int IDIndex= stoi(context.marshal_as<string>(PA_viewRlist->Text));
		  searchRindex(IDIndex);
		  DisplayRInfo();
	 }
}
private: System::Void PA_askwhoreserv_RB2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_askwhoreserv_RB2->Checked == true) {
		  PA_PAord_TB->Text = "";
		  PA_PphNord_TB->Text = "";
		  PA_PNord_TB->Text = "";
	 }
	 else {
		  PA_PAord_TB->Text += gcnew INT(user[Lindex].age);
		  PA_PphNord_TB->Text = gcnew String(user[Lindex].phonenumber.c_str());
		  PA_PNord_TB->Text= gcnew String(user[Lindex].name.c_str());

	 }
}
private: System::Void PA_askwhoreserv_RB1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_askwhoreserv_RB1->Checked == true) {
		  PA_PAord_TB->Text = gcnew String(to_string(user[Lindex].age).c_str());
		  PA_PphNord_TB->Text = gcnew String(user[Lindex].phonenumber.c_str());
		  PA_PNord_TB->Text = gcnew String(user[Lindex].name.c_str());
	 }
	 else {
		  PA_PAord_TB->Text = "";
		  PA_PphNord_TB->Text = "";
		  PA_PNord_TB->Text = "";

	 }
}
private: System::Void PA_selectHforR_COM_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	 searchHindex(context.marshal_as<string>(PA_selectHforR_COM->Text));
	 String^ addSP;
		  if (PA_RSClist_COM->Text != "Empty") {
			   PA_RSClist_COM->Items->Clear();
		  for (int i = 0; i < hospital[Hindex].specialtiesCount; i++) {
			   addSP = gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str());
			   PA_RSClist_COM->Items->Add(addSP);
		  }
	 }
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	 if ((PA_RSClist_COM->Text != "select Specialty"|| PA_RSClist_COM->Text != "select Clinic") && PA_selectHforR_COM->Text != "None" && PA_DayenterH_COM->Text != "None") {
		  makeReservation();
		
	 }
	 else {
		  PA_warningM->Text = "Please fill all the fields";
	 }
}
private: System::Void button1_Leave(System::Object^ sender, System::EventArgs^ e) {
	 PA_warningM->Text = "";

}
private: System::Void PA_delRlist_but_Leave(System::Object^ sender, System::EventArgs^ e) {
	 	 PA_delRlist_state->Text = "";
		 PA_delRlist_COM->Text = "Reservation list";
		 PA_text3->Text = "Patient Name";
		 PA_text4->Text = "Hospital Name";
}
private: System::Void PA_delRlist_but_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_delRlist_COM->Text != "Reservation list") {
		  searchRindex(stoi(context.marshal_as<string>(PA_delRlist_COM->Text)));
		  if (Rindex != -1) {
			  f.cancelreservation(user,hospital,Lindex);
			   PA_delRlist_state->Text = "Reservation Deleted";
			   PA_delRlist_COM->Items->Clear();
			   String^ RID;
			   for (int i = 0; i < user[Lindex].reserCount; i++) {
					RID = "";
					RID += gcnew INT(user[Lindex].reservation[i].ReservtionID);
					PA_delRlist_COM->Items->Add(RID);
			   }
			   PA_delRlist_COM->Text = "Reservation list";
			   PA_text3->Text = "Patient Name";
			   PA_text4->Text = "Hospital Name";
		  }
		  else {
			   PA_delRlist_state->Text = "Reservation not found";
		  }
	 }
	 else {
		  PA_delRlist_state->Text = "Please choose from the box";
	 }
}
private: System::Void PA_reservlist_Leave(System::Object^ sender, System::EventArgs^ e) {
	 PA_viewRlist->Text = "Reservation list";
	 PA_viewR_PName->Text = "Patient Name";
	 PA_viewR_PAge->Text = "Patient Age";
	 PA_viewR_bedPrice->Text = "Bed Price";
	 PA_viewR_HReserved->Text = "Hospital Name";
	 PA_viewR_RoomID->Text = "Room ID";
	 PA_viewR_phoneN->Text = "Phone Number";
	 PA_viewR_Day->Text = "Reservation Day";
	 PA_viewR_SurgeryPrice->Text = "Surgery Price";
	 PA_viewR_HSpCl->Text = "HSpecialty Or Clinic";
	 PA_viewR_ChandTPrice->Text = "Check-UP/total price";
}
private: System::Void PA_delRlist_COM_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	 int IDIndex = stoi(context.marshal_as<string>(PA_delRlist_COM->Text));
	 searchRindex(IDIndex);
	 PA_text3->Text= "Patient Name: " + gcnew String(user[Lindex].reservation[Rindex].PName.c_str());
	 PA_text4->Text= "Hospital Name: " + gcnew String(user[Lindex].reservation[Rindex].hospital.HospitalName.c_str());
}
private: System::Void PA_editRbutton_Leave(System::Object^ sender, System::EventArgs^ e) {
	if(PA_modifyRord_TB->Text!=""){
		  PA_Rlistmodify_com->Text = "Reservation list";
		  PA_modifyRord_TB->Text = "";

	 }
}
private: System::Void PA_editRbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	 if(PA_Rlistmodify_com->Text!="Reservation list" && PA_modifyRord_TB->Text!="") {
		  searchRindex(stoi(context.marshal_as<string>(PA_Rlistmodify_com->Text)));
		  modifyReservation();
		  
	 }
}
private: System::Void PA_Rlistmodify_com_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if(PA_Rlistmodify_com->Text!="Reservation list") {
		  searchRindex(stoi(context.marshal_as<string>(PA_Rlistmodify_com->Text)));
		  String ^add;
		  if (user[Lindex].reservation[Rindex].ReservationType == "Surgery") {
			   radioButton2->Checked=true;
			   PA_listOfHRtypeRdays->Items->Clear();
			   PA_OrderOflist->Text="Select new Clinic";
			   PA_listOfHRtypeRdays->Text = "Clinics list";
			   for (int i = 0; i < user[Lindex].reservation[Rindex].hospital.clinicsCount; i++) {
			   					add = gcnew String(user[Lindex].reservation[Rindex].hospital.HospitalClinics[i].c_str());
								PA_listOfHRtypeRdays->Items->Add(add);			   
			   }

					PA_Rnumbofdays->Visible = false;
					PA_numofdays->Visible = false;

		  }
		  else {
			    
			   radioButton1->Checked = true;
			   PA_listOfHRtypeRdays->Items->Clear();
			   PA_OrderOflist->Text = "Select new Specialty";
			   PA_listOfHRtypeRdays->Text = "Specialties list";
			   for (int i = 0; i < user[Lindex].reservation[Rindex].hospital.specialtiesCount; i++) {
					add = gcnew String(user[Lindex].reservation[Rindex].hospital.HospitalClinics[i].c_str());
					PA_listOfHRtypeRdays->Items->Add(add);
					PA_numofdays->Visible = true;
					PA_Rnumbofdays->Visible = true;
			   }
		  }

	 }
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	 if (user[Lindex].reservation[Rindex].ReservationType == "Surgery" && radioButton1->Checked == true) {
		  PA_StateOflist->Text="this servation already Surgery";
		  radioButton2->Checked = true;
		  
	 }
	 else if (user[Lindex].reservation[Rindex].ReservationType == "Check-up" && radioButton2->Checked == true) {
		  PA_StateOflist->Text="this servation already Check-UP";
		  radioButton1->Checked = true;
	 }
}
private: System::Void PA_selectHforR_COM_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		  String^ add;
	 if (PA_RtypeCheck_RB2->Checked==true) {
		  PA_RSClist_COM->Items->Clear();
		  for (int i = 0; i < hospital[Hindex].clinicsCount; i++) {
			   add = gcnew String(hospital[Hindex].HospitalClinics[i].c_str());
			   PA_RSClist_COM->Items->Add(add);
		  }
	 }
	 else {
		  PA_RSClist_COM->Items->Clear();
		  for (int i = 0; i < hospital[Hindex].specialtiesCount; i++) {
			   add = gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str());
			   PA_RSClist_COM->Items->Add(add);
		  }

	 }
}
private: System::Void PA_Rlistmodify_but_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (PA_Rlistmodify_com->Text != "Reservation list" && (PA_listOfHRtypeRdays->Text != "Clinic list"|| PA_listOfHRtypeRdays->Text != "Specialty list")) {
		  searchRindex(stoi(context.marshal_as<string>(PA_Rlistmodify_com->Text)));
		  if(radioButton1->Checked==true)
			   user[Lindex].reservation[Rindex].ReservationType = "Surgery";
		  else
			   user[Lindex].reservation[Rindex].ReservationType = "Check-up";
		  modifyReservation();

	 }
}
private: System::Void PA_Rlistmodify_but_Leave(System::Object^ sender, System::EventArgs^ e) {
	 PA_StateOflist->Text = "";
}
};
}