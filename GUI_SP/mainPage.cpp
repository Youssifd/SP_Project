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
	 f.SaveData(hospital);
	 f.SaveData(user);

	 for (int i = 0; i < userCount; i++) {
		  if (user[i].userType == "Patient") {
			   delete[] user[i].reservation;
			   user[i].reservation = NULL;
		  }

	 }
	 for (int i = 0; i < userCount; i++) {
		  if (user[i].userType == "Patient") {
			   delete[] user[i].LabR;
			   user[i].LabR = NULL;
		  }

	 }
}
void GUISP::mainPage::personalinfo() {
	 String^ ID = gcnew String(to_string(user[Lindex].id).c_str());
	 String^ Age = gcnew String(to_string(user[Lindex].age).c_str());
	 String^ phonenumber = gcnew String(user[Lindex].phonenumber.c_str());
	 String^ gender = gcnew String(user[Lindex].gender.c_str());
	 String^ email = gcnew String(user[Lindex].email.c_str());
	 String^ NumOfreserv = gcnew String(to_string(user[Lindex].reserCount).c_str());
	 String^ totalpaid = gcnew String(to_string(user[Lindex].totalpaid).c_str());
	 if (user[Lindex].userType == "Admin") {
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
		  AD_viewHinfo_Rprice->Text = "Reservation Price: " + gcnew FLOAT(hospital[Hindex].ReservationPrice);
		  AD_viewHinfo_surgeryPrice->Text = "Surgery Price: " + gcnew FLOAT(hospital[Hindex].surgeryprice);
		  AD_viewHinfo_BedsPrice->Text = "Beds Price: " + gcnew FLOAT(hospital[Hindex].BedsPrice);
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
		  PA_Hinfo_Rprice->Text = "Reservation Price: " + gcnew FLOAT(hospital[Hindex].ReservationPrice);
		  PA_Hinfo_surgeryprice->Text = "Surgery Price: " + gcnew FLOAT(hospital[Hindex].surgeryprice);
		  PA_Hinfo_Bedprice->Text = "Beds Price: " + gcnew FLOAT(hospital[Hindex].BedsPrice);
		  for (int i = 0; i < hospital[Hindex].specialtiesCount; i++)
		  {
			   PA_Hinfo_HSplist->Items->Add(gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str()));
		  }
		  for (int i = 0; i < hospital[Hindex].clinicsCount; i++)
		  {
			   PA_Hinfo_HCLlist->Items->Add(gcnew String(hospital[Hindex].HospitalClinics[i].c_str()));
		  }
	 }
}
void GUISP::mainPage::displayPinfo() {
		  AD_viewPinfo_Name->Text = "Name: " + gcnew String(user[Pindex].name.c_str());
		  AD_viewPinfo_ID->Text = "ID: " + gcnew INT(user[Pindex].id);
		  AD_viewPinfo_Age->Text = "Age: " + gcnew INT(user[Pindex].age);
		  AD_viewPinfo_PhNum->Text = "Phone Number: " + gcnew String(user[Pindex].phonenumber.c_str());
		  AD_viewPinfo_Gender->Text = "Gender: " + gcnew String(user[Pindex].gender.c_str());
		  AD_viewPinfo_Email->Text = "Email: " + gcnew String(user[Pindex].email.c_str());
		  AD_viewPinfo_NumOfR->Text = "Patient bookings: " + gcnew INT(user[Pindex].reserCount);
		  AD_viewPinfo_Totalpaid->Text = "Total paid: " + gcnew FLOAT(user[Pindex].totalpaid);	 
	  
}
void GUISP::mainPage::AddHospital(Hospitals hos[]) {
	 if (AD_HNorder_TB->Text == "") {
		  AD_Herror->Text="Please Enter Hospital Name";
		  return;
	 }
	 if (AD_HIDorder_TB->Text ==""){
		  AD_Herror->Text = "Please Enter Hospital ID";
		  return;
	 }
	 if (AD_HBPorder_TB->Text ==""){
		  AD_Herror->Text = "Please Enter Bed Price";
		  return;
	 }
	 if (AD_HRateorder_TB->Text ==""){
		  AD_Herror->Text = "Please Enter Rate";
		  return;
	 }
	 if (AD_HRPorder_TB->Text ==""){
		  AD_Herror->Text = "Please Enter Reservation Price";
		  return;
	 }
	 if (AD_HPRBsorder_TB->Text ==""){
		  AD_Herror->Text = "Please Enter Number of Avaliable rooms";
		  return;
	 }
	 if (AD_HSPorder_TB->Text ==""){
		  AD_Herror->Text = "Please Enter Surgery Price";
		  return;
	 }
	 Htemp.HospitalName = context.marshal_as<string>(AD_HNorder_TB->Text);
	 Htemp.BedsPrice =stof (context.marshal_as<string>(AD_HBPorder_TB->Text));
	 Htemp.surgeryprice = stof( context.marshal_as<string>(AD_HSPorder_TB->Text));
	 Htemp.ReservationPrice = stof(context.marshal_as<string>(AD_HRPorder_TB->Text));
	 Htemp.PatientReservationRooms = stoi(context.marshal_as<string>(AD_HPRBsorder_TB->Text));
	 Htemp.HospitalRate = stof(context.marshal_as<string>(AD_HRateorder_TB->Text));
	 Htemp.HospitalID = stoi(context.marshal_as < string>(AD_HIDorder_TB->Text));
	 while (Htemp.HospitalName[Htemp.HospitalName.size() - 1] == ' ') {
		  Htemp.HospitalName.erase(Htemp.HospitalName.size() - 1);
	 }
	 while (Htemp.HospitalName[0] == ' ') {
		  Htemp.HospitalName.erase(0, 1);
	 }
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
	 MessageBox::Show("Hospital Added Successfully");
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
		  Htemp.HospitalID = stoi(context.marshal_as < string>(AD_TBinput->Text));
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

		  hospital[Hindex].HospitalID = Htemp.HospitalID;
	 }
	 else if (AD_nameOfinput->Text == "Hospital Name") {
		  Htemp.HospitalName = context.marshal_as<string>(AD_TBinput->Text);
		  for (int i = 0; i < hospitalCount; i++)
		  {
			   if (Htemp.HospitalName == hospital[i].HospitalName)
			   {
					AD_warning1->Text = "Hospital already exists";
					return;
			   }
		  }
		  while (Htemp.HospitalName[Htemp.HospitalName.size() - 1] == ' ') {
			   Htemp.HospitalName.erase(Htemp.HospitalName.size() - 1);
		  }
		  while (Htemp.HospitalName[0] == ' ') {
			   Htemp.HospitalName.erase(0, 1);
		  }
		  hospital[Hindex].HospitalName = Htemp.HospitalName;

	 }
	 else if (AD_nameOfinput->Text == "Hospital Rate") {
		  Htemp.HospitalRate = stof(context.marshal_as<string>(AD_TBinput->Text));
		  if ((Htemp.HospitalRate > 5) || (Htemp.HospitalRate < 0)) {

			   AD_warning1->Text = "Wrong rate.\nPlease Enetr another(5-0) ";
			   return;
		  }
		  hospital[Hindex].HospitalRate = Htemp.HospitalRate;
	 }
	 else if (AD_nameOfinput->Text == "Number of Avaliable rooms") {
		  Htemp.PatientReservationRooms = stoi(context.marshal_as<string>(AD_TBinput->Text));
		  hospital[Hindex].PatientReservationRooms = Htemp.PatientReservationRooms;

	 }
	 else if (AD_nameOfinput->Text == "Bed Price") {
		  Htemp.BedsPrice = stof(context.marshal_as<string>(AD_TBinput->Text));
		  hospital[Hindex].BedsPrice = Htemp.BedsPrice;

	 }
	 else if (AD_nameOfinput->Text == "Hospital Specialties") {
		  string Hspindex = context.marshal_as<string>(AD_ModifyHSClist->Text);
		  string Sptemp = context.marshal_as<string>(AD_TBinput->Text);
		  String^ temp;
		  searchSPindex(Hspindex);
		  hospital[Hindex].HospitalSpecialties[SPindex] = Sptemp;
		  AD_ModifyHSClist->Items->Clear();
		  for (int i = 0; i < hospital[Hindex].specialtiesCount; i++) {
			   temp = gcnew String(hospital[Hindex].HospitalSpecialties[i].c_str());
			   AD_ModifyHSClist->Items->Add(temp);
		  }
		  AD_ModifyHSClist->SelectedIndex = -1;
		  SPindex = -1;
	 }
	 else if (AD_nameOfinput->Text == "Hospital Clinics") {
		  string Hclindex = context.marshal_as<string>(AD_ModifyHSClist->Text);
		  string cltemp = context.marshal_as<string>(AD_TBinput->Text);
		  String^ temp;
		  searchCLindex(Hclindex);
		  hospital[Hindex].HospitalClinics[CLindex] = cltemp;
		  AD_ModifyHSClist->Items->Clear();
		  for (int i = 0; i < hospital[Hindex].clinicsCount; i++) {
			   temp = gcnew String(hospital[Hindex].HospitalClinics[i].c_str());
			   AD_ModifyHSClist->Items->Add(temp);
		  }

		  AD_ModifyHSClist->SelectedIndex = -1;
		  CLindex = -1;
	 }
	 else if (AD_nameOfinput->Text == "Reservation Price") {
		  Htemp.ReservationPrice = stof(context.marshal_as<string>(AD_TBinput->Text));
		  hospital[Hindex].ReservationPrice = Htemp.ReservationPrice;

	 }

	 //AD_warning1->Text = "edit sucss";
	 MessageBox::Show("edit sucss");
	 AD_TBinput->Text = "";
}
void GUISP::mainPage::modifyHSC() {
	 string newclorsp;
	 if (AD_TBforAddHSC->Text == "") {
		  MessageBox::Show("Please fill the field");
		  return;
	}
	 searchHindex(context.marshal_as<string>(AD_Hlist_combox->Text));
			newclorsp = context.marshal_as < string>(AD_TBforAddHSC->Text);
	 if (AD_HSCorder->Text == "Enter Specialty Name") {
	
	   for (int i = 0; i < hospital[Hindex].specialtiesCount;i++) {
			if(newclorsp== hospital[Hindex].HospitalSpecialties[i]){
				 AD_stateHSC2->Text = "this Specialty exist!";
				 return;
			}
	   }
			
	   AD_stateHSC2->Text = "Specialty Added"; 
	   AD_TBforAddHSC->Text = "";
	   
	   hospital[Hindex].HospitalSpecialties[hospital[Hindex].specialtiesCount ] = newclorsp;
	   hospital[Hindex].specialtiesCount++;
	 }
	 else if (AD_HSCorder->Text == "Enter Clinics Name") {
	   for (int i = 0; i < hospital[Hindex].clinicsCount; i++) {
			if (newclorsp == hospital[Hindex].HospitalClinics[i]) {
				 AD_stateHSC2->Text = "this Clinic exist!";
				 return;
			}
	   }
	   hospital[Hindex].HospitalClinics[hospital[Hindex].clinicsCount ] = newclorsp;
	   AD_stateHSC2->Text = "Clinic Added";
	   AD_TBforAddHSC->Text = "";
	   hospital[Hindex].clinicsCount++;
	 }
	 
}
void GUISP::mainPage::DisplayRInfo() {
	 PA_viewR_PName->Text = "Patient Name: " + gcnew String(user[Lindex].reservation[Rindex].PName.c_str());
	 PA_viewR_PAge->Text = "Patient Age: " + gcnew INT(user[Lindex].reservation[Rindex].PAge);
	 PA_viewR_phoneN->Text = "Phone Number: " + gcnew String(user[Lindex].reservation[Rindex].PhoneNumber.c_str());
	 PA_viewR_Day->Text = "Reservation Day: " + gcnew String(user[Lindex].reservation[Rindex].ReservationDay.c_str());
	 PA_viewR_HReserved->Text = "Hospital Reserved: " + gcnew String(user[Lindex].reservation[Rindex].hospital.HospitalName.c_str());
	 PA_viewR_bedPrice->Text= "Bed Price: " + gcnew FLOAT(user[Lindex].reservation[Rindex].BedPrice);
	 PA_viewR_SurgeryPrice->Text = "Surgery Price: " + gcnew FLOAT(user[Lindex].reservation[Rindex].surgeryprice);
	 PA_viewR_RoomID->Text = "Room ID: " + gcnew String(user[Lindex].reservation[Rindex].PatientReservationRoom.c_str());
	 if (user[Lindex].reservation[Rindex].ReservationType == "Check-up") {
	 PA_viewR_HSpCl->Text = "Clinic: " + gcnew String(user[Lindex].reservation[Rindex].HospitalClinic.c_str());
	 PA_viewR_ChandTPrice->Text = "Check-UP Price: " + gcnew FLOAT(user[Lindex].reservation[Rindex].ReservationPrice);
	 /*PA_viewR_bedPrice->Text = "Bed Price: 0";
	 PA_viewR_SurgeryPrice->Text = "Surgery Price: 0";
	 PA_viewR_RoomID->Text = "Room ID: NONE ";*/

	 }
	 else {
	 PA_viewR_HSpCl->Text = "Specialty: " + gcnew String(user[Lindex].reservation[Rindex].HospitalSpecialty.c_str());
	 PA_viewR_ChandTPrice->Text="Total Price: " + gcnew FLOAT(user[Lindex].reservation[Rindex].Totalprice);
	 }
	
}
void GUISP::mainPage::makeReservation() {
	 if(PA_PNord_TB->Text == ""){
		  PA_warningM->Text = "Please Enter Name";
		  return;
	 }
	 if(PA_PAord_TB->Text == ""){
		  PA_warningM->Text = "Please Enter Age";
		  return;
	 }
	 if(PA_PphNord_TB->Text == ""){
		  PA_warningM->Text = "Please Enter Phone Number";
		  return;
	 }
	 if(PA_RtypeCheck_RB1->Checked == true){
		  if(PA_PNumOfDays_TB->Text == ""){
			   PA_warningM->Text = "Please Enter Number of Days";
			   return;
		  }
		 
	 }
	
	 Reservations Rtemp; 
	 //label7->Text = "Cl: " + gcnew String(Rtemp.HospitalClinic.c_str());
	 Rtemp.PName = context.marshal_as<string>(PA_PNord_TB->Text);
	 Rtemp.PAge = stoi(context.marshal_as<string>(PA_PAord_TB->Text));
	 Rtemp.PhoneNumber = context.marshal_as<string>(PA_PphNord_TB->Text);
	 Rtemp.hospital.HospitalName = context.marshal_as<string>(PA_selectHforR_COM->Text);
	 Rtemp.ReservationDay = context.marshal_as<string>(PA_DayenterH_COM->Text);
	 searchHindex(Rtemp.hospital.HospitalName);
	 Rtemp.hospital = hospital[Hindex];

	 if (PA_RtypeCheck_RB2->Checked == true) {
		  Rtemp.ReservationType = "Check-up";
		  Rtemp.HospitalClinic= context.marshal_as<string>(PA_RSClist_COM->Text);
		 
	 }
	 else {
		  Rtemp.ReservationType = "Surgery";
		  Rtemp.HospitalSpecialty= context.marshal_as<string>(PA_RSClist_COM->Text);
		  Rtemp.numberOfDays = stoi(context.marshal_as<string>(PA_PNumOfDays_TB->Text));
		  if (Rtemp.numberOfDays <= 0) {
			   MessageBox::Show("Days Number must be greater than 0");
			   return;

		  }

	 }
	 if(f.validPhoneNumber(Rtemp.PhoneNumber)==false){
		  PA_warningM->Text = "Invalid Phone Number";
		  return;
	 }
	 if(Rtemp.PAge<=0){
		  PA_warningM->Text = "Invalid Age";
		  return;
	 }
	 f.makeReservation(user, hospital, Rtemp);
	// user[Lindex].reservation[user[Lindex].reserCount-1].hospital = hospital[Hindex];
	 MessageBox::Show("Reserved.\nReservation ID:" + gcnew String(to_string(user[Lindex].reservation[user[Lindex].reserCount - 1].ReservtionID).c_str()), "Reservation", MessageBoxButtons::OK, MessageBoxIcon::Information);
	 PA_PNord_TB->Text = "";
	 PA_PAord_TB->Text = "";
	 PA_PphNord_TB->Text = "";
	 PA_PNumOfDays_TB->Text = "";
	 PA_selectHforR_COM->SelectedIndex=-1;
	 PA_DayenterH_COM->SelectedIndex = -1;
	 PA_RSClist_COM->SelectedIndex = -1;
	 PA_askwhoreserv_RB2->Checked = true;
}
void GUISP::mainPage::modifyReservation() {
	 Reservations Rtemp;
	 if (PA_modifyRord_lab->Text == "New Full Name") {
		  Rtemp.PName = context.marshal_as<string>(PA_modifyRord_TB->Text);
		  if (Rtemp.PName == user[Lindex].reservation[Rindex].PName)
			   PA_modifyRstate_lab->Text = "No changes made";

		  while (Rtemp.PName[Rtemp.PName.size() - 1] == ' ') {
			   Rtemp.PName.erase(Rtemp.PName.size() - 1);
		  }
		  while (Rtemp.PName[0] == ' ') {
			   Rtemp.PName.erase(0, 1);
		  }
		//  PA_modifyRstate_lab->Text = "Edit done";
		  user[Lindex].reservation[Rindex].PName = Rtemp.PName;
		 
	 }
	 else if (PA_modifyRord_lab->Text == "New Age") {
		  Rtemp.PAge = stoi(context.marshal_as<string>(PA_modifyRord_TB->Text));
		  if (Rtemp.PAge == user[Lindex].reservation[Rindex].PAge) {
			   PA_modifyRstate_lab->Text = "No changes made";
			   return;
		  }
		  user[Lindex].reservation[Rindex].PAge = Rtemp.PAge;

	 }
	 else if (PA_modifyRord_lab->Text == "New Phone Number") {
		  Rtemp.PhoneNumber = context.marshal_as<string>(PA_modifyRord_TB->Text);
		  if (f.validPhoneNumber(Rtemp.PhoneNumber) == false) {
			   PA_modifyRstate_lab->Text = "Invalid Phone Number";
			   return;
		  }
		  if (Rtemp.PhoneNumber == user[Lindex].reservation[Rindex].PhoneNumber) {
			   PA_modifyRstate_lab->Text = "No changes made";
			   return;
		  }



		  user[Lindex].reservation[Rindex].PhoneNumber = Rtemp.PhoneNumber;


	 }
	 else if (PA_modifyRord_lab->Text == "New Number of days") {
		  Rtemp.numberOfDays= stoi(context.marshal_as<string>(PA_modifyRord_TB->Text));
			   if (Rtemp.numberOfDays == user[Lindex].reservation[Rindex].numberOfDays) {
					PA_modifyRstate_lab->Text = "No changes made";
					return;
			   }
			   if (Rtemp.numberOfDays < 0) {
					PA_modifyRstate_lab->Text = "Invalid Number";
					return;
			   }
			   user[Lindex].totalpaid -= user[Lindex].reservation[Rindex].Totalprice;
			   user[Lindex].reservation[Rindex].numberOfDays = Rtemp.numberOfDays; 
			 //  user[Lindex].reservation[Rindex].surgeryprice = user[Lindex].reservation[Rindex].hospital.surgeryprice;
			   user[Lindex].reservation[Rindex].BedPrice = Rtemp.numberOfDays * user[Lindex].reservation[Rindex].hospital.BedsPrice;
			   user[Lindex].reservation[Rindex].Totalprice = user[Lindex].reservation[Rindex].BedPrice + user[Lindex].reservation[Rindex].surgeryprice;
			   user[Lindex].reservation[Rindex].numberOfDays = Rtemp.numberOfDays;
			   user[Lindex].totalpaid += user[Lindex].reservation[Rindex].Totalprice;
			 //  int roomnumber = 0;

		  }
	 

	//PA_modifyRstate_lab->Text = "edit done";
	//PA_StateOflist->Text = "edit done";
	 MessageBox::Show("Edit done");
	 PA_modifyRord_TB->Text = "";
	// PA_Rlistmodify_com->SelectedIndex = -1;
	 
}
void GUISP::mainPage::EditPersonalInfo() {
	 Users Ptemp;
	 if (user[Lindex].userType == "Patient") {
		  if (PA_editRemain_lab->Text == "New Full Name") {
			   Ptemp.name = context.marshal_as<string>(PA_editRemain_TB->Text);
			   if (Ptemp.name == user[Lindex].name) {
					PA_editRemain_state->Text = "No changes made";
					return;
			   }
			   while (Ptemp.name[Ptemp.name.size() - 1] == ' ') {
					Ptemp.name.erase(Ptemp.name.size() - 1);
			   }
			   user[Lindex].name = Ptemp.name;
			   FName_PA_lab->Text = gcnew String(user[Lindex].name.c_str());

		  }
		  else if (PA_editRemain_lab->Text == "New Age") {
			   Ptemp.age = stoi(context.marshal_as<string>(PA_editRemain_TB->Text));
			   if (Ptemp.age == user[Lindex].age) {
					PA_editRemain_state->Text = "No changes made";
					return;
			   }
			   if (Ptemp.age <= 18) {
					PA_editRemain_state->Text = "Invalid Age";
					return;
			   }
			   user[Lindex].age = Ptemp.age;
		  }
		  else if (PA_editRemain_lab->Text == "New Username") {
			   Ptemp.username = context.marshal_as<string>(PA_editRemain_TB->Text);
			   for (int i = 0; i < userCount; i++) {
					if (Ptemp.username == user[i].username) {
						 PA_editRemain_state->Text = "Username already exists";
						 return;
					}
			   }
			  
			   user[Lindex].username = Ptemp.username;
			   user[Lindex].email = user[Lindex].username + "@Huser.com";
		  }
		  else if (PA_editRemain_lab->Text == "New Phone Number") {
			   Ptemp.phonenumber = context.marshal_as<string>(PA_editRemain_TB->Text);
			   if (f.validPhoneNumber(Ptemp.phonenumber) == false) {
					PA_editRemain_state->Text = "Invalid Phone Number";
					return;
			   }
			   if (Ptemp.phonenumber == user[Lindex].phonenumber) {
					PA_editRemain_state->Text = "No changes made";
					return;
			   }
			   user[Lindex].phonenumber = Ptemp.phonenumber;
		  }
	 }
	 else {
		  if (AD_editRemain_lab->Text == "New Full Name") {
			   Ptemp.name = context.marshal_as<string>(AD_editRemain_TB->Text);
			   if (Ptemp.name == user[Lindex].name) {
					AD_editRemain_state->Text = "No changes made";
					return;
			   }
			   for (int i = 0; i < user[Lindex].reserCount; i++) {
					if (user[Lindex].name == user[Lindex].reservation[i].PName) {
						 user[Lindex].reservation[i].PName = Ptemp.name;
					}
			   }
			   while (Ptemp.name[Ptemp.name.size() - 1] == ' ') {
					Ptemp.name.erase(Ptemp.name.size() - 1);
			   }
			   while (Ptemp.name[0] == ' ') {
					Ptemp.name.erase(0, 1);
			   }
			   user[Lindex].name = Ptemp.name;
			   FName_AD_lab->Text =  gcnew String(user[Lindex].name.c_str());
		  }
		  else if (AD_editRemain_lab->Text == "New Age") {
			   Ptemp.age = stoi(context.marshal_as<string>(AD_editRemain_TB->Text));
			   if (Ptemp.age == user[Lindex].age) {
					AD_editRemain_state->Text = "No changes made";
					return;
			   }
			   if (Ptemp.age <= 18) {
					AD_editRemain_state->Text = "Invalid Age";
					return;
			   }
			   for (int i = 0; i < user[Lindex].reserCount; i++) {
					if (user[Lindex].name == user[Lindex].reservation[i].PName) {
						 user[Lindex].reservation[i].PAge = Ptemp.age;
					}
			   }
			   user[Lindex].age = Ptemp.age;
			   AD_viewPinfo_Age->Text = "Age: " + gcnew INT(user[Lindex].age);
		  }
		  else if (AD_editRemain_lab->Text == "New Username") {
			   Ptemp.username = context.marshal_as<string>(AD_editRemain_TB->Text);
			   for (int i = 0; i < userCount; i++) {
					if (Ptemp.username == user[i].username) {
						 AD_editRemain_state->Text = "Username already exists";
						 return;
					}
			   }
			   user[Lindex].username = Ptemp.username;
			   user[Lindex].email = user[Lindex].username + "@Hadmin.com";
			  // AD_viewPinfo_Email->Text = "Email: " + gcnew String(user[Lindex].email.c_str());
		  }
		  else if (AD_editRemain_lab->Text == "New Phone Number") {
			   Ptemp.phonenumber = context.marshal_as<string>(AD_editRemain_TB->Text);
			   if (f.validPhoneNumber(Ptemp.phonenumber) == false) {
					AD_editRemain_state->Text = "Invalid Phone Number";
					return;
			   }
			   if (Ptemp.phonenumber == user[Lindex].phonenumber) {
					AD_editRemain_state->Text = "No changes made";
					return;
			   }
			   user[Lindex].phonenumber= Ptemp.phonenumber;

		  }

	 }
	 PA_editRemain_state->Text = "Edit done";
	 PA_editRemain_TB->Text = "";
	 AD_editRemain_state->Text = "Edit done";
	 AD_editRemain_TB->Text = "";
}
void GUISP::mainPage::Registration()
{
	 if (regis_name_textbox->Text == "") {
		  MessageBox::Show("Please Enter Name");
		  return;
	 }
	 if (regis_username_textbox->Text == "") {
		  MessageBox::Show("Please Enter Username");
		  return;
	 }
	 if(regis_age_textbox->Text == ""){
		  MessageBox::Show("Please Enter Age");
		  return;
	 }
	 if(regis_phonenumber_textbox->Text == ""){
		  MessageBox::Show("Please Enter Phone Number");
		  return;
	 }
	 if(regis_Pass_TBox->Text == ""){
		  MessageBox::Show("Please Enter Password");
		  return;
	 }	  
	 if(regis_ConPass_TBox->Text == ""){
		  MessageBox::Show("Please Enter Confirm Password");
		  return;
	 }
	 if (regis_selectgender->SelectedIndex == -1) {
		  MessageBox::Show("Please Select Gender");
		  return;
	 }
	 Users temp;
	 string conpass;
	 
	 temp.name = context.marshal_as<string>(regis_name_textbox->Text);
	 temp.username = context.marshal_as<string>(regis_username_textbox->Text);
	 temp.phonenumber = context.marshal_as<string>(regis_phonenumber_textbox->Text);
	 temp.age= stoi(context.marshal_as<string>(regis_age_textbox->Text));
	 if (context.marshal_as<string>(regis_Pass_TBox->Text).size() <=7) {
		  regis_state->Text = "Password must be more than 7 characters";
		  return;
	 }
	 else if (context.marshal_as<string>(regis_Pass_TBox->Text).size() >= 20) {
		  regis_state->Text = "Password must be less than 16 characters";
		  return;
	 }
	 temp.password = context.marshal_as<string>(regis_Pass_TBox->Text);
	 temp.gender= context.marshal_as<string>(regis_selectgender->Text);
	 conpass = context.marshal_as<string>(regis_ConPass_TBox->Text);
	 for (int i = 0; i < userCount; i++) {
		  if (user[i].username == temp.username) {
			   regis_state->Text = "This user already exist";
			   return;
		  }
	 }
	 while (temp.name[temp.name.size() - 1] == ' ') {
		  		  temp.name.erase(temp.name.size() - 1);
	 }
	 while (temp.name[0] == ' ') {
		  temp.name.erase(0, 1);		 
	 }
	// temp.username.erase(std::remove_if(temp.username.begin(), temp.username.end());
	 if(!f.validPhoneNumber(temp.phonenumber)){
		  regis_state->Text = "Invalid Phone Number";
		  return;
	 }
	 if(temp.age<18){
		  regis_state->Text = "Invalid Age\nmust be greater than or equal 18";
		  return;
	 }
	 if(temp.password!=conpass){
		  regis_state->Text = "Password not match";
		  return;
	 }
	// f.registerpatient(user, temp);
	 temp.email = temp.username + "@Huser.com";
	 temp.id = userID;
	 userID++;
	 user[userCount] = temp;
	 userCount++;
	 MessageBox::Show("Registration Done");
	 regis_name_textbox->Text = "";
	 regis_age_textbox->Text = "";
	 regis_phonenumber_textbox->Text = "";
	 regis_username_textbox->Text = "";
	 regis_Pass_TBox->Text = "";
	 regis_ConPass_TBox->Text = "";
	 regis_selectgender->SelectedIndex = -1;
	 regis_readPolicies->Checked = false;

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
		  if (hospital[Hindex].HospitalClinics[i] == Ser) {
			   CLindex = i;
			   break;
		  }
	 }

}
void GUISP::mainPage::searchDindex(string Ser) {
	 for (int i = 0; i < daysInWeek; i++) {
		  if (ReservationDays[i] == Ser) {
			   Dindex = i;
			   break;
		  }
	 }

}
void GUISP::mainPage::searchSPindex(string Ser) {
	 for (int i = 0; i < hospital[Hindex].specialtiesCount; i++) {
		  if (hospital[Hindex].HospitalSpecialties[i] == Ser) {
			   SPindex = i;
			   break;
		  }
	 }

}
void GUISP::mainPage::searchLABRindex(string Ser) {
	 for (int i = 0; i < user[Lindex].LabRCount; i++) {
		  if (user[Lindex].LabR->id==Ser) {
			   LabRindex = i;
			   break;
		  }
	 }

}