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
	 String^ ID = gcnew String(to_string(temp.id).c_str());
	 String^ Age = gcnew String(to_string(temp.age).c_str());
	 String^ phonenumber = gcnew String(temp.phonenumber.c_str());
	 String^ gender = gcnew String(temp.gender.c_str());
	 String^ email = gcnew String(temp.email.c_str());

	 AD_AID->Text = "ID: " + ID;
	 AD_Aage->Text = "Age: " + Age;
	 AD_AphoneN->Text = "Phone Number: " + phonenumber;
	 AD_AGender->Text = "Gender: " + gender;
	 AD_AEmail->Text = "Email: " + email;
}