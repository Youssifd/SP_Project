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
	 if (user[Lindex].userType == "Admin") {
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
	 else {
		  PA_Hinfo_HSplist->Items->Clear();
		  PA_Hinfo_HCLlist->Items->Clear();
		  PA_Hinfo_ID->Text = "ID: " + gcnew INT(hospital[Hindex].HospitalID);
		  PA_Hinfo_Name->Text = "Name: " + gcnew String(hospital[Hindex].HospitalName.c_str());
		  PA_Hinfo_rate->Text = "Rate: " + gcnew FLOAT(hospital[Hindex].HospitalRate);
		  PA_Hinfo_bedsAva->Text = "Beds Available: " + gcnew INT(hospital[Hindex].PatientReservationRooms);
		  AD_viewHinfo_Rprice->Text = "Reservation Price: " + gcnew INT(hospital[Hindex].ReservationPrice);
		  AD_viewHinfo_surgeryPrice->Text = "Surgery Price: " + gcnew INT(hospital[Hindex].surgeryprice);
		  AD_viewHinfo_BedsPrice->Text = "Beds Price: " + gcnew INT(hospital[Hindex].BedsPrice);
		  for (int i = 0; i < hospital[Hindex].specialtiesCount; i++)
		  {
			   PA_Hinfo_HSplist->Items->Add(gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str()));
		  }
		  for (int i = 0; i < hospital[Hindex].clinicsCount; i++)
		  {
			   PA_Hinfo_HCLlist->Items->Add(gcnew String(hospital[Hindex].HospitalClinics[i].c_str()));
		  }
	 }
	 Exist->Visible = false;
}
void GUISP::mainPage::displayPinfo() {
		  AD_viewPinfo_Name->Text = "Name: " + gcnew String(user[Pindex].name.c_str());
		  AD_viewPinfo_ID->Text = "ID: " + gcnew INT(user[Pindex].id);
		  AD_viewPinfo_Age->Text = "Age: " + gcnew INT(user[Pindex].age);
		  AD_viewPinfo_PhNum->Text = "Phone Number: " + gcnew String(user[Pindex].phonenumber.c_str());
		  AD_viewPinfo_Gender->Text = "Gender: " + gcnew String(user[Pindex].gender.c_str());
		  AD_viewPinfo_Email->Text = "Email: " + gcnew String(user[Pindex].email.c_str());
		  AD_viewPinfo_NumOfR->Text = "Patient bookings: " + gcnew INT(user[Pindex].reserCount);
		  AD_viewPinfo_Totalpaid->Text = "Total paid: " + gcnew INT(user[Pindex].totalpaid);	 
	  
}
void GUISP::mainPage::AddHospital(Hospitals hos[]) {
	 Htemp.HospitalName = msclr::interop::marshal_as<string>(AD_HNorder_TB->Text);
	 Htemp.BedsPrice =stof (msclr::interop::marshal_as<string>(AD_HBPorder_TB->Text));
	 Htemp.surgeryprice = stof( msclr::interop::marshal_as<string>(AD_HSPorder_TB->Text));
	 Htemp.ReservationPrice = stof(msclr::interop::marshal_as<string>(AD_HRPorder_TB->Text));
	 Htemp.PatientReservationRooms = stoi(msclr::interop::marshal_as<string>(AD_HPRBsorder_TB->Text));
	 Htemp.HospitalRate = stof(msclr::interop::marshal_as<string>(AD_HRateorder_TB->Text));
	 Htemp.HospitalID = stoi(msclr::interop::marshal_as < string>(AD_HIDorder_TB->Text));

	 for (int i = 0; i < hospitalCount; i++)
	 {
		  if (Htemp.HospitalName == hos[i].HospitalName)
		  {
			   AD_Herror->Text = "Hospital already exists";
			   return;
		  }
	 }

	
	 if ((Htemp.HospitalID > 1000000) && (Htemp.HospitalID < 10000000)) {
		  for (int i = 0; i < hospitalCount - 1; i++) {
			   if (hos[i].HospitalID == Htemp.HospitalID) {
					AD_Herror->Text= "This ID is exist !\nPlease enter another ID";
					return;
			   }
			   
		  }
	 }
	 else {
		  AD_Herror->Text = "Invalid ID! Try again:";
		  return;

	 }
	 
		  
	 if ((Htemp.HospitalRate > 5)||(Htemp.HospitalRate<0)) {

		  AD_Herror->Text = "Wrong rate.\nPlease Enetr another(5-0) ";
		  return ;
	 }
	
	 Htemp.specialtiesCount = hos[0].specialtiesCount;
	 Htemp.clinicsCount = hos[0].clinicsCount;
	 hos[hospitalCount] = Htemp;

	 for (int j = 0; j < hos[0].specialtiesCount; j++)
		  hos[hospitalCount].HospitalSpecialties[j] = hos[0].HospitalSpecialties[j];

	 for (int z = 0; z < hos[0].clinicsCount; z++)
		  hos[hospitalCount].HospitalClinics[z] = hos[0].HospitalClinics[z];

	 hospitalCount++; 
	 AD_addcom->Text="Hospital Added Successfully";
	 AD_HIDorder_TB->Text = "";
	 AD_HRateorder_TB->Text = "";
	 AD_HPRBsorder_TB->Text = "";
	 AD_HSPorder_TB->Text = "";
	 AD_HBPorder_TB->Text = "";
	 AD_HNorder_TB->Text = "";
	 AD_HRPorder_TB->Text = "";
}
void GUISP::mainPage::modifyHospital() {

	 if (AD_nameOfinput->Text == "Hospital ID") {
		  Htemp.HospitalID = stoi(msclr::interop::marshal_as < string>(AD_TBinput->Text));
		  if ((Htemp.HospitalID > 1000000) && (Htemp.HospitalID < 10000000)) {
			   for (int i = 0; i < hospitalCount - 1; i++) {
					if (hospital[i].HospitalID == Htemp.HospitalID) {
						 AD_warning1->Text = "This ID is exist !\nPlease enter another ID";
						 return;
					}

			   }
		  }
		  else {
			   AD_warning1->Text = "must be 7 digit!";
			   return;
		  }
		
		  hospital[Hindex].HospitalID=Htemp.HospitalID;
	 }
	 else if (AD_nameOfinput->Text == "Hospital Name") {
		  Htemp.HospitalName = msclr::interop::marshal_as<string>(AD_TBinput->Text);
		  for (int i = 0; i < hospitalCount; i++)
		  {
			   if (Htemp.HospitalName == hospital[i].HospitalName)
			   {
					AD_warning1->Text = "Hospital already exists";
					return;
			   }
		  }
		  hospital[Hindex].HospitalName = Htemp.HospitalName;
		
	 }
	 else if (AD_nameOfinput->Text == "Hospital Rate") {
		  Htemp.HospitalRate = stof(msclr::interop::marshal_as<string>(AD_TBinput->Text));
		  if ((Htemp.HospitalRate > 5) || (Htemp.HospitalRate < 0)) {

			   AD_warning1->Text = "Wrong rate.\nPlease Enetr another(5-0) ";
			   return;
		  }
		  hospital[Hindex].HospitalRate = Htemp.HospitalRate;
	 }
	 else if (AD_nameOfinput->Text == "Number of Avaliable rooms") {
		  Htemp.PatientReservationRooms = stoi(msclr::interop::marshal_as<string>(AD_TBinput->Text));
		  hospital[Hindex].PatientReservationRooms = Htemp.PatientReservationRooms;
		  
	 }
	 else if (AD_nameOfinput->Text == "Bed Price") {
		  Htemp.BedsPrice = stof(msclr::interop::marshal_as<string>(AD_TBinput->Text));
		  hospital[Hindex].BedsPrice = Htemp.BedsPrice;
		 
	 }
	 else if (AD_nameOfinput->Text == "Hospital Specialties") {
		  string Hspindex= msclr::interop::marshal_as<string>(AD_ModifyHSClist->Text);
		  string Sptemp = msclr::interop::marshal_as<string>(AD_TBinput->Text);
		  searchSPindex(Hspindex);
		  hospital[Hindex].HospitalSpecialties[SPindex] = Sptemp;

	 }
	 else if (AD_nameOfinput->Text == "Hospital Clinics") {
		  string Hclindex= msclr::interop::marshal_as<string>(AD_ModifyHSClist->Text);
		  string cltemp = msclr::interop::marshal_as<string>(AD_TBinput->Text);
		  searchCLindex(Hclindex);
		  hospital[Hindex].HospitalClinics[SPindex] = cltemp;

	 }
	 else if (AD_nameOfinput->Text == "Reservation Price") {
		  Htemp.ReservationPrice = stof(msclr::interop::marshal_as<string>(AD_TBinput->Text));
		  hospital[Hindex].ReservationPrice = Htemp.ReservationPrice;
		 
	 }
	 AD_warning1->Text = "edit sucss";
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
void GUISP::mainPage::searchCLindex(string Ser) {
	 for (int i = 0; i < hospital[Hindex].clinicsCount; i++) {
		  if (hospital[i].HospitalClinics[i] == Ser) {
			   CLindex = i;
			   break;
		  }
	 }

}
void GUISP::mainPage::searchSPindex(string Ser) {
	 for (int i = 0; i < hospital[Hindex].specialtiesCount; i++) {
		  if (hospital[i].HospitalSpecialties[i] == Ser) {
			   SPindex = i;
			   break;
		  }
	 }

}