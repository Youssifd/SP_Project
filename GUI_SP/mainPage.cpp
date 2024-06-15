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
	 String^ ID = gcnew String(to_string(user[Lindex].id).c_str());
	 String^ Age = gcnew String(to_string(user[Lindex].age).c_str());
	 String^ phonenumber = gcnew String(user[Lindex].phonenumber.c_str());
	 String^ gender = gcnew String(user[Lindex].gender.c_str());
	 String^ email = gcnew String(user[Lindex].email.c_str());
	 String^ NumOfreserv = gcnew String(to_string(user[Lindex].reserCount).c_str());
	 String^ totalpaid = gcnew String(to_string(user[Lindex].totalpaid).c_str());
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
void GUISP::mainPage::displayHinfo() {
	 AD_viewHinfo_HSplist->Items->Clear();
	 AD_viewHinfo_HCllist->Items->Clear();
	 AD_viewHinfo_ID->Text = "ID: " + gcnew INT(hospital[Hindex].HospitalID);
	 AD_viewHinfo_Name->Text = "Name: " + gcnew String(hospital[Hindex].HospitalName.c_str());
	 AD_viewHinfo_Rate->Text = "Rate: " + gcnew FLOAT(hospital[Hindex].HospitalRate);
	 AD_viewHinfo_bedsAva->Text = "Beds Available: " + gcnew INT(hospital[Hindex].PatientReservationRooms);
	 AD_viewHinfo_Rprice->Text = "Reservation Price: " + gcnew INT(hospital[Hindex].ReservationPrice);
	 AD_viewHinfo_surgeryPrice->Text = "Surgery Price: " + gcnew INT(hospital[Hindex].surgeryprice);
	 AD_viewHinfo_BedsPrice->Text = "Beds Price: " + gcnew INT(hospital[Hindex].BedsPrice);
	 for (int i = 0; i < hospital[Hindex].specialtiesCount; i++)
	 {
		  AD_viewHinfo_HSplist->Items->Add(gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str()));
	 }
	 for (int i = 0; i < hospital[Hindex].clinicsCount; i++)
	 {
		  AD_viewHinfo_HCllist->Items->Add(gcnew String(hospital[Hindex].HospitalClinics[i].c_str()));
	 }
}
void GUISP::mainPage::searchHindex(string Ser) {
	 for (int i = 0; i < hospitalCount; i++) {
		  if (hospital[i].HospitalName == Ser) {
			   Hindex = i;
			   break;
		  }
	 }
}
void GUISP::mainPage::searchRindex(int Ser) {
	 for (int i = 0; i < user[Lindex].reserCount; i++) {
		  if (user[Lindex].reservation[i].ReservtionID == Ser) {
			   Rindex = i;
			   break;
		  }
	 }

}
void GUISP::mainPage::searchPindex(string Ser) {
	 for (int i = 0; i < userCount; i++) {
		  if (user[i].username == Ser) {
			   Pindex = i;
			   break;
		  }
	 }

}