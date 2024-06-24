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
	/* f.SaveData(hospital);
	 f.SaveData(user);*/
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
		  PA_Hinfo_Rprice->Text = "Reservation Price: " + gcnew INT(hospital[Hindex].ReservationPrice);
		  PA_Hinfo_surgeryprice->Text = "Surgery Price: " + gcnew INT(hospital[Hindex].surgeryprice);
		  PA_Hinfo_Bedprice->Text = "Beds Price: " + gcnew INT(hospital[Hindex].BedsPrice);
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
		  AD_viewPinfo_Totalpaid->Text = "Total paid: " + gcnew INT(user[Pindex].totalpaid);	 
	  
}
void GUISP::mainPage::AddHospital(Hospitals hos[]) {
	 Htemp.HospitalName = context.marshal_as<string>(AD_HNorder_TB->Text);
	 Htemp.BedsPrice =stof (context.marshal_as<string>(AD_HBPorder_TB->Text));
	 Htemp.surgeryprice = stof( context.marshal_as<string>(AD_HSPorder_TB->Text));
	 Htemp.ReservationPrice = stof(context.marshal_as<string>(AD_HRPorder_TB->Text));
	 Htemp.PatientReservationRooms = stoi(context.marshal_as<string>(AD_HPRBsorder_TB->Text));
	 Htemp.HospitalRate = stof(context.marshal_as<string>(AD_HRateorder_TB->Text));
	 Htemp.HospitalID = stoi(context.marshal_as < string>(AD_HIDorder_TB->Text));

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
		
		  hospital[Hindex].HospitalID=Htemp.HospitalID;
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
		  string Hspindex= context.marshal_as<string>(AD_ModifyHSClist->Text);
		  string Sptemp = context.marshal_as<string>(AD_TBinput->Text);
		  searchSPindex(Hspindex);
		  hospital[Hindex].HospitalSpecialties[SPindex] = Sptemp;

	 }
	 else if (AD_nameOfinput->Text == "Hospital Clinics") {
		  string Hclindex= context.marshal_as<string>(AD_ModifyHSClist->Text);
		  string cltemp = context.marshal_as<string>(AD_TBinput->Text);
		  searchCLindex(Hclindex);
		  hospital[Hindex].HospitalClinics[SPindex] = cltemp;

	 }
	 else if (AD_nameOfinput->Text == "Reservation Price") {
		  Htemp.ReservationPrice = stof(context.marshal_as<string>(AD_TBinput->Text));
		  hospital[Hindex].ReservationPrice = Htemp.ReservationPrice;
		 
	 }
	 
	 AD_warning1->Text = "edit sucss";
}
void GUISP::mainPage::modifyHSC() {
	 string newclorsp;
	  
	 searchHindex(context.marshal_as<string>(AD_Hlist_combox->Text));
			newclorsp = context.marshal_as < string>(AD_TBforAddHSC->Text);
	 if (AD_HSCorder->Text == "Enter Specialty Name") {
	
	   for (int i = 0; i < hospital[Hindex].specialtiesCount;i++) {
			if(newclorsp== hospital[Hindex].HospitalSpecialties[i]){
				 AD_stateHSC2->Text = "this Specialty exist!";
				 return;
			}
	   }
			AD_stateHSC2->Text = "this Specialty exist!";
	   AD_stateHSC2->Text = "Specialty Added";
	   hospital[Hindex].HospitalSpecialties[hospital[Hindex].specialtiesCount ] = newclorsp;
	   hospital[Hindex].specialtiesCount++;
	 }
	 else if (AD_HSCorder->Text == "Enter Clincs Name") {
	   for (int i = 0; i < hospital[Hindex].clinicsCount; i++) {
			if (newclorsp == hospital[Hindex].HospitalClinics[i]) {
				 AD_stateHSC2->Text = "this Clinic exist!";
				 return;
			}
	   }
	   hospital[Hindex].HospitalClinics[hospital[Hindex].clinicsCount ] = newclorsp;
	   AD_stateHSC2->Text = "Clinic Added";
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
		  PA_modifyRstate_lab->Text = "Edit done";
		  user[Lindex].reservation[Rindex].PName = Rtemp.PName;
		  // FName_PA_lab->Text = gcnew String(Rtemp.PName.c_str());
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
		  if (f.validPhoneNumber(temp.phonenumber) == false) {
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
			   user[Lindex].reservation[Rindex].numberOfDays = Rtemp.numberOfDays; 
			   user[Lindex].reservation[Rindex].surgeryprice = user[Lindex].reservation[Rindex].hospital.surgeryprice;
			   user[Lindex].reservation[Rindex].BedPrice = Rtemp.numberOfDays * user[Lindex].reservation[Rindex].hospital.BedsPrice;
			   user[Lindex].reservation[Rindex].Totalprice = user[Lindex].reservation[Rindex].BedPrice + user[Lindex].reservation[Rindex].surgeryprice;
			   user[Lindex].reservation[Rindex].numberOfDays = Rtemp.numberOfDays;
			   int roomnumber = 0;

		  }
	 else {
		  if (PA_OrderOflist->Text == "Select new hospital") {
			   string Hsearch = context.marshal_as<string>(PA_listOfHRtypeRdays->Text);
			   searchHindex(Hsearch);
			   if (hospital[Hindex].HospitalID == user[Lindex].reservation[Rindex].hospital.HospitalID) {
					PA_StateOflist->Text = "No changes made";
					return;
			   }
			   if (user[Lindex].reservation[Rindex].ReservationType == "Surgery") {
					for (int i = 0; i < hospitalCount; i++) {
						 if (user[Lindex].reservation[Rindex].hospital.HospitalID == hospital[i].HospitalID) {
							  hospital[i].PatientReservationRooms++;
							  hospital[Hindex].PatientReservationRooms--;
							  break;

						 }
					}
			   }
			   else {
			   user[Lindex].reservation[Rindex].ReservationPrice = hospital[Hindex].ReservationPrice;
			   }
			   if (user[Lindex].reservation[Rindex].ReservationType == "Surgery") {
					bool exist = false;
					int roomnumber = 50 + rand() % 500;
					for (int i = 7; i < userCount; i++) {
						 for (int j = 0; j < user[i].reserCount; j++) {
							  if (user[i].reservation[j].hospital.HospitalID == Rtemp.hospital.HospitalID) {
								   if (user[i].reservation[j].PatientReservationRoom == to_string(roomnumber)) {
										exist = true;
										roomnumber = 50 + rand() % 500;

										break;
								   }


							  }
						 }
						 if (exist == true) {
							  i = 7;
							  exist = false;
						 }
					}
					user[Lindex].reservation[Rindex].PatientReservationRoom = to_string(roomnumber);
			   }
			   user[Lindex].reservation[Rindex].hospital = hospital[Hindex];

			   PA_StateOflist->Text = "edit done";
		  }
		  else if (PA_OrderOflist->Text == "Select new Days") {
			   string seaDay = context.marshal_as<string>(PA_listOfHRtypeRdays->Text);
			   searchDindex(seaDay);
			   if (user[Lindex].reservation[Rindex].ReservationDay == ReservationDays[Dindex]) {
					PA_modifyRstate_lab->Text = "No changes made";
					return;
			   }

			   user[Lindex].reservation[Rindex].ReservationDay = ReservationDays[Dindex];
		  }
		  else if (PA_OrderOflist->Text == "Select new Specialty") {
			   Rtemp.HospitalSpecialty = context.marshal_as<string>(PA_listOfHRtypeRdays->Text);
			 //  searchSPindex(Rtemp.HospitalSpecialty);
			  Rtemp.numberOfDays= stoi(context.marshal_as<string>(PA_Rnumbofdays->Text));
			   user[Lindex].reservation[Rindex].HospitalSpecialty = Rtemp.HospitalSpecialty;
			   user[Lindex].reservation[Rindex].surgeryprice = user[Lindex].reservation[Rindex].hospital.surgeryprice;
			   user[Lindex].reservation[Rindex].BedPrice= Rtemp.numberOfDays * user[Lindex].reservation[Rindex].hospital.BedsPrice;
			   user[Lindex].reservation[Rindex].Totalprice= user[Lindex].reservation[Rindex].BedPrice+ user[Lindex].reservation[Rindex].surgeryprice;
			   user[Lindex].reservation[Rindex].numberOfDays = Rtemp.numberOfDays;
			   int roomnumber = 0;
			   bool exist = false;
			   roomnumber = 50 + rand() % 500;
			   for (int i = 5; i < userCount; i++) {
					for (int j = 0; j < user[i].reserCount; j++) {
						 if (user[i].reservation[j].hospital.HospitalID == Rtemp.hospital.HospitalID) {
							  if (user[i].reservation[j].PatientReservationRoom == to_string(roomnumber)) {
								   exist = true;
								   roomnumber = 50 + rand() % 500;

								   break;
							  }


						 }
					}
					if (exist == true) {
						 i = 5;
						 exist = false;
					}
			   }
			   user[Lindex].reservation[Rindex].PatientReservationRoom = to_string(roomnumber);

			   PA_StateOflist->Text = "edit done";
		  }
		  else if (PA_OrderOflist->Text == "Select new Clinic") {
			   Rtemp.HospitalClinic = context.marshal_as<string>(PA_listOfHRtypeRdays->Text);
			   searchCLindex(Rtemp.HospitalClinic);
			  
			   user[Lindex].reservation[Rindex].HospitalClinic = Rtemp.HospitalClinic;
			   user[Lindex].reservation[Rindex].ReservationPrice = user[Lindex].reservation[Rindex].hospital.ReservationPrice;
			   user[Lindex].reservation[Rindex].surgeryprice = 0;
			   user[Lindex].reservation[Rindex].BedPrice = 0;
			   user[Lindex].reservation[Rindex].Totalprice = user[Lindex].reservation[Rindex].ReservationPrice;
			   user[Lindex].reservation[Rindex].PatientReservationRoom ="NONE";
			   PA_StateOflist->Text = "edit done";
			   PA_modifyRord_lab->Text = "Order text";
			   PA_OrderOflist->Text = "Order text";
		  }
	 }

	PA_modifyRstate_lab->Text = "edit done";
	PA_StateOflist->Text = "edit done";
	 PA_modifyRord_TB->Text == "";
}
void GUISP::mainPage::EditPersonalInfo() {
	 Users Ptemp;
	 string Stemp;
	 if (user[Lindex].userType == "Patient") {
		  if (PA_editRemain_lab->Text == "New Full Name") {
			   Ptemp.name = context.marshal_as<string>(PA_editRemain_TB->Text);
			   if (Ptemp.name == user[Lindex].name) {
					PA_editRemain_state->Text = "No changes made";
					return;
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
			   Stemp = "";
			   for (int i = 0; i < temp.username.size(); i++) {
					if (temp.username[i] != ' ') {
						 Stemp += temp.username[i];
					}
			   }
			   temp.username = Stemp;
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
			    Stemp = "";
			   for (int i = 0; i < temp.username.size(); i++) {
					if (temp.username[i] != ' ') {
						 Stemp += temp.username[i];
					}
			   }
			   temp.username = Stemp;
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
	 Users temp;
	 string conpass;
	 temp.name = context.marshal_as<string>(regis_name_textbox->Text);
	 temp.username = context.marshal_as<string>(regis_username_textbox->Text);
	 temp.phonenumber = context.marshal_as<string>(regis_phonenumber_textbox->Text);
	 temp.age= stoi(context.marshal_as<string>(regis_age_textbox->Text));
	 temp.password = context.marshal_as<string>(regis_Pass_TBox->Text);
	 temp.gender= context.marshal_as<string>(regis_selectgender->Text);
	 conpass = context.marshal_as<string>(regis_ConPass_TBox->Text);
	 for (int i = 0; i < userCount; i++) {
		  if (user[i].username == temp.username) {
			   regis_state->Text = "This user already exist";
		  }
	 }
	// temp.username.erase(std::remove_if(temp.username.begin(), temp.username.end());
	 string Stemp="";
	 for(int i=0;i<temp.username.size();i++){
		  if(temp.username[i]!=' '){
			 Stemp += temp.username[i];
		  }
	 }
			   temp.username = Stemp;

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
	 regis_selectgender->Text = "Select Gender";
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
		  if (hospital[i].HospitalClinics[i] == Ser) {
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
		  if (hospital[i].HospitalSpecialties[i] == Ser) {
			   SPindex = i;
			   break;
		  }
	 }

}