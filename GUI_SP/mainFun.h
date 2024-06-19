#pragma once
#include"Structs.h"
#include"mainPage.h"

class mainFun
{
public:
	 void DefinitonOfVariable(Hospitals hospital[]) {
		  ifstream HospitalInfo("Hospitalinfo.txt", ios::app);
		  //HospitalInfo >> hospitalCount;
		  for (int i = 0; !HospitalInfo.eof(); i++) {
			   getline(HospitalInfo, hospital[i].HospitalName);
			   HospitalInfo >> hospital[i].HospitalID >> hospital[i].PatientReservationRooms >> hospital[i].ReservationPrice >> hospital[i].BedsPrice >> hospital[i].surgeryprice >> hospital[i].HospitalRate >> hospital[i].specialtiesCount >> hospital[i].clinicsCount;
			   for (int j = 0; j < hospital[i].specialtiesCount; j++)
					HospitalInfo >> hospital[i].HospitalSpecialties[j];
			   for (int j = 0; j < hospital[i].clinicsCount; j++)
					HospitalInfo >> hospital[i].HospitalClinics[j];
			   for (int x = 1; x <= 3; x++)
					HospitalInfo.ignore();
			   hospitalCount++;
		  }
		  HospitalInfo.close();
	 }
	 void DefinitonOfVariable(Users user[], Hospitals hos[]) {
		  ifstream UserInfo("UserInfo.txt", ios::app);

		  for (int i = 0; !UserInfo.eof(); i++) {
			   UserInfo >> user[i].id >> user[i].username >> user[i].age >> user[i].email >> user[i].gender >> user[i].phonenumber >> user[i].password >> user[i].reserCount;
			   getline(UserInfo, user[i].name);
			   if (user[i].email.find("@Hadmin.com") != string::npos) {
					user[i].userType = "Admin";
					delete[] user[i].reservation;
					user[i].reservation = NULL;

			   }
			   if (user[i].userType == "Patient") { //definition of reser
					if (user[i].reserCount < NumberOfReservation && user[i].reserCount>0) {
						 for (int j = 0; j < user[i].reserCount; j++) {

							  UserInfo >> user[i].reservation[j].ReservtionID >> user[i].reservation[j].PAge >> user[i].reservation[j].hospital.HospitalID >> user[i].reservation[j].numberOfDays >> user[i].reservation[j].BedPrice >> user[i].reservation[j].surgeryprice >> user[i].reservation[j].Totalprice >> user[i].reservation[j].ReservationType >> user[i].reservation[j].ReservationDay >> user[i].reservation[j].HospitalSpecialty >> user[i].reservation[j].HospitalClinic >> user[i].reservation[j].PatientReservationRoom >> user[i].reservation[j].PhoneNumber;
							  for (int z = 0; z < hospitalCount; z++) {
								   if (user[i].reservation[j].hospital.HospitalID == hos[z].HospitalID)
										user[i].reservation[j].hospital = hos[z];

								   if (user[i].reservation[j].ReservationType != "Surgery")
										user[i].reservation[j].ReservationPrice = hos[z].ReservationPrice;
								   // else
										//  hos[z].PatientReservationRooms -= 1;
								   user[i].totalpaid += user[i].reservation[j].Totalprice;
							  }
							  UserInfo.ignore();
							  getline(UserInfo, user[i].reservation[j].PName);
							  reservationID = user[i].reservation[j].ReservtionID;
						 }
					}
			   }
			   userCount++;
		  }
		  reservationID++;
		  UserInfo.close();
	 }
	 void SaveData(Hospitals hospital[]) {
		  ofstream ExportHospitalInfo("Hospitalinfo.txt");
		  //ExportHospitalInfo << hospitalCount;
		  for (int i = 0; i < hospitalCount; i++) {
			   ExportHospitalInfo << hospital[i].HospitalName << endl;
			   ExportHospitalInfo << hospital[i].HospitalID << " " << hospital[i].PatientReservationRooms << " " << hospital[i].ReservationPrice << " " << hospital[i].BedsPrice << " " << hospital[i].surgeryprice << " " << hospital[i].HospitalRate << " " << hospital[i].specialtiesCount << " " << hospital[i].clinicsCount << endl;
			   for (int j = 0; j < hospital[i].specialtiesCount; j++)
					ExportHospitalInfo << hospital[i].HospitalSpecialties[j] << " ";
			   ExportHospitalInfo << endl;
			   for (int j = 0; j < hospital[i].clinicsCount; j++)
					ExportHospitalInfo << hospital[i].HospitalClinics[j] << " ";
			   if (i != (hospitalCount - 1)) {
					ExportHospitalInfo << '\n';
					ExportHospitalInfo << '\n';
			   }

		  }
		  ExportHospitalInfo.close();

	 }
	 void SaveData(Users user[]) {
		  ofstream ExportUserInfo("UserInfo.txt");
		  for (int i = 0; i < userCount; i++) {
			   ExportUserInfo << user[i].id << " " << user[i].username << " " << user[i].age << " " << user[i].email << " " << user[i].gender << " " << user[i].phonenumber << " " << user[i].password << " " << user[i].reserCount << user[i].name;
			   if (i != userCount - 1 || user[i].reserCount != 0)
					ExportUserInfo << endl;
			   if (user[i].userType == "Patient") { //definition of reser
					if (user[i].reserCount < NumberOfReservation && user[i].reserCount>0) {
						 for (int j = 0; j < user[i].reserCount; j++) {

							  ExportUserInfo << user[i].reservation[j].ReservtionID << " " << user[i].reservation[j].PAge << " " << user[i].reservation[j].hospital.HospitalID<< " " << user[i].reservation[j].numberOfDays << " " << user[i].reservation[j].BedPrice << " " << user[i].reservation[j].surgeryprice << " " << user[i].reservation[j].Totalprice << " " << user[i].reservation[j].ReservationType << " " << user[i].reservation[j].ReservationDay << " " << user[i].reservation[j].HospitalSpecialty << " " << user[i].reservation[j].HospitalClinic << " " << user[i].reservation[j].PatientReservationRoom << " " << user[i].reservation[j].PhoneNumber << " " << user[i].reservation[j].PName;
							  if (j != user[i].reserCount - 1 || i != userCount - 1)
								   ExportUserInfo << endl;
						 }
					}
			   }
		  }
		  ExportUserInfo.close();
	 }
	 void LogOut(bool& checkLog, int& PIndex) {
		  checkLog = true;
		  PIndex = -1;
		  cout << "Log out.....\n";

	 }
	 void PrintHospitalData(Hospitals hospital[]) {
		  for (int i = 0; i < hospitalCount; i++) {
			   cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate: " << hospital[i].HospitalRate << endl;
			   cout << "-----------------------------------------------\n";
			   cout << "         Hospital Specialties         \n";
			   cout << "         --------------------         \n";
			   for (int j = 0; j < hospital[i].specialtiesCount; j++)
			   {
					cout << j + 1 << "-" << hospital[i].HospitalSpecialties[j] << ". ";
					if (j % 2 != 0)
						 cout << "\n";
			   }
			   cout << "\n-----------------------------------------------\n";
			   cout << "         Hospital Clinics         \n";
			   cout << "         ----------------         \n";
			   for (int j = 0; j < hospital[i].clinicsCount; j++)
			   {
					cout << j + 1 << "-" << hospital[i].HospitalClinics[j] << ". ";
					if (j % 2 != 0)
						 cout << "\n";
			   }
			   cout << "\n============================================\n";
		  }
	 }
	 void PrintPatientData(Users user[]) {
		  int numberOfPatient = 1;
		  for (int i = 0; i < userCount; i++)
		  {
			   if (user[i].userType != "Admin") {
					//npos--> not-found position 
					cout << "--------------------\n";
					cout << "patient #" << numberOfPatient << " :\n";
					cout << "ID: " << user[i].id << "\nAge: " << user[i].age << "\nName:" << user[i].name << "\nEmail: " << user[i].email << "\nUsername: " << user[i].username << endl;
					numberOfPatient++;
			   }
		  }
	 }

	 void SortHospitalByName(Hospitals hospital[]) {
		  char x;
		  for (int i = 0; i < hospitalCount - 1; ++i) {
			   for (int j = i + 1; j < hospitalCount; j++) {
					if (hospital[i].HospitalName > hospital[j].HospitalName)
						 swap(hospital[i], hospital[j]);
			   }
		  }
		  cout << "Sort Done\nDo you want new list of Hospitals(y/n)?: ";
		  cin >> x;
		  if (x == 'y' || x == 'Y') {
			   for (int i = 0; i < hospitalCount; ++i) {
					cout << i + 1 << "-" << hospital[i].HospitalName << endl;

			   }
		  }

	 }
	 void SortHospitalByRating(Hospitals hospital[]) {
		  char x;
		  for (int i = 0; i < hospitalCount - 1; ++i) {
			   for (int j = i + 1; j < hospitalCount; j++) {
					if (hospital[i].HospitalRate > hospital[j].HospitalRate)
						 swap(hospital[i], hospital[j]);
			   }
		  }
		  cout << "Sort Done\nDo you want new list of Hospitals(y/n)?: ";
		  cin >> x;
		  if (x == 'y' || x == 'Y') {
			   for (int i = 0; i < hospitalCount; ++i) {
					cout << i + 1 << "-" << hospital[i].HospitalName << "( " << hospital[i].HospitalRate << " )" << endl;

			   }
		  }
	 }
	 void SortByBedsAvailable(Hospitals hospital[]) {
		  char x;
		  for (int i = 0; i < hospitalCount - 1; ++i) {
			   for (int j = i + 1; j < hospitalCount; j++) {
					if (hospital[i].PatientReservationRooms > hospital[j].PatientReservationRooms)
						 swap(hospital[i], hospital[j]);
			   }
		  }
		  cout << "Sort Done\nDo you want new list of Hospitals(y/n)?: ";
		  cin >> x;
		  if (x == 'y' || x == 'Y') {
			   for (int i = 0; i < hospitalCount; ++i) {
					cout << i + 1 << "-" << hospital[i].HospitalName << "( " << hospital[i].PatientReservationRooms << " )" << endl;

			   }
		  }
	 }
	 void SortByBedsPrice(Hospitals hospital[]) {
		  char x;
		  for (int i = 0; i < hospitalCount - 1; ++i) {
			   for (int j = i + 1; j < hospitalCount; j++) {
					if (hospital[i].BedsPrice > hospital[j].BedsPrice)
						 swap(hospital[i], hospital[j]);
			   }
		  }
		  cout << "Sort Done\nDo you want new list of Hospitals(y/n)?: ";
		  cin >> x;
		  if (x == 'y' || x == 'Y') {
			   for (int i = 0; i < hospitalCount; ++i) {
					cout << i + 1 << "-" << hospital[i].HospitalName << "(" << hospital[i].BedsPrice << ")" << endl;
			   }
		  }
	 }
	 //admin
	 bool loginAsAdmin(Users user[], Users& temp) {
		  for (int i = 0; i < userCount; i++) {
			   if (temp.username == user[i].username && (temp.password == user[i].password || temp.id == user[i].id) && user[i].userType == "Admin") {
					temp = user[i];
					Lindex = i;
					return true;

			   }
		  }
		  return false;
	 }
	 void DeleteHospital(Hospitals hospital[], string hsptlname)
	 {



		  bool found = false;

		  for (int i = 0; i < hospitalCount; i++)
		  {
			   if (hsptlname == hospital[i].HospitalName)
			   {
					found = true;
					cout << "search successfully" << endl;
					hospital[i].HospitalID = 0;
					hospital[i].PatientReservationRooms = 0;
					hospital[i].ReservationPrice = 0;
					hospital[i].BedsPrice = 0;
					hospital[i].HospitalRate = 0;
					hospital[i].HospitalName = "";
					for (int j = 0; j < hospital[i].specialtiesCount; j++)
					{//hospital[i].specialtiesCount to stop work with garbage 
						 hospital[i].HospitalSpecialties[j] = "";
					}
					for (int j = 0; j < hospital[i].clinicsCount; j++)
					{//hospital[i].clinicsCount->  same as specialtiesCount
						 hospital[i].HospitalClinics[j] = "";
					}
					if (i != (hospitalCount - 1))
						 swap(hospital[i], hospital[hospitalCount - 1]);//edit -> Check the hospital not the last one
					hospitalCount--;
			   }
		  }


	 }
	 //patient
	 void registerpatient(Users patient[], Users temp)
	 {

		  bool usernameExists;

		  usernameExists = false;



		  for (int i = 0; i < userCount; i++)
		  {
			   if (patient[i].username == temp.username)
			   {

					usernameExists = true;
					break;
			   }
		  }
		  /* bool phoneNumExist = true;
		   do {
				int counter = 5;

				for (int i = 0; i < userCount; i++) {

					 if (temp.phonenumber == patient[i].phonenumber) {
						  cout << "This Phone number is exist try again\n";
						  phoneNumExist = true;
						  break;
					 }
					 else {
						  phoneNumExist = false;
					 }

				}
		   } while (phoneNumExist);
		   may be make it in GUI
		   */


		   /*if (choiceGender == 1)
				newpatient.gender = "Male";
		   else
				newpatient.gender = "Female";
				may be important */
		  temp.email = temp.username + "@Huser.com";

		  temp.id = userID;
		  userID++;
		  patient[userCount] = temp;
		  userCount++;
	 }
	 bool loginAsPatient(Users patient[], Users& temp) {

		  bool loginstatus = false;
		  for (int i = 0; i < userCount; i++) {
			   if (patient[i].username == temp.username && (temp.password == patient[i].password || temp.id == patient[i].id) && patient[i].userType == "Patient")
			   {
					temp = patient[i];
					Lindex = i;
					loginstatus = true;
					break;
			   }
		  }
		  return  loginstatus;
	 }
	 void viewHospitals(Hospitals hospital[]) {

		  cout << "Available hospitals : - " << "\n";
		  for (int i = 0; i < hospitalCount; i++)
		  {
			   cout << i + 1 << "- " << hospital[i].HospitalName << endl;
		  }
	 }
	 void viewHospitalInfo(Hospitals hospital[], string Hospitalname) {

		  bool found = false;

		  for (int i = 0; i < hospitalCount; i++)
		  {
			   if (Hospitalname == hospital[i].HospitalName)
			   {
					found = true;
					cout << "\n.......................\n";
					cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate: " << hospital[i].HospitalRate << endl;
					cout << "------------------------------------------------\n";
					cout << "         Hospital Specialties         \n";
					cout << "         --------------------         \n";
					for (int j = 0; j < hospital[i].specialtiesCount; j++)
					{
						 cout << j + 1 << "-" << hospital[i].HospitalSpecialties[j] << ". ";
						 if ((j - 1) % 2 == 0)
							  cout << "\n";
					}
					cout << "\n-----------------------------------------------\n";
					cout << "         Hospital Clinics         \n";
					cout << "         ----------------         \n";
					for (int j = 0; j < hospital[i].clinicsCount; j++)
					{
						 cout << j + 1 << "-" << hospital[i].HospitalClinics[j] << ". ";
						 if ((j - 4) % 5 == 0)
							  cout << "\n";
					}
					cout << "\n================================================\n";
			   }
		  }


	 }

	 void editpatientinfo(Users patient[], int PIndex) {

		  int editChoice = 0;
		  char choice = 'y';

		  while (true) {
			   cout << "Select what you want to edit:\n1. Name\n2. Age\n3. Username\n4. Password\n5. Phone Number\n";
			   cout << "Enter your choice: ";
			   //infinit(editChoice, 5, 1);
			   switch (editChoice)
			   {
			   case 1:
			   {
					cin.ignore();
					cout << "Enter new full name: ";
					getline(cin, patient[PIndex].name);
					break;
			   }
			   case 2:
			   {
					int age;
					bool validAge = false;

					do {
						 cout << "\nEnter new age: ";
						 cin >> age;
						 if (age < 18) {
							  char choice;
							  cout << "\nInvalid age. Age must be 18 or older.\n";
							  bool correctchoice = false;
							  while (correctchoice == false)
							  {

								   cout << "Enter 'v' to enter a valid age or 'e' to exit: ";
								   cin >> choice;
								   if (choice == 'e' || choice == 'E' || choice == 'v' || choice == 'V') {
										correctchoice = true;

								   }
								   else
										cout << "\nInvalid option selected.\n";
							  }
							  if (choice == 'e' || choice == 'E') {
								   return;
							  }

						 }
						 else if (age >= 18)
						 {
							  validAge = true;
						 }
					} while (!validAge);
					patient[PIndex].age = age;
					break;
			   }
			   case 3:
			   {
					string newusername;
					bool usernameExists;
					do {
						 usernameExists = false;

						 cout << "\nEnter new username: ";
						 cin >> newusername;

						 for (int j = 0; j < userCount; j++)
						 {
							  if (patient[j].username == newusername)
							  {
								   cout <<
										"\nUsername already exists. Please choose a different username.\n";
								   usernameExists = true;
								   break;
							  }
						 }
					} while (usernameExists);

					patient[PIndex].username = newusername;
					patient[PIndex].email = newusername + "@Huser.com";

					break;
			   }
			   case 4:
			   {
					string oldpassword;
					int id;
					cout << "Enter the old password: ";
					cin >> oldpassword;
					if (oldpassword == patient[PIndex].password) {
						 cout << "Enter new password: ";
						 cin >> patient[PIndex].password;
					}
					else {
						 cout << "Wrong Password\n";
						 cout << "Enter your ID:";
						 cin >> id;
						 if (id == patient[PIndex].id) {
							  cout << "Enter new password: ";
							  cin >> patient[PIndex].password;

						 }
						 else {
							  cout << "Wrong ID . Sorry you can not edit your password\n";
							  return;
						 }
					}
					break;
			   }
			   case 5:
			   {
					string phoneNumber;
					do {
						 cout << "Enter your Phone Number (Example : 01*********): ";
						 cin >> phoneNumber;
						 if (!validPhoneNumber(phoneNumber)) {
							  cout << "Invalid phone number. Please try again.\n";
						 }
					} while (!validPhoneNumber(phoneNumber));
					patient[PIndex].phonenumber = phoneNumber;
					cout << "Phone number accepted.\n";
					break;
			   }



			   }
			   cout << "Information updated successfully!\n";
			   cout << "Do you want to edit something else? (y/n): ";
			   cin >> choice;
			   if (choice == 'y' || choice == 'Y')
					continue;
			   else
					break;



			   //  cin.ignore();
		  }
	 }
	 void makeReservation(Users user[], Hospitals hospital[], Reservations Rtemp) {
		  bool exist=false;
		  if (user[Lindex].reserCount < NumberOfReservation) {
			   if (Rtemp.ReservationType == "Surgery") {
					int roomnumber =  50 + rand() % 500;
					
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
					Rtemp.PatientReservationRoom = to_string(roomnumber);
					hospital[Hindex].PatientReservationRooms -= 1;
					Rtemp.BedPrice = Rtemp.numberOfDays * (hospital[Hindex].BedsPrice);
					Rtemp.surgeryprice = hospital[Hindex].surgeryprice;
					Rtemp.Totalprice = Rtemp.surgeryprice + Rtemp.BedPrice;
			   }
			   else if (Rtemp.ReservationType == "Check-up") {
			   Rtemp.ReservationPrice = hospital[Hindex].ReservationPrice;
			   Rtemp.Totalprice = hospital[Hindex].ReservationPrice;
			   }
			   Rtemp.ReservtionID = reservationID;
		  }	
		  
		  user[Lindex].totalpaid += Rtemp.Totalprice;
		  user[Lindex].reservation[user[Lindex].reserCount] = Rtemp;
		  user[Lindex].reserCount++;
		  reservationID++;
		  /*Rtemp.numberOfDays = 0;
		  Rtemp.HospitalSpecialty = "NOT-RESERVED";
		  Rtemp.HospitalClinic = "NOT-RESERVED";
		  Rtemp.PatientReservationRoom = "NONE";
		  Rtemp.BedPrice = 0;
		  Rtemp.ReservationDay = "";
		  Rtemp.ReservationPrice = 0;
		  Rtemp.surgeryprice = 0;
		  Rtemp.Totalprice = 0;*/
	 }
	
	 void showreservation(Users patient[], Hospitals hospital[], int PIndex) {
		  int search;
		  bool correctid = false;
		  do {
			   if (patient[PIndex].reserCount == 0) {
					cout << ".......................\n";
					cout << "You haven't reserved anything yet.\n";
					break;
			   }
			   correctid = false;
			   cout << "Enter your Resevation ID: ";
			   cin >> search;
			   for (int i = 0; i < NumberOfReservation; i++) {

					if (patient[PIndex].reservation[i].ReservtionID == search) {
						 correctid = true;
						 if (patient[PIndex].reservation[i].ReservationType == "Surgery") {
							  cout << ".......................\n";
							  cout << "Your reservation:-" << endl;
							  cout << "Patient's Name: " << patient[PIndex].reservation[i].PName << endl;
							  cout << "Patient's Age: " << patient[PIndex].reservation[i].PAge << endl;
							  cout << "Reservatiion ID: " << patient[PIndex].reservation[i].ReservtionID << endl;
							  cout << "Hospital ID: " << patient[PIndex].reservation[i].hospital.HospitalID << endl;
							  cout << "Hospital Name: " << patient[PIndex].reservation[i].hospital.HospitalName << endl;
							  cout << "Hospital Rate: " << patient[PIndex].reservation[i].hospital.HospitalRate << endl;
							  cout << "Reservation Type: " << patient[PIndex].reservation[i].ReservationType << endl;
							  cout << "Hospital Specialty: " << patient[PIndex].reservation[i].HospitalSpecialty << endl;
							  cout << "Patient Room: " << patient[PIndex].reservation[i].PatientReservationRoom << endl;
							  cout << "The number of days spent: " << patient[PIndex].reservation[i].numberOfDays << endl;
							  cout << "Reservation Day (First day in the room): " << patient[PIndex].reservation[i].ReservationDay << endl;
							  cout << "Bed Price: " << patient[PIndex].reservation[i].hospital.BedsPrice << endl;
							  cout << "surgery price: " << patient[PIndex].reservation[i].surgeryprice << endl;
							  cout << "Total Reservation Price :" << patient[PIndex].reservation[i].Totalprice << endl;
							  break;
						 }
						 else if (patient[PIndex].reservation[i].ReservationType == "Check-up") {
							  cout << ".......................\n";
							  cout << "Your reservation:-" << endl;
							  cout << "Patient's Name: " << patient[PIndex].reservation[i].PName << endl;
							  cout << "Patient's Age: " << patient[PIndex].reservation[i].PAge << endl;
							  cout << "Reservatiion ID: " << patient[PIndex].reservation[i].ReservtionID << endl;
							  cout << "Hospital ID: " << patient[PIndex].reservation[i].hospital.HospitalID << endl;
							  cout << "Hospital Name: " << patient[PIndex].reservation[i].hospital.HospitalName << endl;
							  cout << "Hospital Rate: " << patient[PIndex].reservation[i].hospital.HospitalRate << endl;
							  cout << "Reservation Type: " << patient[PIndex].reservation[i].ReservationType << endl;
							  cout << "Hospital Clinic: " << patient[PIndex].reservation[i].HospitalClinic << endl;
							  cout << "Reservation Day: " << patient[PIndex].reservation[i].ReservationDay << endl;
							  cout << "Reservation Price: " << patient[PIndex].reservation[i].ReservationPrice << endl;
							  break;
						 }
					}
			   }
			   if (!correctid)
			   {
					cout << "---------------------------------\n";
					cout << "Invalid Resevation ID\n";
					return;
			   }
		  } while (!correctid);
	 }
	 void cancelreservation(Users patient[],Hospitals hospital[], int PIndex) {


		  cout << "Enter your Resevaion ID: ";

		  

			   for (int j = 0; j < hospitalCount; j++) {
					if (patient[PIndex].reservation[Rindex].ReservationType == "Surgery" && patient[PIndex].reservation[Rindex].hospital.HospitalName == hospital[j].HospitalName) {
						 hospital[j].PatientReservationRooms += 1;
						 break;
					}
			   }

			   patient[PIndex].totalpaid -= patient[PIndex].reservation[Rindex].Totalprice;
			   patient[PIndex].reservation[Rindex].PName = " ";
			   patient[PIndex].reservation[Rindex].PAge = 0;
			   patient[PIndex].reservation[Rindex].ReservtionID = 0;
			   patient[PIndex].reservation[Rindex].hospital.HospitalName = " ";
			   patient[PIndex].reservation[Rindex].ReservationType = " ";
			   patient[PIndex].reservation[Rindex].HospitalSpecialty = "NOT RESERVED";
			   patient[PIndex].reservation[Rindex].HospitalClinic = "NOT RESERVED";
			   patient[PIndex].reservation[Rindex].PatientReservationRoom = " ";
			   patient[PIndex].reservation[Rindex].BedPrice = 0;
			   patient[PIndex].reservation[Rindex].ReservationDay = " ";
			   patient[PIndex].reservation[Rindex].ReservationPrice = 0;
			   patient[PIndex].reservation[Rindex].surgeryprice = 0;
			   patient[PIndex].reservation[Rindex].Totalprice = 0;
			  
			   if (Rindex != patient[PIndex].reserCount - 1)
					swap(patient[PIndex].reservation[Rindex], patient[PIndex].reservation[patient[PIndex].reserCount - 1]);
			   Rindex = -1;
			   patient[PIndex].reserCount--;//update
			 
	 }
	 bool validPhoneNumber(string phoneNumber) {
		  if (phoneNumber.size() != 11 || phoneNumber[0] != '0' || phoneNumber[1] != '1') {
			   return false;
		  }
		  return true;
	 }
};
