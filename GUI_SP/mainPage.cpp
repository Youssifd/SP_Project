#include "mainPage.h"
using namespace System;
using namespace System::Windows::Forms;

void main()
{
	 f.DefinitonOfVariable(hospital);
	 f.DefinitonOfVariable(user, hospital);
	 userID += userCount;
	 Application::EnableVisualStyles();
	 Application::SetCompatibleTextRenderingDefault(false);
	 GUISP::mainPage form;
	 Application::Run(% form);
}
void GUISP::mainPage::personalinfo() {
	 String^ ID = gcnew String(to_string(user[Uindex].id).c_str());
	 String^ Age = gcnew String(to_string(user[Uindex].age).c_str());
	 String^ phonenumber = gcnew String(user[Uindex].phonenumber.c_str());
	 String^ gender = gcnew String(user[Uindex].gender.c_str());
	 String^ email = gcnew String(user[Uindex].email.c_str());
	 String^ NumOfreserv = gcnew String(to_string(user[Uindex].reserCount).c_str());
	 String^ totalpaid = gcnew String(to_string(user[Uindex].totalpaid).c_str());
	 if (temp.userType == "Admin") {
	 AD_AID->Text = "ID: " + ID;
	 AD_Aage->Text = "Age: " + Age;
	 AD_AphoneN->Text = "Phone Number: " + phonenumber;
	 AD_AGender->Text = "Gender: " + gender;
	 AD_AEmail->Text = "Email: " + email;
	 }
	 else  {
		  PA_PID->Text = "ID: " + ID;
		  PA_Page->Text = "Age: " + Age;
		  PA_PphoneN->Text = "Phone Number: " + phonenumber;
		  PA_PGender->Text = "Gender: " + gender;
		  PA_PEmail->Text = "Email: " + email;
		  PA_PNreservation->Text = "Number of Reservations: " + NumOfreserv;
		  PA_Ptotalpaid->Text = "Total Paid: " + totalpaid;
	 }
}