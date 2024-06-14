#pragma once
#include"Structs.h"

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

							  UserInfo >> user[i].reservation[j].ReservtionID >> user[i].reservation[j].PAge >> user[i].reservation[j].hospital.HospitalID >> user[i].reservation[j].numberOfDays >> user[i].reservation[j].BedPrice >> user[i].reservation[j].surgeryprice >> user[i].reservation[j].Totalprice >> user[i].reservation[j].ReservationType >> user[i].reservation[j].ReservationDay >> user[i].reservation[j].HospitalSpecialty >> user[i].reservation[j].HospitalClinic >> user[i].reservation[j].PatientReservationRoom;
							  for (int z = 0; z < hospitalCount; z++) {
								   if (user[i].reservation[j].hospital.HospitalID == hos[z].HospitalID)
										user[i].reservation[j].hospital = hos[z];

								   if (user[i].reservation[j].ReservationType != "Surgery")
										user[i].reservation[j].ReservationPrice = hos[z].ReservationPrice;
								   // else
										//  hos[z].PatientReservationRooms -= 1;
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

							  ExportUserInfo << user[i].reservation[j].ReservtionID << " " << user[i].reservation[j].PAge << " " << user[i].reservation[j].hospital.HospitalID << " " << user[i].reservation[j].numberOfDays << " " << user[i].reservation[j].BedPrice << " " << user[i].reservation[j].surgeryprice << " " << user[i].reservation[j].Totalprice << " " << user[i].reservation[j].ReservationType << " " << user[i].reservation[j].ReservationDay << " " << user[i].reservation[j].HospitalSpecialty << " " << user[i].reservation[j].HospitalClinic << " " << user[i].reservation[j].PatientReservationRoom << " " << user[i].reservation[j].PName;
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
			   if (temp.username == user[i].username && (temp.password == user[i].password||temp.id==user[i].id) && user[i].userType == "Admin") {
					temp = user[i];
					return true;

			   }
		  }
		  return false;
	 }
	 void AddHospital(Hospitals hos[])
	 {
		  char choice;
		  do {
			   string hosname = "";
			   bool check = true;
			   cout << " .......................\n";
			   cout << "Please enter the name of the Hospital to Add: ";
			   getline(cin, hosname);
			   for (int i = 0; i < hospitalCount; i++)
			   {
					if (hosname == hos[i].HospitalName)
					{
						 check = false;
						 break;
					}
			   }

			   if (check)
			   {
					int ID;
					bool CheckID = false;
					hospitalCount++;
					hos[hospitalCount - 1].HospitalName = hosname;
					cout << "Please enter the ID of the Hospital to Add (Must be 7 digi): ";
					while (!CheckID) {
						 cin >> ID;
						 if ((ID > 1000000) && (ID < 10000000)) {
							  for (int i = 0; i < hospitalCount - 1; i++) {
								   if (hos[i].HospitalID == ID) {
										cout << "This ID is exist !\nPlease enter another ID: ";
										CheckID = false;
										break;
								   }
								   else
										CheckID = true;
							  }
						 }
						 else {
							  cout << "Invalid ID! Try again:";
							  continue;

						 }

					}
					hos[hospitalCount - 1].HospitalID = ID;


					cout << "Please enter the Nunmber of beds available of the Hospital to Add: ";
					cin >> hos[hospitalCount - 1].PatientReservationRooms;

					cout << "Please enter the Beds price per night of the Hospital to Add: ";
					cin >> hos[hospitalCount - 1].BedsPrice;

					cout << "Please enter the Reservation price for check-up of the Hospital to Add: ";
					cin >> hos[hospitalCount - 1].ReservationPrice;

					cout << "Please enter the Hospital surgeryprice of the Hospital to Add: ";
					cin >> hos[hospitalCount - 1].surgeryprice;

					cout << "Please enter the Hospital Rate of the Hospital to Add(0->5): ";
					do {
						 cin >> hos[hospitalCount - 1].HospitalRate;
						 if (hos[hospitalCount - 1].HospitalRate <= 5 && hos[hospitalCount - 1].HospitalRate >= 0)
							  break;
						 cout << "Wrong rate.\nPlease try again: ";
					} while (true);

					hos[hospitalCount - 1].specialtiesCount = hos[0].specialtiesCount;
					hos[hospitalCount - 1].clinicsCount = hos[0].clinicsCount;

					for (int j = 0; j < hos[0].specialtiesCount; j++)
						 hos[hospitalCount - 1].HospitalSpecialties[j] = hos[0].HospitalSpecialties[j];

					for (int z = 0; z < hos[0].clinicsCount; z++)
						 hos[hospitalCount - 1].HospitalClinics[z] = hos[0].HospitalClinics[z];
			   }
			   else
					cout << "Hospital Elready Exists\n";

			   cout << "Press 'y' to Add another hospital: ";
			   cin >> choice;
			   if (choice != 'y' || choice != 'Y')
					cout << '\n';
			   cin.ignore(); //added
		  } while (choice == 'y' || choice == 'Y');
	 }
	 void ModifyHospital(Hospitals hospital[])
	 {
		  char answer;
		  char AD;
		  do
		  {
			   string hsptlname = "";
			   int ans;
			   string Hospitalclinics = "";
			   string HospitalSpecialties = "";
			   bool found = false;
			   bool Exist = false;
			   int choice = 0;
			   bool Checkans = false;
			   bool checkChoice = false, first = true;
			   cout << "please enter hospitalname: ";
			   getline(cin, hsptlname);
			   for (int i = 0; i < hospitalCount; i++)
			   {
					if (hospital[i].HospitalName == hsptlname)
					{
						 bool CheckID = false;
						 int ID;
						 found = true;
						 cout << ".......................\n";
						 if (first)
							  cout << "search successfully " << endl;
						 cout << "what do you want to modify ?" << endl;
						 cout << "1-Hospital ID\n2-Patient Reservation Rooms\n3-Reservation Price\n4-BedsPrice\n5-Hospital Rate\n6-Hospital Name\n7-Hospital Specialties\n8-Hospital Clinics" << endl;
						 cout << "enter your choice: ";
						 infinit(choice, 8, 1);
						 cin.ignore();
						 switch (choice)
						 {
						 case 1:
							  cout << "Enter the new ID(Must be 7 digit): ";
							  while (!CheckID) {
								   cin >> ID;
								   if ((ID > 1000000) && (ID < 10000000)) {
										for (int z = 0; z < hospitalCount; z++) {
											 if (hospital[z].HospitalID == ID) {
												  cout << "This ID is exist !\nPlease enter another ID: ";
												  CheckID = false;
												  break;
											 }
											 else
												  CheckID = true;
										}
								   }
								   else {
										cout << "Invalid ID! Try again: ";
										continue;

								   }

							  }
							  hospital[i].HospitalID = ID;

							  break;
						 case 2:
							  cout << "Enter the New Number Of Rooms: ";
							  cin >> hospital[i].PatientReservationRooms;
							  break;
						 case 3:
							  cout << "Enter the Reservation Price : ";
							  cin >> hospital[i].ReservationPrice;
							  break;
						 case 4:
							  cout << "Enter the New Beds Price: ";
							  cin >> hospital[i].BedsPrice;

							  break;
						 case 5:
							  cout << "Enter the New Hospital Rate(0->5): ";
							  do {
								   cin >> hospital[i].HospitalRate;
								   if (hospital[i].HospitalRate <= 5 && hospital[i].HospitalRate >= 0)
										break;
								   cout << "Wrong rate.\nPlease try again: ";
							  } while (true);
							  break;
						 case 6:
							  cout << "Enter the New Hospital Name: ";
							  getline(cin, hospital[i].HospitalName);
							  break;
						 case 7:

							  do
							  {
								   char Checkshow;
								   cout << "1- Add" << endl << "2- Delete " << endl;
								   cout << "Enter your Answer: ";
								   infinit(ans, 2, 1);
								   cout << "Do you want see hospitals' Specialties(y/n)? ";
								   cin >> Checkshow;
								   if (Checkshow == 'y' || Checkshow == 'Y') {
										showspecialists(hospital[i]);
								   }
								   cout << "Enter the Hospital Specialtie: ";
								   cin.ignore();
								   getline(cin, HospitalSpecialties);
								   if (ans == 1)
								   {
										for (int j = 0; j < hospital[i].specialtiesCount; j++)
										{
											 if (HospitalSpecialties == hospital[i].HospitalSpecialties[j])
											 {
												  Exist = true;
												  cout << "It Already Exist" << endl;
											 }
										}
										if (!Exist)
										{
											 hospital[i].specialtiesCount++;
											 hospital[i].HospitalSpecialties[hospital[i].specialtiesCount - 1] = HospitalSpecialties;

										}

								   }
								   if (ans == 2)
								   {
										for (int j = 0; j < hospital[i].specialtiesCount; j++)
										{
											 if (HospitalSpecialties == hospital[i].HospitalSpecialties[j])
											 {
												  Exist = true;
												  swap(hospital[i].HospitalSpecialties[hospital[i].specialtiesCount - 1], hospital[i].HospitalSpecialties[j]);
												  hospital[i].specialtiesCount--;

											 }
										}
										if (!Exist)
											 cout << "NOT FOUND" << endl;
								   }
								   cout << "Do you want to continue add or delete Specialties of " << hospital[i].HospitalName << "(y/n) ? ";							  cin >> AD;
							  } while (AD == 'y' || AD == 'Y');
							  break;

						 case 8:
							  do
							  {
								   char Checkshow;
								   cout << "1- Add" << endl << "2- Delete " << endl;
								   cout << "Enter your Answer: ";
								   infinit(ans, 2, 1);
								   cout << "Do you want see hospitals' Clinics(y/n)? ";
								   cin >> Checkshow;
								   if (Checkshow == 'y' || Checkshow == 'Y') {
										showclinics(hospital[i]);
								   }
								   cout << "Enter the Hospital clinics: ";
								   cin >> Hospitalclinics;
								   if (ans == 1)
								   {
										bool Exist;
										for (int j = 0; j < hospital[i].clinicsCount; j++)
										{
											 if (Hospitalclinics != hospital[i].HospitalClinics[j])
												  Exist = true;
											 else
											 {
												  Exist = false;

											 }
										}
										if (Exist)
										{
											 hospital[i].clinicsCount++;
											 hospital[i].HospitalClinics[hospital[i].clinicsCount - 1] = Hospitalclinics;

										}
										else
											 cout << "Already Exists\n";
								   }
								   if (ans == 2)
								   {
										for (int j = 0; j < hospital[i].clinicsCount; j++)
										{
											 if (Hospitalclinics == hospital[i].HospitalClinics[j])
											 {
												  Exist = true;
												  swap(hospital[i].HospitalClinics[hospital[i].clinicsCount - 1], hospital[i].HospitalClinics[j]);
												  hospital[i].clinicsCount--;
												  break;
											 }

										}
										if (!Exist)
											 cout << "NOT FOUND" << endl;
								   }
								   cout << "Do you want to continue add or delete clinics of " << hospital[i].HospitalName << "(y/n) ? ";
								   cin >> AD;
							  } while (AD == 'y' || AD == 'Y');
							  break;
						 }
						 char CheckAnother;
						 cout << "Do you wnat edit another thing(y/n)? ";
						 cin >> CheckAnother;
						 if (CheckAnother == 'y' || CheckAnother == 'Y') {
							  i--;//back one step
							  first = false;
						 }
						 else
							  break;
					}

			   }
			   if (!found)
					cout << "Hospital Not Found\n ";

			   cout << "do you want to modify another hospital(y/n)? ";
			   cin >> answer;
			   cin.ignore();
		  } while (answer == 'y' || answer == 'Y');

	 }
	 void DeleteHospital(Hospitals hospital[])
	 {
		  string hsptlname;
		  char answer;
		  do
		  {
			   bool found = false;
			   cout << "which hospital do you want to delete? ";
			   getline(cin, hsptlname);
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
			   if (!found)
					cout << "Hospital Not Found\n ";

			   cout << "Do you want to continue?";
			   cin >> answer;
			   cin.ignore(); //hspname
		  } while (answer == 'y' || answer == 'Y');
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
			   infinit(editChoice, 5, 1);
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
	 void makeReservation(Users patient[], Hospitals hospital[], int PIndex) {
		  int userid;
		  bool checkID = false;
		  cout << "\nEnter your ID: ";
		  cin >> userid;

		  if (patient[PIndex].id == userid)
		  {
			   if (patient[PIndex].reserCount < NumberOfReservation) {
					char choice1;
					cout << "Do you want for you(y/n)? ";
					cin >> choice1;
					if (choice1 == 'y' || choice1 == 'Y') {
						 patient[PIndex].reservation[patient[PIndex].reserCount].PName = patient[PIndex].name;
						 patient[PIndex].reservation[patient[PIndex].reserCount].PAge = patient[PIndex].age;
						 patient[PIndex].reservation[patient[PIndex].reserCount].PhoneNumber = patient[PIndex].phonenumber;

					}
					else {
						 cin.ignore();

						 cout << "\nEnter the patient's full name: ";
						 getline(cin, patient[PIndex].reservation[patient[PIndex].reserCount].PName);


						 cout << "\nEnter the patient's age: ";
						 cin >> patient[PIndex].reservation[patient[PIndex].reserCount].PAge;
						 string phoneNumber;
						 do {
							  cout << "\nEnter the patient's Phone Number: ";
							  cin >> phoneNumber;
							  if (!validPhoneNumber(phoneNumber)) {
								   cout << "Invalid phone number. Please try again.\n";
							  }
						 } while (!validPhoneNumber(phoneNumber));
						 patient[PIndex].reservation[patient[PIndex].reserCount].PhoneNumber = phoneNumber;
						 cout << "Phone number accepted.\n";




					}
					int choice = 0, choice2 = 0;

					viewHospitals(hospital);
					cout << "Enter hospital number: ";
					infinit(choice, hospitalCount, 1);
					int index = choice - 1;
					char Continue;
					patient[PIndex].reservation[patient[PIndex].reserCount].hospital = hospital[index];
					cout << "Do you want see hospital info(y/n)? ";
					cin >> Continue;
					if (Continue == 'y' || Continue == 'Y')
						 viewHospitalInfo(hospital, hospital[index].HospitalName);
					cout << "1. Surgery\n2. Check-up\nChoice: ";
					infinit(choice2, 2, 1);
					int dayNumber = 0, dayindex;
					if (choice2 == 1) {
						 int specNumber, specindex;
						 bool exist = false;
						 patient[PIndex].reservation[patient[PIndex].reserCount].ReservationType = "Surgery";
						 showspecialists(patient[PIndex].reservation[patient[PIndex].reserCount].hospital);
						 cout << "Enter Specialty: ";
						 infinit(specNumber, hospital[index].specialtiesCount, 1);
						 specindex = specNumber - 1;
						 patient[PIndex].reservation[patient[PIndex].reserCount].HospitalSpecialty = hospital[index].HospitalSpecialties[specindex];
						 int roomnumber;
						 do {
							  roomnumber = 100 + rand() % 400;
							  for (int i = 0; i < userCount; i++) {
								   for (int j = 0; j < patient[i].reserCount; j++) {
										if (patient[i].reservation[j].PatientReservationRoom == to_string(roomnumber) && (hospital[index].HospitalName == patient[i].reservation[j].hospital.HospitalName))
										{
											 exist = true;
											 break;
										}
								   }
								   if (exist)
										break;
							  }
							  if (!exist)
								   break;
						 } while (true);
						 patient[PIndex].reservation[patient[PIndex].reserCount].PatientReservationRoom = to_string(roomnumber);
						 hospital[index].PatientReservationRooms -= 1;
						 bool correctchoice3 = false;
						 int daysnum;
						 while (correctchoice3 == false)
						 {
							  correctchoice3 = false;
							  cout << "\nHow many days do you need to stay in the room ?";
							  cin >> daysnum;
							  if (daysnum >= 1) {
								   correctchoice3 = true;
								   break;
							  }
							  else
								   cout << "\nInvalid number of days.Please enter number 1 or more\n";
						 }
						 patient[PIndex].reservation[patient[PIndex].reserCount].numberOfDays = daysnum;
						 patient[PIndex].reservation[patient[PIndex].reserCount].BedPrice = daysnum * (hospital[index].BedsPrice);
						 patient[PIndex].reservation[patient[PIndex].reserCount].surgeryprice = hospital[index].surgeryprice;
						 patient[PIndex].reservation[patient[PIndex].reserCount].Totalprice = (daysnum * (hospital[index].BedsPrice)) + (hospital[index].surgeryprice);

						 showDays();
						 cout << "Please Enter the number of your first day in the room: ";
						 infinit(dayNumber, 7, 1);

					}
					else if (choice2 == 2) {
						 int clinicNumber, clinicindex;
						 patient[PIndex].reservation[patient[PIndex].reserCount].ReservationType = "Check-up";
						 cout << "-----------------------\n";
						 showclinics(patient[PIndex].reservation[patient[PIndex].reserCount].hospital);
						 cout << "Enter clinic number: ";
						 infinit(clinicNumber, hospital[index].clinicsCount, 1);
						 clinicindex = clinicNumber - 1;
						 patient[PIndex].reservation[patient[PIndex].reserCount].HospitalClinic = hospital[index].HospitalClinics[clinicindex];
						 showDays();
						 cout << "Please Enter the number of your reservation day : ";
						 infinit(dayNumber, 7, 1);

						 patient[PIndex].reservation[patient[PIndex].reserCount].ReservationPrice = hospital[index].ReservationPrice;

					}
					dayindex = dayNumber - 1;
					patient[PIndex].reservation[patient[PIndex].reserCount].ReservationDay = ReservationDays[dayindex];
					patient[PIndex].reservation[patient[PIndex].reserCount].ReservtionID = reservationID;
					cout << "Your reservation has been confirmed.\n";
					cout << "Your Reservation ID is : " << reservationID << endl;
					patient[PIndex].reserCount++;
					reservationID++;
					// cout << "---------------------------\n";
			   }
			   else {
					cout << "\nThe maximum number of reservations has been reached today . Try another day\n ";
			   }
			   checkID = true;
		  }
		  if (!checkID)
			   cout << "\nWrong ID\n";
	 }
	 void modifyreservation(Users patient[], Hospitals hospital[], int PIndex) {
		  int search; //PIndex ->user index loged in 
		  bool correctid = false;
		  do {
			   correctid = false;
			   cout << "Enter your Reservation ID: ";
			   cin >> search;
			   for (int i = 0; i < patient[PIndex].reserCount; i++) {
					if (patient[PIndex].reservation[i].ReservtionID == search) {
						 correctid = true;
						 int editoption = 0;
						 char modifyagain;
						 int  typeoption;
						 int index2;
						 do {

							  if (patient[PIndex].reservation[i].ReservationType == "Surgery") {
								   cout << endl << "What do you want to edit?\n";
								   cout << "1. Patient's Name\n2. Patient's age\n3. Patient's Phone Number\n4. Hospital\n5. Reservation Type\n6. Reservation Day (First day in the room)\n7. Number of days in the room\nEnter your choice: ";
								   infinit(editoption, 7, 1);
							  }
							  else if (patient[PIndex].reservation[i].ReservationType == "Check-up") {
								   cout << "\nWhat do you want to edit?\n";
								   cout << "1. Patient's Name\n2. Patient's age\n3. Patient's Phone Number\n4. Hospital\n5. Reservation Type\n6. Reservation Day\nEnter your choice: ";
								   infinit(editoption, 6, 1);
							  }
							  switch (editoption)
							  {

							  case 1:
							  {
								   cout << "Enter new patient's name: ";
								   cin.ignore();
								   getline(cin, patient[PIndex].reservation[i].PName);
								   break;
							  }

							  case 2:
							  {
								   cout << "\nEnter Age: ";
								   cin >> patient[PIndex].reservation[i].PAge;
								   break;
							  }
							  case 3:
							  {
								   string phoneNumber;
								   do {
										cout << "\nEnter the patient's Phone Number: ";
										cin >> phoneNumber;
										if (!validPhoneNumber(phoneNumber)) {
											 cout << "Invalid phone number. Please try again.\n";
										}
								   } while (!validPhoneNumber(phoneNumber));
								   patient[PIndex].reservation[i].PhoneNumber = phoneNumber;
								   cout << "Phone number accepted.\n";
								   break;
							  }
							  case 4:
							  {
								   int roomnumber;
								   bool done = false;
								   char select;
								   index2 = hospitalindex(hospital);
								   for (int z = 0; z < hospitalCount; z++) {
										if (patient[PIndex].reservation[i].hospital.HospitalName == hospital[z].HospitalName)
										{
											 if (patient[PIndex].reservation[i].ReservationType == "Surgery") {
												  hospital[z].PatientReservationRooms += 1;
												  break;
											 }
										}
								   }
								   if (patient[PIndex].reservation[i].ReservationType == "Check-up")
										patient[PIndex].reservation[i].ReservationPrice = hospital[index2].ReservationPrice;
								   else {
										roomnumber = 100 + rand() % 400;
										for (int z = 7; z < userCount; z++) {
											 for (int j = 0; j < patient[z].reserCount; j++) {
												  if ((patient[z].reservation[j].PatientReservationRoom == to_string(roomnumber)) ||
													   (patient[z].reservation[j].PatientReservationRoom == patient[PIndex].reservation[i].PatientReservationRoom)) {
													   roomnumber = 100 + rand() % 400;
												  }
											 }
										}

										patient[PIndex].reservation[i].hospital = hospital[index2];
										patient[PIndex].reservation[i].PatientReservationRoom = to_string(roomnumber);
										patient[PIndex].reservation[i].surgeryprice = hospital[index2].surgeryprice;
										patient[PIndex].reservation[i].BedPrice = patient[PIndex].reservation[i].numberOfDays * hospital[index2].BedsPrice;
										patient[PIndex].reservation[i].Totalprice = patient[PIndex].reservation[i].surgeryprice + (patient[PIndex].reservation[i].numberOfDays * patient[PIndex].reservation[i].BedPrice);
										hospital[index2].PatientReservationRooms -= 1;
								   }
								   cout << "Do you want see hospital reservation info(y/n)? ";
								   cin >> select;
								   if (select == 'y' || select == 'Y')
										viewHospitalInfo(hospital, patient[PIndex].reservation[i].hospital.HospitalName);
								   break;
							  }
							  case 5:
							  {

								   cout << "Enter the number of new Reservation Type\n1. Surgery\n2. Check-up\nchoice: ";
								   infinit(typeoption, 2, 1);
								   int dayNumber, dayindex;
								   if (typeoption == 1) {
										if (patient[PIndex].reservation[i].ReservationType == "Surgery") {
											 cout << "It really is Surgery\n";
											 break;
										}
										int specnumber;
										int specindex;
										int roomNumber;
										bool exist = false;
										patient[PIndex].reservation[i].ReservationType = "Surgery";
										showspecialists(patient[PIndex].reservation[i].hospital);
										cout << "Choice: ";
										infinit(specnumber, patient[PIndex].reservation[i].hospital.specialtiesCount, 1);
										specindex = specnumber - 1;
										roomNumber = 101 + rand() % 400;
										do {
											 roomNumber = 100 + rand() % 400;
											 for (int z = 0; z < userCount; z++) {
												  for (int j = 0; j < patient[i].reserCount; j++) {
													   if (patient[z].reservation[j].PatientReservationRoom == to_string(roomNumber) && (patient[PIndex].reservation[i].hospital.HospitalName == patient[z].reservation[j].hospital.HospitalName))
													   {
															exist = true;
															break;
													   }
												  }
												  if (exist)
													   break;
											 }
											 if (!exist)
												  break;
										} while (true);
										for (int z = 0; z < hospitalCount; z++) {
											 if ((patient[PIndex].reservation[i].hospital.HospitalID == hospital[z].HospitalID))
											 {
												  hospital[z].PatientReservationRooms -= 1;
											 }
										}
										patient[PIndex].reservation[i].HospitalSpecialty = patient[PIndex].reservation[i].hospital.HospitalSpecialties[specindex];
										patient[PIndex].reservation[i].PatientReservationRoom = to_string(roomNumber);
										int dayscount;
										bool correctchoice3 = false;
										while (correctchoice3 == false)
										{
											 correctchoice3 = false;
											 cout << "\nHow many days do you need to stay in the room ?";
											 cin >> dayscount;
											 if (dayscount >= 1) {
												  correctchoice3 = true;
												  break;
											 }
											 else
												  cout << "\nInvalid number of days.Please enter number 1 or more\n";
										}
										patient[PIndex].reservation[i].BedPrice = dayscount * (patient[PIndex].reservation[i].hospital.BedsPrice);
										patient[PIndex].reservation[i].surgeryprice = patient[PIndex].reservation[i].hospital.surgeryprice;
										patient[PIndex].reservation[i].Totalprice = (dayscount * (patient[PIndex].reservation[i].hospital.BedsPrice)) + (patient[PIndex].reservation[i].hospital.surgeryprice);
										showDays();
										cout << "\nPlease Enter the number of your first day in the room: ";
										infinit(dayNumber, 7, 1);
										dayindex = dayNumber - 1;
										patient[PIndex].reservation[i].ReservationDay = ReservationDays[dayindex];
								   }
								   else  if (typeoption == 2) {
										if (patient[PIndex].reservation[i].ReservationType == "Check-up") {
											 cout << "It really is Check-up\n";
											 break;
										}
										int clinicnumber;
										int clinicindex;
										patient[PIndex].reservation[i].ReservationType = "Check-up";
										for (int z = 0; z < hospitalCount; z++) {
											 if ((patient[PIndex].reservation[i].hospital.HospitalID == hospital[z].HospitalID))
											 {
												  hospital[z].PatientReservationRooms += 1;
												  patient[PIndex].reservation[i].PatientReservationRoom = "NONE";

											 }
										}
										showclinics(patient[PIndex].reservation[i].hospital);
										cout << "Enter your choice: ";
										infinit(clinicnumber, 19, 1);
										clinicindex = clinicnumber - 1;
										patient[PIndex].reservation[i].HospitalClinic = patient[PIndex].reservation[i].hospital.HospitalClinics[clinicindex];
										patient[PIndex].reservation[i].ReservationPrice = patient[PIndex].reservation[i].hospital.ReservationPrice;
										patient[PIndex].reservation[i].BedPrice = 0;
										patient[PIndex].reservation[i].surgeryprice = 0;
										patient[PIndex].reservation[i].Totalprice = 0;
										showDays();
										cout << "\nPlease Enter the number of your reservation day: ";
										infinit(dayNumber, 7, 1);
										dayindex = dayNumber - 1;
										patient[PIndex].reservation[i].ReservationDay = ReservationDays[dayindex];
								   }
								   break;
							  }
							  case 6:
							  {
								   int dayNumber, dayindex;
								   showDays();
								   cout << "\nPlease Enter the number of your new reservation day: ";
								   infinit(dayNumber, 7, 1);
								   dayindex = dayNumber - 1;
								   patient[PIndex].reservation[i].ReservationDay = ReservationDays[dayindex];
								   break;
							  }
							  case 7:
							  {
								   int daysnum;
								   bool correctchoice3 = false;
								   while (correctchoice3 == false)
								   {
										correctchoice3 = false;
										cout << "\nHow many days do you need to stay in the room ?";
										cin >> daysnum;
										if (daysnum >= 1) {
											 correctchoice3 = true;
											 break;
										}
										else
											 cout << "\nInvalid number of days.Please enter number 1 or more\n";
								   }
								   //patient[PIndex].reservation[i].BedPrice = daysnum * hospital[index2].BedsPrice;
								   patient[PIndex].reservation[i].BedPrice = daysnum * patient[PIndex].reservation[i].hospital.BedsPrice;
								   patient[PIndex].reservation[i].Totalprice = (daysnum * (patient[PIndex].reservation[i].hospital.BedsPrice)) + (patient[PIndex].reservation[i].hospital.surgeryprice);
								   break;
							  }
							  }
							  cout << "............................\n";

							  cout << "Do you want to modify something else ? (y | n)\nChoice : ";
							  cin >> modifyagain;

						 } while (modifyagain == 'y' || modifyagain == 'Y');
						 cout << "\nSuccessfully changed\n";
						 break;
					}
			   }
			   if (!correctid) {
					cout << "\nInvalid Reservation ID\n";
					return;
			   }
		  } while (!correctid);
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
	 void cancelreservation(Users patient[], Hospitals hospital[], int PIndex) {
		  int search;
		  bool correctid = false;
		  do {
			   correctid = false;
			   cout << "Enter your Resevaion ID: ";
			   cin >> search;
			   for (int i = 0; i < patient[PIndex].reserCount; i++) {
					if (patient[PIndex].reservation[i].ReservtionID == search) {
						 correctid = true;
						 for (int j = 0; j < hospitalCount; j++) {
							  if (patient[PIndex].reservation[i].ReservationType == "Surgery" && patient[PIndex].reservation[i].hospital.HospitalName == hospital[j].HospitalName) {
								   hospital[j].PatientReservationRooms += 1;
								   break;
							  }
						 }
						 patient[PIndex].reservation[i].PName = " ";
						 patient[PIndex].reservation[i].PAge = 0;
						 patient[PIndex].reservation[i].ReservtionID = 0;
						 patient[PIndex].reservation[i].hospital.HospitalName = " ";
						 patient[PIndex].reservation[i].ReservationType = " ";
						 patient[PIndex].reservation[i].HospitalSpecialty = "NOT RESERVED";
						 patient[PIndex].reservation[i].HospitalClinic = "NOT RESERVED";
						 patient[PIndex].reservation[i].PatientReservationRoom = " ";
						 patient[PIndex].reservation[i].BedPrice = 0;
						 patient[PIndex].reservation[i].ReservationDay = " ";
						 patient[PIndex].reservation[i].ReservationPrice = 0;
						 patient[PIndex].reservation[i].surgeryprice = 0;
						 patient[PIndex].reservation[i].Totalprice = 0;
						 cout << "\nCancelled successfully" << endl;
						 if (i != patient[PIndex].reserCount - 1)
							  swap(patient[PIndex].reservation[i], patient[PIndex].reservation[patient[PIndex].reserCount - 1]);
						 patient[PIndex].reserCount--;//update
						 break;
					}
			   }
			   if (!correctid) {
					cout << "\nInvalid Resevation ID\n";
					return;
			   }
		  } while (!correctid);
	 }
	 //Extra
	 void showspecialists(Hospitals hospital) {
		  cout << " hospitals' specialties :\n";
		  for (int i = 0; i < hospital.specialtiesCount; i++) {
			   cout << i + 1 << "-" << hospital.HospitalSpecialties[i] << endl;
		  }
	 }
	 void showclinics(Hospitals hospital) {
		  cout << " hospitals' clinics :\n";
		  for (int i = 0; i < hospital.clinicsCount; i++) {
			   cout << i + 1 << "-" << hospital.HospitalClinics[i] << endl;
		  }
	 }
	 bool validPhoneNumber(string phoneNumber) {
		  if (phoneNumber.size() != 11 || phoneNumber[0] != '0' || phoneNumber[1] != '1') {
			   return false;
		  }
		  return true;
	 }
	 int hospitalindex(Hospitals hospital[]) {
		  viewHospitals(hospital);
		  int choice = 0;
		  cout << "Enter your choice: ";
		  infinit(choice, hospitalCount, 1);
		  int index = choice - 1;
		  return index;
	 }
	 void showDays() {
		  cout << " .......................\n";
		  for (int i = 0; i < daysInWeek; i++) {
			   cout << i + 1 << " - " << ReservationDays[i] << "\n";
		  }
	 }
	 int infinit(int& num, int max, int min) {
		  string input;

		  while (true) {

			   cin >> input;
			   if (input.find_first_not_of("0123456789") == string::npos) {

					try {
						 num = stoi(input);

						 if (num >= min && num <= max) {
							  return num;
							  break;
						 }
						 else {

							  cout << "-------------------\n";
							  cout << "In Valied Choice !" << endl;
							  cout << "enter valied choice : ";
						 }
					}
					catch (const exception& e) {
						 cout << "Invalid input . Please enter a valid integer." << endl;
					}
			   }
			   else {
					cout << "Invalid input ✕.\nPlease enter a valid number: ";
			   }
			   cin.clear();
			   cin.ignore();
		  }
	 }
	 void sort(Hospitals hos[])
	 {
		  int help;
		  cout << "What Do you sort by?\n1- By name\n2- By Beds Available\n3- By Beds price\n4- By rating\n";
		  cout << "Choice: ";
		  infinit(help, 4, 1);
		  switch (help)
		  {
		  case 1:
			   SortHospitalByName(hos);
			   break;
		  case 2:
			   SortByBedsAvailable(hos);
			   break;
		  case 3:
			   SortByBedsPrice(hos);
			   break;
		  case 4:
			   SortHospitalByRating(hos);
			   break;
		  }

	 }

};
