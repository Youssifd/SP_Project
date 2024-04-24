#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
#define NumberOfHospital 10
#define NumberOfReservation 20
#define NumberOfUsers 20
#define NumberOfSpecialties 20
#define NumberOfClinics 25
#define daysInWeek  7

string ReservationDays[daysInWeek] = { "Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday" };
struct Hospitals {
	 int HospitalID;
	 int PatientReservationRooms;//BedsAvailable
	 float ReservationPrice; //for check-up
	 float BedsPrice; //for surgeryd
	 float HospitalRate;
	 float surgeryprice;
	 int specialtiesCount; // to stop print garbage at other hos.(screen shot)
	 int clinicsCount;
	 string HospitalName;
	 string HospitalSpecialties[NumberOfSpecialties];
	 string HospitalClinics[NumberOfClinics];
};
struct Reservations {
	 int ReservtionID;
	 int PAge;										   //P-> patient
	 Hospitals hospital;
	 string PName;
	 string ReservationType;
	 string ReservationDay;
	 string HospitalSpecialty = "NOT RESERVATED";
	 string HospitalClinic = "NOT RESERVATED";
	 string PatientReservationRoom;//asking TA
	 float ReservationPrice;//for check-up
	 float BedPrice; //for surgery
	 float surgeryprice;
	 float Totalprice;
};
struct Users {
	 int id;
	 int age;
	 int reserCount = 0;
	 string userType = "Patient";
	 string name;
	 string email;
	 string username;
	 string password;
	 Reservations* reservation = new Reservations[NumberOfReservation];
};
void DefinitonOfVariable(Hospitals hospital[], int& hospitalCount);//YOUSSIF
void DefinitonOfVariable(Users user[], int& userCount, int& reserv, Hospitals hos[], int hoscount);//YOUSSIF
void SaveData(Hospitals hospital[], int hospitalCount);//YOUSSIF
void SaveData(Users user[], int& userCount);//YOUSSIF
void PrintHospitalData(Hospitals hospital[], int hospitalCount);//YOUSSIF
void PrintPatientData(Users user[], int userCount);//YOUSSIF
void SortHospitalByName(Hospitals hospital[], int hospitalCount);//YOUSSIF
void SortHospitalByRating(Hospitals hospital[], int hospitalCount);//YOUSSIF
void SortByBedsAvailable(Hospitals hospital[], int hospitalCount);//YOUSSIF
void SortByBedsPrice(Hospitals hospital[], int hospitalCount);//YOUSSIF
bool loginAsAdmin(Users user[], int userCount);//MARWAN
void AddHospital(Hospitals hos[], int& HospitalCount);//MARWAN
void ModifyHospital(Hospitals hospital[], int& HospitalCount);//MARIAM 
void DeleteHospital(Hospitals hospital[], int& HospitalCount);//MARIAM 
void modifyreservation(Users patient[], int userCount, Hospitals hospital[], int hospitalCount, int PIndex);//TOKA 
void showspecialists(Hospitals hospital);
void showclinics(Hospitals hospital);
void viewHospitals(Hospitals hospital[], int HospitalCount);//SAMA
void viewHospitalInfo(Hospitals hospital[], int HospitalCount, string Hospitalname = "empty");//SAMA
bool loginAsPatient(Users patient[], int userCount, int& index);
void registerpatient(Users patient[], int& patientCount, int& patientId);
void personalinfo(Users patient[], int patientCount, int PIndex);
void editpatientinfo(Users patient[], int patientCount, int PIndex);
void makeReservation(Users patient[], Hospitals hospital[], int patientCount, int& reservationId, int hospitalCount, int PIndex);
void showDays();
void LogOut(bool& checkLog, int& PIndex);
void showreservation(Users patient[], int userCount, Hospitals hospital[], int hospitalCount, int PIndex);
void cancelreservation(Users patient[], int userCount, Hospitals hospital[], int hospitalCount, int PIndex, int& reservationId);
bool Type(Users user[], int& usercount,Users patient[], int& patientCount, int& patientId);
void infinit(int& num, int max, int min);
int hospitalindex(Hospitals hospital[], int hospitalCount);
void DisplayAsAdmin(Hospitals hospital[], int& HospitalCount);//GEN.
void DisplayAsPatient(Hospitals hospital[], int& HospitalCount, Users user[], int userCount, int& reservationid, int PIndex);//GEN.
void main() {
	 Hospitals hospital[NumberOfHospital];
	 Users user[NumberOfUsers];
	 int userCount = 0, hospitalCount = 0, userID = 1000, reservationID = 1001;
	 DefinitonOfVariable(hospital, hospitalCount);
	 DefinitonOfVariable(user, userCount, reservationID, hospital, hospitalCount);
	 userID += userCount;

	 cout << "Welcome To Our Hospital Management syatem :)\n";
	 while (true) {
		  int patientAccount ;

		 // string Email = "";
		  int choice;
		  cout << "1. Register\n2. Login(if you have already registered)\n3. Quit\nPlease enter your choice: ";
		  cin >> choice;
		  if (choice == 1) {
			   registerpatient(user, userCount, userID);
		  }
		  if (choice == 2)
		  {
			  
			   if (Type(user, userCount, user, userCount, userID))
			   {
					if (loginAsAdmin(user, userCount))
					{
						 DisplayAsAdmin(hospital, hospitalCount);
					}
			   }
			   else
			   {
					if (loginAsPatient(user, userCount, patientAccount))
						 DisplayAsPatient(hospital, hospitalCount, user, userCount, reservationID, patientAccount);
			   }


		  }
		  if (choice == 3) {
			   cout << "Thanks for use our system :)\nClosing....";
			   //	SaveData(hospital, hospitalCount);
			   break;
		  }
	 }
}
void infinit(int& num, int max, int min) {

	 while (true)
	 {
		  cin >> num;
		  cout << "-------------------\n";
		  if (num >= min && num <= max)
			   break;

		  else
		  {
			   cout << "In Valied Choice" << endl;
			   cout << "enter valied choice : ";
		  }
	 }
}
void DefinitonOfVariable(Hospitals hospital[], int& hospitalCount) {
	 ifstream HospitalInfo("Hospitalinfo.txt", ios::app);
	 HospitalInfo >> hospitalCount;
	 for (int i = 0; i < hospitalCount; i++) {
		  getline(HospitalInfo, hospital[i].HospitalName);
		  HospitalInfo >> hospital[i].HospitalID >> hospital[i].PatientReservationRooms >> hospital[i].ReservationPrice >> hospital[i].BedsPrice >> hospital[i].surgeryprice >> hospital[i].HospitalRate >> hospital[i].specialtiesCount >> hospital[i].clinicsCount;
		  for (int j = 0; j < hospital[i].specialtiesCount; j++)
			   HospitalInfo >> hospital[i].HospitalSpecialties[j];
		  for (int j = 0; j < hospital[i].clinicsCount; j++)
			   HospitalInfo >> hospital[i].HospitalClinics[j];
		  for (int x = 1; x <= 3; x++)
			   HospitalInfo.ignore();
		  // hospitalCount++;
	 }
	 HospitalInfo.close();
}
void DefinitonOfVariable(Users user[], int& userCount, int& reserv, Hospitals hos[], int hoscount) {
	 ifstream UserInfo("UserInfo.txt", ios::app);

	 for (int i = 0; !UserInfo.eof(); i++) {
		  UserInfo >> user[i].id >> user[i].username >> user[i].age >> user[i].email >> user[i].password >> user[i].reserCount;
		  getline(UserInfo, user[i].name);
		  if (user[i].email.find("@Hadmin.com") != string::npos) {
			   user[i].userType = "Admin";
			   delete[] user[1].reservation;
			   user[1].reservation = NULL;

		  }
		  if (user[i].userType == "Patient") { //definition of reser
			   if (user[i].reserCount < NumberOfReservation && user[i].reserCount>0) {
					for (int j = 0; j < user[i].reserCount; j++) {

						 UserInfo >> user[i].reservation[j].ReservtionID >> user[i].reservation[j].PAge >> user[i].reservation[j].hospital.HospitalID >> user[i].reservation[j].BedPrice >> user[i].reservation[j].surgeryprice >> user[i].reservation[j].Totalprice >> user[i].reservation[j].ReservationType >> user[i].reservation[j].ReservationDay >> user[i].reservation[j].HospitalSpecialty >> user[i].reservation[j].HospitalClinic >> user[i].reservation[j].PatientReservationRoom;
						 for (int z = 0; z < hoscount; z++) {
							  if (user[i].reservation[j].hospital.HospitalID == hos[z].HospitalID)
								   user[i].reservation[j].hospital = hos[z];

							  if (user[i].reservation[j].ReservationType == "Surgery")
								   hos[z].PatientReservationRooms -= 1;
							  else
								   user[i].reservation[j].ReservationPrice = hos[z].ReservationPrice;
						 }
						 UserInfo.ignore();
						 getline(UserInfo, user[i].reservation[j].PName);
						 reserv++;

					}
			   }
		  }
		  userCount++;
	 }
	 UserInfo.close();
}
void SaveData(Hospitals hospital[], int hospitalCount) {
	 ofstream ExportHospitalInfo("Hospitalinfo.txt");
	 ExportHospitalInfo << hospitalCount;
	 for (int i = 0; i < hospitalCount; i++) {
		  ExportHospitalInfo << hospital[i].HospitalName << endl;
		  ExportHospitalInfo << hospital[i].HospitalID << " " << hospital[i].PatientReservationRooms << " " << hospital[i].ReservationPrice << " " << hospital[i].BedsPrice << " " << hospital[i].surgeryprice << " " << hospital[i].surgeryprice << " " << hospital[i].HospitalRate << " " << hospital[i].specialtiesCount << " " << hospital[i].clinicsCount << endl;
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
void SaveData(Users user[], int& userCount) {
	 ofstream ExportUserInfo("UserInfo.txt");
	 for (int i = 0; i < userCount; i++) {
		  ExportUserInfo << user[i].id << " " << user[i].username << " " << user[i].age << " " << user[i].email << " " << user[i].password << " " << user[i].reserCount << user[i].name;
		  if (i != userCount - 1)
			   ExportUserInfo << endl;
		  if (user[i].userType == "Patient") { //definition of reser
			   if (user[i].reserCount < NumberOfReservation && user[i].reserCount>0) {
					for (int j = 0; j < user[i].reserCount; j++) {

						 ExportUserInfo << user[i].reservation[j].ReservtionID << " " << user[i].reservation[j].PAge << " " << user[i].reservation[j].ReservationPrice << " " << user[i].reservation[j].hospital.HospitalID << " " << user[i].reservation[j].BedPrice << " " << user[i].reservation[j].surgeryprice << " " << user[i].reservation[j].Totalprice << " " << user[i].reservation[j].ReservationType << " " << user[i].reservation[j].ReservationDay << " " << user[i].reservation[j].HospitalSpecialty << " " << user[i].reservation[j].HospitalClinic << " " << user[i].reservation[j].PatientReservationRoom << " " << user[i].reservation[j].PName << endl;
					}
			   }
		  }
	 }
	 ExportUserInfo.close();
}
void PrintHospitalData(Hospitals hospital[], int hospitalCount) {
	 for (int i = 0; i < hospitalCount; i++) {
		  cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate: " << hospital[i].HospitalRate << endl;
		  cout << "-----------------------------------------------\n";
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
		  cout << "\n============================================\n";
	 }
}
void PrintPatientData(Users user[], int userCount) {
	 int numberOfPatient = 1;
	 for (int i = 0; i < userCount; i++)
	 {
		  if (user[i].userType != "Admin") {
			   //npos--> not-found position 
			   cout << "patient #" << numberOfPatient << " :\n";
			   cout << "ID: " << user[i].id << "\nAge: " << user[i].age << "\nName:" << user[i].name << "\nEmail: " << user[i].email << "\nUsername: " << user[i].username << endl;
			   numberOfPatient++;
			   cout << "--------------------\n";
		  }
	 }
}
void SortHospitalByName(Hospitals hospital[], int hospitalCount) {
	 for (int i = 0; i < hospitalCount - 1; ++i) {
		  for (int j = i + 1; j < hospitalCount; j++) {
			   if (hospital[i].HospitalName > hospital[j].HospitalName)
					swap(hospital[i], hospital[j]);
		  }
	 }
}
void SortHospitalByRating(Hospitals hospital[], int hospitalCount) {
	 for (int i = 0; i < hospitalCount - 1; ++i) {
		  for (int j = i + 1; j < hospitalCount; j++) {
			   if (hospital[i].HospitalRate > hospital[j].HospitalRate)
					swap(hospital[i], hospital[j]);
		  }
	 }
}
void SortByBedsAvailable(Hospitals hospital[], int hospitalCount) {
	 for (int i = 0; i < hospitalCount - 1; ++i) {
		  for (int j = i + 1; j < hospitalCount; j++) {
			   if (hospital[i].PatientReservationRooms > hospital[j].PatientReservationRooms)
					swap(hospital[i], hospital[j]);
		  }
	 }
}
void SortByBedsPrice(Hospitals hospital[], int hospitalCount) {
	 for (int i = 0; i < hospitalCount - 1; ++i) {
		  for (int j = i + 1; j < hospitalCount; j++) {
			   if (hospital[i].BedsPrice > hospital[j].BedsPrice)
					swap(hospital[i], hospital[j]);
		  }
	 }
}
bool loginAsAdmin(Users user[], int userCount) {
	 int count = 0;
	 bool loggedIn = false;
	 char chForPass;
	 do {
		  string username, password = "";
		  cout << "Enter username: ";
		  cin >> username;
		  cout << '\n';
		  cout << "Enter password: ";
		  while ((chForPass = getch()) != '\r') {
			   if (chForPass != '\b') {
					cout << "*";
					password += chForPass;
			   }
			   else if (!password.empty()) {
					cout << "\b \b";
					password.erase(password.size() - 1);
			   }
		  }
		  cout << '\n';
		  for (int i = 0; i < userCount; i++) {
			   if (username == user[i].username && password == user[i].password && user[i].userType == "Admin") {
					loggedIn = true;
					cout << "Wlecome " << user[i].name << "\n\n";
					break;
			   }
		  }
		  if (loggedIn)
			   break;
		  else {
			   cout << "Login failed Please Try Agin\n\n";
			   count++;
		  }
	 } while (count < 5);
	 return loggedIn;
}
void AddHospital(Hospitals hos[], int& HospitalCount)
{
	 char choice;
	 do {
		  HospitalCount++;
		  cout << "Please enter the name of the Hospital to Add: ";
		  getline(cin, hos[HospitalCount - 1].HospitalName);

		  cout << "Please enter the ID of the Hospital to Add: ";
		  cin >> hos[HospitalCount - 1].HospitalID;

		  cout << "Please enter the Nunmber of beds available of the Hospital to Add: ";
		  cin >> hos[HospitalCount - 1].PatientReservationRooms;

		  cout << "Please enter the Beds price per night of the Hospital to Add: ";
		  cin >> hos[HospitalCount - 1].BedsPrice;

		  cout << "Please enter the  Reservation price for check-up of the Hospital to Add: ";
		  cin >> hos[HospitalCount - 1].ReservationPrice;

		  cout << "Please enter the Hospiral Rate of the Hospital to Add: ";
		  cin >> hos[HospitalCount - 1].HospitalRate;

		  hos[HospitalCount - 1].specialtiesCount = hos[0].specialtiesCount;
		  hos[HospitalCount - 1].clinicsCount = hos[0].clinicsCount;

		  for (int j = 0; j < hos[0].specialtiesCount; j++)
			   hos[HospitalCount - 1].HospitalSpecialties[j] = hos[0].HospitalSpecialties[j];

		  for (int z = 0; z < hos[0].clinicsCount; z++)
			   hos[HospitalCount - 1].HospitalClinics[z] = hos[0].HospitalClinics[z];

		  cout << "Press 'y' to Add another hospital: ";
		  cin >> choice;
		  if (choice != 'y' || choice != 'Y')
			   cout << '\n';
		  cin.ignore(); //added
	 } while (choice == 'y' || choice == 'Y');
}
void ModifyHospital(Hospitals hospital[], int& HospitalCount)
{
	 string hsptlname;
	 char answer;
	 bool found = false;
	 bool Exist = false;
	 int ans;
	 string Hospitalclinics;
	 string HospitalSpecialties;
	 do
	 {
		  int choice = 0;
		  bool Checkans = false;
		  bool checkChoice = false;
		  cout << "what do you want to modify ?" << endl;
		  cout << "1-Hospital ID\n2-Patient Reservation Rooms\n3-Reservation Price\n4-BedsPrice\n5-Hospital Rate\n6-Hospital Name\n7-Hospital Specialties\n8-Hospital Clinics" << endl;
		  cout << "enter your choice: ";
		  infinit(choice, 8, 1);
		  cin.ignore(); // name hospital
		  cout << "please enter hospitalname: ";
		  getline(cin, hsptlname);
		  for (int i = 0; i < HospitalCount; i++)
		  {
			   if (hospital[i].HospitalName == hsptlname)
			   {
					found = true;
					cout << "search successfully " << endl;
					switch (choice)
					{
					case 1:
						 cout << "Enter the new ID: ";
						 cin >> hospital[i].HospitalID;
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
						 cout << "Enter the New Hospital Rate: ";
						 cin >> hospital[i].HospitalRate;
						 break;
					case 6:
						 cout << "Enter the New Hospital Name: ";
						 getline(cin, hospital[i].HospitalName);
						 break;
					case 7:
						 cout << "1- Add" << endl << "2- Delete " << endl;
						 cout << "Enter your Answer ";
						 infinit(ans, 2, 1);
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
						 break;
					case 8:
						 cout << "1- Add" << endl << "2- Delete " << endl;
						 cout << "Enter your Answer ";
						 infinit(ans, 2, 1);
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
										break;
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
								   }

							  }
							  if (!Exist)
								   cout << "NOT FOUND" << endl;
						 }
						 break;
					}
			   }

		  }
		  if (!found)
			   cout << "Hospital Not Found\n ";

		  cout << "do you want to continue? ";
		  cin >> answer;
		  cin.ignore();
	 } while (answer == 'y' || answer == 'Y');

}
void DeleteHospital(Hospitals hospital[], int& HospitalCount)
{
	 string hsptlname;
	 char answer;
	 do
	 {
		  bool found = false;
		  cout << "which hospital do you want to delete? ";
		  getline(cin, hsptlname);
		  for (int i = 0; i < HospitalCount; i++)
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
					if (i != (HospitalCount - 1))
						 swap(hospital[i], hospital[HospitalCount - 1]);//edit -> Check the hospital not the last one
					HospitalCount--;
			   }
		  }
		  if (!found)
			   cout << "Hospital Not Found\n ";

		  cout << "Do you want to continue?";
		  cin >> answer;
		  cin.ignore(); //hspname
	 } while (answer == 'y' || answer == 'Y');
}
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
void viewHospitals(Hospitals hospital[], int HospitalCount)
{
	 cout << " Available hospitals : - " << "\n";
	 for (int i = 0; i < HospitalCount; i++)
	 {
		  cout << i + 1 << " - " << hospital[i].HospitalName << endl;
	 }
}
void viewHospitalInfo(Hospitals hospital[], int HospitalCount, string Hospitalname) {
	 char ch;
	 bool Default, first = false;//if user want use this fun. out other fun.
	 if (Hospitalname == "empty")
		  Default = true;
	 else
		  Default = false;
	 do
	 {
		  if (Default)
		  {
			   if (first)
					cin.ignore();
			   cout << "Enter Hospital Name: ";
			   getline(cin, Hospitalname);
			   cout << "----------------\n";
		  }
		  first = true;
		  bool found = false;

		  for (int i = 0; i < HospitalCount; i++)
		  {
			   if (Hospitalname == hospital[i].HospitalName)
			   {
					found = true;


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
					cout << "\n============================================\n";
			   }
		  }
		  if (!found)
			   cout << " This hospital is not Found " << endl;
		  if (!Default)
			   break; //to not asking continue  when use in functions 
		  cout << "Press 'y' to Continue: ";
		  cin >> ch;
	 } while (ch == 'y' || ch == 'Y');

}
bool loginAsPatient(Users patient[], int userCount, int& index) {
	 string username, password;
	 char chForPass;
	 int id = 0, choice;
	 int count = 0;
		 bool loginstatus = false;
	 do {
		  password = "";
			 loginstatus = false;// Login failed
		 cout << "Enter username: ";
		 cin >> username;
		 cout << "\n1 to Enter Password \n2 to Enter ID\n";
		 cout << "(Enter your ID . if you forgot your Password)\n";
		 cout << "Choice : ";
		 infinit(choice, 2, 1);
		 if (choice == 1) {

			 cout << "Enter password: ";
			 while ((chForPass = getch()) != '\r') {
				 if (chForPass != '\b') {
					 cout << "*";
					 password += chForPass;
				 }
				 else if (!password.empty()) {
					 cout << "\b \b";
					 password.erase(password.size() - 1);
				 }
			 }
			 cout << '\n';
		 }
		 else if (choice == 2) {
			 cout << "Enter ID: ";
			 cin >> id;
		 }
		 for (int i = 0; i < userCount; i++)
		 {
			 if ((patient[i].username == username && patient[i].password == password) || (patient[i].username == username && patient[i].id == id))
			 {
				 index = i;
				 loginstatus = true;			// Login successful
				 break;
			 }
		 }
			 if (loginstatus)
				 break;
			 else
			 {
				 cout << "Login failed Please Try Agin\n";
				 count++;
			 }
	 } while (count < 5);
	 
	 return  loginstatus;
}
void registerpatient(Users patient[], int& patientCount, int& patientId)
{
	 Users newpatient;
	 getline(cin, newpatient.name);
	 string newusername;
	 bool usernameExists;
	 do
	 {
		  usernameExists = false;

		  cout << "Enter username: ";
		  cin >> newusername;

		  for (int i = 0; i < patientCount; i++)
		  {
			   if (patient[i].username == newusername)
			   {
					cout << "Username already exists. \nPlease choose a different username.\n";
					usernameExists = true;
					break;
			   }
		  }
	 } while (usernameExists);

	 newpatient.username = newusername;

	 int age;
	 bool validAge = false;

	 do {
		  cout << "Enter age: ";
		  cin >> age;
		  if (age < 18) {
			   char choice;
			   cout << "Invalid age. Age must be 18 or older.\n";
			   bool correctchoice = false;
			   while (correctchoice == false)
			   {
					correctchoice = false;
					cout << "Enter 'v' to enter a valid age or 'e' to exit: ";
					cin >> choice;
					if (choice == 'e' || choice == 'E' || choice == 'v' || choice == 'V') {
						 correctchoice = true;
						 break;
					}
					else
						 cout << "Invalid option selected.\n";
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

	 newpatient.age = age;

	 string password, confirmpassword;
	 bool equal = false;
	 do {
		  cout << "Password: ";
		  cin >> password;

		  cout << "Confirm Password: ";
		  cin >> confirmpassword;
		  if (password == confirmpassword) {
			   equal = true;
		  }
		  else {
			   cout << "Passwords do not match . Please try again\n";
		  }
	 } while (!equal);
	 newpatient.password = password;
	 newpatient.email = newpatient.username + "@Huser.com";

	 newpatient.id = patientId;
	 patientId++;
	 patient[patientCount] = newpatient;
	 patientCount++;

	 cout << "Patient registered successfully!\n";
	 cout << "Your Email is: " << newpatient.email << endl;
	 cout << "Your ID is: " << newpatient.id << endl;
	 cin.ignore();
}
void personalinfo(Users patient[], int patientCount, int PIndex) {
	 cout << "\nPersonal Info :-\n\n";
	 cout << "Full Name: " << patient[PIndex].name << "\n";
	 cout << "Age: " << patient[PIndex].age << "\n";
	 cout << "Usename: " << patient[PIndex].username << "\n";
	 cout << "Password: " << patient[PIndex].password << "\n";
	 cout << "Email: " << patient[PIndex].email << "\n";
	 cout << "ID: " << patient[PIndex].id << "\n";
	 /* int userid;
	  bool correctid = false;
	  do {
		   correctid = false;
		   cout << "\nEnter your ID: ";
		   cin >> userid;
		   for (int i = 0; i < patientCount; i++)
		   {
				if (patient[i].id == userid)
				{
					 correctid = true;
					 break;
				}
		   }
		   if (!correctid) {
				cout << "Wrong ID\n";
		   }
		   return;
	  } while (!correctid);*/
	  //all this =PIndex
}
void editpatientinfo(Users patient[], int patientCount, int PIndex) {
	 // for (int i = 0; i < patientCount; i++)

	 int editChoice = 0;

	 while (true) {
		  cout << "Select what you want to edit:\n1. Name\n2. Age\n3. Username\n4. Password\n";
		  cout << "Enter your choice: ";
		  infinit(editChoice, 4, 1);
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
							  correctchoice = false;
							  cout << "Enter 'v' to enter a valid age or 'e' to exit: ";
							  cin >> choice;
							  if (choice == 'e' || choice == 'E' || choice == 'v' || choice == 'V') {
								   correctchoice = true;
								   break;
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

					for (int j = 0; j < patientCount; j++)
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

			   break;
		  }
		  case 4:
		  {
			   string oldpassword;
			   int id;
			   cout << "\nEnter the old password: ";
			   cin >> oldpassword;
			   if (oldpassword == patient[PIndex].password) {
					cout << "\nEnter new password: ";
					cin >> patient[PIndex].password;
			   }
			   else {
					cout << "\nWrong Password\n";
					cout << "\nEnter your ID:";
					cin >> id;
					if (id == patient[PIndex].id) {
						 cout << "\nEnter new password: ";
						 cin >> patient[PIndex].password;

					}
					else {
						 cout << "\nWrong ID . Sorry you can not edit your password\n";
						 return;
					}
			   }
			   break;
		  }
		  }
		  cout << "Information updated successfully!\n";
		  char choice;
		  cout << "Do you want to edit something else? (y/n): ";
		  cin >> choice;
		  if (choice != 'y' || choice != 'Y') {
			   break;
		  }
		  cin.ignore();
	 }

}
void makeReservation(Users patient[], Hospitals hospital[], int patientCount, int& reservationId, int hospitalCount, int PIndex) {
	 int userid;
	 bool checkID = false;
	 cout << "\nEnter your ID: ";
	 cin >> userid;
	 /* for (int i = 0; i < patientCount; i++)
	  {
	  useless
	  }*/
	 if (patient[PIndex].id == userid)
	 {
		  if (patient[PIndex].reserCount < NumberOfReservation) {
			   cin.ignore();

			   cout << "\nEnter the patient's full name: ";
			   getline(cin, patient[PIndex].reservation[patient[PIndex].reserCount].PName);


			   cout << "\nEnter the patient's age: ";
			   cin >> patient[PIndex].reservation[patient[PIndex].reserCount].PAge;

			   viewHospitals(hospital, hospitalCount);
			   int choice = 0, choice2 = 0;

			   infinit(choice, hospitalCount, 1);
			   int index = choice - 1;
			   patient[PIndex].reservation[patient[PIndex].reserCount].hospital = hospital[index];
			   viewHospitalInfo(hospital, index, hospital[index].HospitalName);
			   bool correctchoice1 = false;

			   infinit(choice2, 2, 1);
			   int dayNumber = 0, dayindex;
			   if (choice2 == 1) {
					int specNumber, specindex;
					patient[PIndex].reservation[patient[PIndex].reserCount].ReservationType = "Surgery";
					bool correctchoice2 = false;
					while (correctchoice2 == false)
					{
						 correctchoice2 = false;
						 showspecialists(patient[PIndex].reservation[patient[PIndex].reserCount].hospital);
						 cin >> specNumber;
						 if (specNumber >= 1 && specNumber <= hospital[index].specialtiesCount) {
							  correctchoice2 = true;
							  break;
						 }
						 else
							  cout << "\nInvalid option selected.\n";
					}
					specindex = specNumber - 1;
					int roomnumber = 100 + rand() % 400;
					patient[PIndex].reservation[patient[PIndex].reserCount].HospitalSpecialty = hospital[index].HospitalSpecialties[specindex];
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
					patient[PIndex].reservation[patient[PIndex].reserCount].BedPrice = daysnum * (hospital[index].BedsPrice);
					patient[PIndex].reservation[patient[PIndex].reserCount].surgeryprice = hospital[index].surgeryprice;
					patient[PIndex].reservation[patient[PIndex].reserCount].Totalprice = (daysnum * (hospital[index].BedsPrice)) + (hospital[index].surgeryprice);
					bool correctchoice5 = false;
					while (correctchoice5 == false)
					{
						 correctchoice5 = false;
						 showDays();
						 cout << "\nPlease Enter the number of your first day in the room: ";
						 cin >> dayNumber;
						 if (dayNumber >= 1 && dayNumber <= daysInWeek) {
							  correctchoice5 = true;
							  break;
						 }
						 else
							  cout << "\nInvalid option selected.\n";
					}

			   }
			   else if (choice2 == 2) {
					int clinicNumber, clinicindex;
					patient[PIndex].reservation[patient[PIndex].reserCount].ReservationType = "Check-up";
					bool correctchoice4 = false;
					while (correctchoice4 == false)
					{
						 correctchoice4 = false;
						 showclinics(patient[PIndex].reservation[patient[PIndex].reserCount].hospital);
						 cin >> clinicNumber;
						 if (clinicNumber >= 1 && clinicNumber <= hospital[index].clinicsCount) {
							  correctchoice4 = true;
							  break;
						 }
						 else
							  cout << "\nInvalid option selected.\n";
					}
					clinicindex = clinicNumber - 1;
					patient[PIndex].reservation[patient[PIndex].reserCount].HospitalClinic = hospital[index].HospitalClinics[clinicindex];
					showDays();
					cout << "Please Enter the number of your reservation day : ";
					infinit(dayNumber, 7, 1);

					patient[PIndex].reservation[patient[PIndex].reserCount].ReservationPrice = hospital[index].ReservationPrice;

			   }
			   dayindex = dayNumber - 1;
			   patient[PIndex].reservation[patient[PIndex].reserCount].ReservationDay = ReservationDays[dayindex];
			   patient[PIndex].reservation[patient[PIndex].reserCount].ReservtionID = reservationId;
			   cout << "Your reservation has been confirmed.\n";
			   cout << "Your Reservation ID is : " << reservationId << endl;
			   patient[PIndex].reserCount++;
			   reservationId++;
		  }
		  else {
			   cout << "\nThe maximum number of reservations has been reached today . Try another day\n ";
		  }
		  checkID = true;
	 }
	 if (!checkID)
		  cout << "\nWrong ID\n";
}
int hospitalindex(Hospitals hospital[], int hospitalCount) {
	 viewHospitals(hospital, hospitalCount);
	 int choice = 0;
	 cout << "Enter your choice: ";
	 infinit(choice, hospitalCount, 1);
	 int index = choice - 1;
	 return index;
}
void showDays() {
	 for (int i = 0; i < daysInWeek; i++) {
		  cout << i + 1 << " - " << ReservationDays[i] << "\n";
	 }
}
void modifyreservation(Users patient[], int userCount, Hospitals hospital[], int hospitalCount, int PIndex) {
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
							  cout << "1. Patient's Name\n2. Patient's age\n3. Hospital\n4. Reservation Type\n5. Reservation Day (First day in the room)\n6. Number of days in the room\n";
							  infinit(editoption, 6, 1);
						 }
						 else if (patient[PIndex].reservation[i].ReservationType == "Check-up") {
							  cout << endl << "\nWhat do you want to edit?\n";
							  cout << "1. Patient's Name\n2. Patient's age\n3. Hospital\n4. Reservation Type\n5. Reservation Day\n";
							  infinit(editoption, 5, 1);
						 }
						 switch (editoption)
						 {

						 case 1:
						 {
							  cout << "Enter new patient's name: ";
							  cin.ignore();
							  getline(cin, patient[i].name);
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
							  char select;
							  index2 = hospitalindex(hospital, hospitalCount);
							  for (int z = 0; z < hospitalCount; z++) {
								   if (patient[PIndex].reservation[i].hospital.HospitalName == hospital[z].HospitalName)
								   {
										hospital[z].PatientReservationRooms += 1;
										break;
								   }
							  }
							  patient[PIndex].reservation[i].hospital = hospital[index2];
							  hospital[index2].PatientReservationRooms -= 1;
							  cout << "you want see hospital reservation info(y/n)? ";
							  cin >> select;
							  if (select == 'y' || select == 'Y')
								   viewHospitalInfo(hospital, hospitalCount, patient[PIndex].reservation[i].hospital.HospitalName);
							  break;
						 }
						 case 4:
						 {

							  cout << "Enter the number of new Reservation Type\n1. Surgery\n2. Check-up\nchoice: ";
							  infinit(typeoption, 2, 1);
							  int dayNumber, dayindex;
							  if (typeoption == 1) {
								   int specnumber;
								   int specindex;
								   int roomNumber;
								   patient[PIndex].reservation[i].ReservationType = "Surgery";
								   showspecialists(patient[PIndex].reservation[i].hospital);
								   cout << "Choice: ";
								   infinit(specnumber, patient[PIndex].reservation[i].hospital.specialtiesCount, 1);
								   specindex = specnumber - 1;
								   roomNumber = 101 + rand() % 400;
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
								   int clinicnumber;
								   int clinicindex;
								   patient[PIndex].reservation[i].ReservationType = "Check-up";

								   showclinics(patient[PIndex].reservation[i].hospital);
								   cout << "Enter your choice: ";
								   infinit(clinicnumber, 7, 1);
								   clinicindex = clinicnumber - 1;
								   patient[PIndex].reservation[i].HospitalClinic = hospital[index2].HospitalClinics[clinicindex];
								   showDays();
								   cout << "\nPlease Enter the number of your reservation day: ";
								   infinit(dayNumber, 7, 1);
								   dayindex = dayNumber - 1;
								   patient[PIndex].reservation[i].ReservationDay = ReservationDays[dayindex];
							  }
							  break;
						 }
						 case 5:
						 {
							  int dayNumber, dayindex;
							  showDays();
							  cout << "\nPlease Enter the number of your new reservation day: ";
							  infinit(dayNumber, 7, 1);
							  dayindex = dayNumber - 1;
							  patient[PIndex].reservation[i].ReservationDay = ReservationDays[dayindex];
							  break;
						 }
						 case 6:
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


						 cout << endl << "Do you want to modify something else ? (y | n)\nChoice : ";
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
void showreservation(Users patient[], int userCount, Hospitals hospital[], int hospitalCount, int PIndex) {
	 int search;
	 bool correctid = false;
	 do {
		  correctid = false;
		  cout << "Enter your Resevation ID: ";
		  cin >> search;
		  for (int i = 0; i < NumberOfReservation; i++) {
			   if (patient[PIndex].reservation[i].ReservtionID == search) {
					correctid = true;
					if (patient[PIndex].reservation[i].ReservationType == "Surgery") {
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
						 cout << "Reservation Day (First day in the room): " << patient[PIndex].reservation[i].ReservationDay << endl;
						 cout << "Bed Price: " << patient[PIndex].reservation[i].hospital.BedsPrice << endl;
						 cout << "surgery price: " << patient[PIndex].reservation[i].surgeryprice << endl;
						 cout << "Total Reservation Price :" << patient[PIndex].reservation[i].Totalprice << endl;
						 cout << "-----------------------\n";
						 break;
					}
					else if (patient[PIndex].reservation[i].ReservationType == "Check-up") {
						 cout << "Your reservation:-" << endl;
						 cout << "Patient's Name: " << patient[PIndex].reservation->PName << endl;
						 cout << "Patient's Age: " << patient[PIndex].reservation[i].PAge << endl;
						 cout << "Reservatiion ID: " << patient[PIndex].reservation[i].ReservtionID << endl;
						 cout << "Hospital ID: " << patient[PIndex].reservation[i].hospital.HospitalID << endl;
						 cout << "Hospital Name: " << patient[PIndex].reservation[i].hospital.HospitalName << endl;
						 cout << "Hospital Rate: " << patient[PIndex].reservation[i].hospital.HospitalRate << endl;
						 cout << "Reservation Type: " << patient[PIndex].reservation[i].ReservationType << endl;
						 cout << "Hospital Clinic: " << patient[PIndex].reservation[i].HospitalClinic << endl;
						 cout << "Reservation Day: " << patient[PIndex].reservation[i].ReservationDay << endl;
						 cout << "Reservation Price: " << patient[PIndex].reservation[i].ReservationPrice << endl;
						 cout << "-----------------------\n";
						 break;
					}
			   }
		  }
		  if (!correctid)
		  {
			   cout << "\nInvalid Resevation ID\n";
			   return;
		  }
	 } while (!correctid);
}
void cancelreservation(Users patient[], int userCount, Hospitals hospital[], int hospitalCount, int PIndex, int& reservationId) {
	 int search;
	 bool correctid = false;
	 do {
		  correctid = false;
		  cout << "Enter your Resevaion ID: ";
		  cin >> search;
		  for (int i = 0; i < patient[PIndex].reserCount; i++) {
			   if (patient[PIndex].reservation[i].ReservtionID == search) {
					correctid = true;
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
					cout << endl << "\nCancelled successfully" << endl;
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
void DisplayAsAdmin(Hospitals hospital[], int& HospitalCount)
{
	 char Cho;
	 int Ansewr;
	 cout << "Welcome To Hospital\n";
	 bool checkChoice, logOut = false;
	 char x;
	 cout << "\nLogin successful!" << endl;
	 while (true)
	 {
		  int Need = 0;
		  cout << "1- To Add Hospital\n2- To Delete Hospital\n3- To Modify\n4- print Data For All Hospital\n5- To print Data For Any Hospital You choose it\n6- Exit\n";
		  cout << "Enter your choice: ";
		  infinit(Need, 6, 1);
		  cin.ignore(); // لو شلتها دايما هيخش ف بداية كل فانشكن غلط 
		  switch (Need)
		  {
		  case 1:
			   AddHospital(hospital, HospitalCount);
			   break;
		  case 2:
			   DeleteHospital(hospital, HospitalCount);
			   break;
		  case 3:
			   ModifyHospital(hospital, HospitalCount);
			   break;
		  case 4:
			   PrintHospitalData(hospital, HospitalCount);
			   break;
		  case 5:
			   viewHospitalInfo(hospital, HospitalCount);
			   break;
		  case 6:
			   logOut = true;//fun.log out or  bool var. to end loop
			   break;
		  }
		  if (logOut)
			   break;
	 }
}
void DisplayAsPatient(Hospitals hospital[], int& HospitalCount, Users user[], int userCount, int& reservationid, int PIndex) {
	 cout << "Login successful. Welcome" << user[PIndex].name << "!\n";
	 int option = 0;
	 
	 bool logOut = false;
	 do {
		  int Choice=0;
		  char showhos;
		  cout << "1- to View Personal Info.\n" << "2- to View Hospital(s) Information.\n";
		  cout << "3-To sort hospital\n" << "4- to Edit your Information.\n" << "5- to make a new reservation.\n";
		  cout<< "6- to View your reservation.\n" << "7- to Modify an existing reservation.\n" << "8- to Cancel a reservation.\n" << "9- to log out.\n";
		  cout << "Enter the number you want to do : ";
		  infinit(option, 9, 1);
		  switch (option)
		  {
		  case 1:
			   personalinfo(user, userCount, PIndex);
			   break;
		  case 2:
			   cout << "1. All hospital\n2. Certain hospital\n ";
			   cout << "Enter your choice: ";
					infinit(Choice, 2, 1);
			   if (Choice == 1)
					PrintHospitalData(hospital, HospitalCount);
			   else
					viewHospitalInfo(hospital, HospitalCount);
			   break;
		  case 3:
			   cout << "1- Name\n2- Rate\n3- Beds Available\n4- Beds Price\n";
			   cout << "what you want sort by(1->4):";
					infinit(Choice, 4, 1);
					if (Choice == 1)
						 SortHospitalByName(hospital, HospitalCount);
					else if (Choice == 2)
						 SortHospitalByRating(hospital, HospitalCount);
					else if (Choice == 3)
						 SortByBedsAvailable(hospital, HospitalCount);
					else
						 SortByBedsPrice(hospital, HospitalCount);
					cout << "do you want see result of sorting (y/n)?";
						 cin >> showhos;
						 if (showhos == 'y' || showhos == 'Y')
							  viewHospitals(hospital, HospitalCount);
						 cout << "\n----------------------------\n";
			   break;
		  case 4:
			   editpatientinfo(user, userCount,PIndex);
			   break;
			   makeReservation(user, hospital, userCount, reservationid, HospitalCount, PIndex);
		  case 5:
			   break;
			   showreservation(user, userCount, hospital, HospitalCount, PIndex);
		  case 6:
			   break;
		  case 7:
			   modifyreservation(user, userCount, hospital, HospitalCount, PIndex);
			   break;
		  case 8:
			   cancelreservation(user, userCount, hospital, HospitalCount, PIndex, reservationid);
			   break;
		  case 9:
			   LogOut(logOut, PIndex);
			   cout << "Log out.....\n";
				break;
		  }
	 } while (!logOut);

}
bool Type(Users user[], int& usercount, Users patient[], int& patientCount, int& patientId)
{
	 bool checkType = false;
	 bool check = false;
	 char choice;
	 do
	 {
		  string Email = "";
		  cout << "Plese Enter Your Email: ";
		  cin >> Email;
		  for (int i = 0; i < usercount; i++)
		  {
			   if (Email == user[i].email)
			   {
					check = true;
					if (Email.find("@Hadmin.com") != string::npos) {
						 user[i].userType = "Admin";
						 checkType = true; // admin
						 break;
					}
			   }
		  }
		  if (!check)
			   cout << "Email Not Found\n";
		  cout << "Do You Want Add This Email ? (y|n): ";
		  cin >> choice;
		  if (choice == 'y' || choice == 'Y')
			  registerpatient(patient, patientCount, patientId);
	 } while (!check);
	 return checkType;
}
void LogOut(bool& checkLog, int& PIndex) {
	 checkLog = true;
	 PIndex = -1;
}