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

struct Hospitals {
	 int HospitalID;
	 int PatientReservationRooms;//BedsAvailable
	 float ReservationPrice; //for check-up
	 float BedsPrice; //for surgery
	 float HospitalRate;
	 int specialtiesCount = 11; // to stop print garbage at other hos.(screen shot)
	 int clinicsCount = 19;
	 string HospitalName;
	 string HospitalSpecialties[NumberOfSpecialties];
	 string HospitalClinics[NumberOfClinics];
};
struct Reservations {
	 int ReservtionID;
	 Hospitals hospital;
	 string ReservationType;
	 string ReservationDay;
	 string ReservationSpecialtie = "NOT RESERVATED";
	 string ReservationClinic = "NOT RESERVATED";
	 string PatientReservationRoom;
};
struct Users {
	 int id;
	 int age;
	 int reserCount = 0;
	 string userType="Patient";
	 string name;
	 string email;
	 string username;
	 string password; 
	 Reservations* reservationtemp = new Reservations[NumberOfReservation];
};
void DefinitonOfVariable(Hospitals hospital[],int& hospitalCount);//YOUSSIF
void DefinitonOfVariable(Users user[], int& userCount);//YOUSSIF
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
void modifyreservation(Users patient[], Reservations patientreservation[], Hospitals hospital[], int HospitalCount);
void showreservation(Users patient[], Reservations patientreservation[], Hospitals hospital[]);
void cancelreservation(Users patient[], Reservations patientreservation[], Hospitals hospital[]);
void mainReservation(Users patient[], Reservations patientreservation[], Hospitals hospital[], int HospitalCount);
void showspecialists(Hospitals hospital[], int hospital_index);
void showclinics(Hospitals hospital[], int hospital_index);
void viewHospitals(Hospitals hospital[], int HospitalCount);//sama
void viewHospitalInfo(Hospitals hospital[], int hospital_index);//sama

void DisplayAsAdmin(Hospitals hospital[], int& HospitalCount);//GEN.
void DisplayAsPatient(Hospitals hospital[], int& HospitalCount, Users user[], int userCount);//GEN.
void main(){
	 Hospitals hospital[NumberOfHospital];
	 Users user[NumberOfUsers];
	 int userCount = 0, hospitalCount = 0;
	 DefinitonOfVariable(hospital, hospitalCount);
	 DefinitonOfVariable(user, userCount);
	 if (loginAsAdmin(user, userCount))
	 {
		  DisplayAsAdmin(hospital, hospitalCount);
	 }
	
	/*
		 else if (loginAsPatient()){
		 DisplayAsPatient();
		 }

	*/

		
	

}
void DefinitonOfVariable(Hospitals hospital[],int& hospitalCount) {
	 ifstream HospitalInfo("Data/Hospitalinfo.txt", ios::app);
	
	 for (int i = 0; !HospitalInfo.eof(); i++) {
		  getline(HospitalInfo, hospital[i].HospitalName);
		  HospitalInfo >> hospital[i].HospitalID >> hospital[i].PatientReservationRooms >> hospital[i].ReservationPrice >> hospital[i].BedsPrice >> hospital[i].HospitalRate;
		  for(int j=0;j< hospital[i].specialtiesCount;j++)
			   HospitalInfo >> hospital[i].HospitalSpecialties[j];
		  for (int j = 0; j < hospital[i].clinicsCount; j++)
			   HospitalInfo >> hospital[i].HospitalClinics[j];
		  HospitalInfo.ignore();
		  HospitalInfo.ignore();
		  hospitalCount++;
	 }
	 HospitalInfo.close();
}
void DefinitonOfVariable(Users user[],int& userCount ) {
	 ifstream UserInfo("Data/UserInfo.txt", ios::app);
	 for (int i = 0; !UserInfo.eof(); i++) {
		  UserInfo >> user[i].id >> user[i].username >> user[i].age >> user[i].email >> user[i].password;
		  getline(UserInfo,user[i].name);
		// UserInfo.ignore();
		  if (user[i].email.find("@Hadmin.com") != string::npos) {
			   user[i].userType = "Admin";
					delete[] user[1].reservationtemp;
					user[1].reservationtemp = NULL;
			 
		  }
		  if (user[i].userType == "Patient")
		  {
			   //definition of reser
		  }
		
		  userCount++;
	 }
	 UserInfo.close();
}
void PrintHospitalData(Hospitals hospital[],int hospitalCount) {
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
		  cout << "         Hospital Clinics         \n" ;
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
void PrintPatientData(Users user[],int userCount) {
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
void SortHospitalByName(Hospitals hospital[],int hospitalCount) {
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
			   cout << "*";
			   password += chForPass;
		  }

		  cout << '\n';

		  for (int i = 0; i < userCount; i++) {
			   if (username == user[i].username && password == user[i].password && user[i].userType == "Admin") {
					loggedIn = true;
					cout << "Wlecome " << user[i].username << "\n\n";
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

		  for (int j = 0; j < NumberOfSpecialties; j++)
			   hos[HospitalCount - 1].HospitalSpecialties[j] = hos[0].HospitalSpecialties[j];

		  for (int z = 0; z < NumberOfClinics; z++)
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
	 int choice;
	 char answer;
	 bool found = false;
	 bool Exist = false;


	 int ans;
	 string Hospitalclinics;
	 string HospitalSpecialties;
	 do
	 {
		  bool checkChoice = false;
		  cout << "what do you want to modify ?" << endl;
		  cout << "1-Hospital ID\n2-Patient Reservation Rooms\n3-Reservation Price\n4-BedsPrice\n5-Hospital Rate\n6-Hospital Name\n7-Hospital Specialties\n8-Hospital Clinics" << endl;
		  cout << "enter your choice: ";

		  while (!checkChoice)
		  {
			   cin >> choice;

			   if (choice >= 1 && choice <= 8)
					checkChoice = true;

			   else
			   {
					cout << "In Valied Choice" << endl;
					cout << "enter valied choice : ";
			   }
		  }
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
						 cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate : " << hospital[i].HospitalRate << endl;
						 break;
					case 2:
						 cout << "Enter the New Number Of Rooms: ";
						 cin >> hospital[i].PatientReservationRooms;
						 cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate : " << hospital[i].HospitalRate << endl;
						 break;
					case 3:
						 cout << "Enter the Reservation Price : ";
						 cin >> hospital[i].ReservationPrice;
						 cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate : " << hospital[i].HospitalRate << endl;
						 break;

					case 4:
						 cout << "Enter the New Beds Price: ";
						 cin >> hospital[i].BedsPrice;
						 cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate : " << hospital[i].HospitalRate << endl;
						 break;
					case 5:
						 cout << "Enter the New Hospital Rate: ";
						 cin >> hospital[i].HospitalRate;
						 cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate : " << hospital[i].HospitalRate << endl;
						 break;
					case 6:
						 cout << "Enter the New Hospital Name: ";
						 getline(cin, hospital[i].HospitalName);
						 cin.ignore();
						 cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate : " << hospital[i].HospitalRate << endl;
						 break;
					case 7:

						 //	string HospitalSpecialties;
						 cout << "1- Add" << endl << "2- Delete " << endl;
						 cout << "Enter your Answer ";
						 cin >> ans;
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
								   cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate : " << hospital[i].HospitalRate << endl;
								   hospital[i].HospitalSpecialties[hospital[i].specialtiesCount - 1] = HospitalSpecialties;
								   for (int j = 0; j < hospital[i].specialtiesCount; j++)
										cout << hospital[i].HospitalSpecialties[j] << endl;
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
							  if (Exist)
							  {
								   cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate : " << hospital[i].HospitalRate << endl;
								   for (int j = 0; j < hospital[i].specialtiesCount; j++)
								   {
										//	if (hospital[i].HospitalSpecialties[j] == "")
											//	continue;
										cout << hospital[i].HospitalSpecialties[j] << endl;
								   }

							  }
							  if (!Exist)
								   cout << "NOT FOUND" << endl;
						 }

						 break;

					case 8:
					{
						 //int ans;
						 //string Hospitalclinics;
					 //	cin.ignore();
						 cout << "1- Add" << endl << "2- Delete " << endl;
						 cout << "Enter your Answer ";
						 cin >> ans;
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
							  cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate : " << hospital[i].HospitalRate << endl;
							  for (int j = 0; j < hospital[i].clinicsCount; j++)
								   cout << hospital[i].HospitalClinics[j] << endl;

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
										//	hospital[i].clinicsCount--;
											//hospital[i].HospitalClinics[j] = "";


								   }

							  }
							  if (Exist)
							  {
								   cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate : " << hospital[i].HospitalRate << endl;
								   for (int j = 0; j < hospital[i].clinicsCount; j++)
								   {
										//if (hospital[i].HospitalClinics[j] == "")
									//		continue;
										cout << hospital[i].HospitalClinics[j] << endl;
								   }

							  }
							  if (!Exist)
								   cout << "NOT FOUND" << endl;
						 }

						 break;
					}


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
	 bool found = false;

	 char answer;
	 do
	 {
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
					if (i!=(HospitalCount-1))
					swap(hospital[i], hospital[HospitalCount - 1]);//edit -> Check the hospital not the last one
					HospitalCount--;
					PrintHospitalData(hospital, HospitalCount);
					/*for (int j = 0; j < HospitalCount; j++)
					{
						 cout << "--------------------------" << endl;
						 cout << hospital[j].HospitalName << endl;
						 cout << hospital[j].HospitalID << endl;
						 cout << hospital[j].ReservationPrice << endl;
						 cout << hospital[j].BedsPrice << endl;
						 cout << hospital[j].PatientReservationRooms << endl;
						 cout << hospital[j].HospitalRate << endl;
						 cout << "       Hospital Specialties" << endl;
						 cout << "       -------------------- " << endl;
						 for (int z = 0; z < hospital[j].specialtiesCount; z++)
						 {
							  cout << hospital[j].HospitalSpecialties[z] << endl;
						 }
						 cout << "         Hospital Clinics         " << endl;
						 cout << "         ----------------         " << endl;
						 for (int z = 0; z < hospital[j].clinicsCount; z++)
							  cout << hospital[j].HospitalClinics[z] << endl;
							:) :) hezar t2el shwaia  :) :)
					}*/
			   }
		  }
		  if (!found)
			   cout << "Hospital Not Found\n ";

		  cout << "Do you want to continue?";
		  cin >> answer;
		  cin.ignore(); //hspname
	 } while (answer == 'y' || answer == 'Y');
}
void viewHospitals(Hospitals hospital[], int HospitalCount)
{
	 cout << " Available hospitals : - " << "\n";
	 for (int i = 0; i < HospitalCount; i++)
	 {
		  cout << "  " << i + 1 << " - " << hospital[i].HospitalName << endl;
	 }
}
void viewHospitalInfo(Hospitals hospital[], int hospital_index)
{
	 if (hospital_index < NumberOfHospital && hospital_index >= 0)
	 {
		  cout << " Hospital name        : " << hospital[hospital_index].HospitalName << "\n";
		  cout << " Hospital ID          : " << hospital[hospital_index].HospitalID << "\n";
		  cout << " Hospital rate        : " << hospital[hospital_index].HospitalRate << "\n";
		  cout << " Hospital specialties :- " << endl;
		  for (int i = 0; i < NumberOfSpecialties; i++)
		  {
			   cout << i + 1 << "- " << hospital[hospital_index].HospitalSpecialties[i] << ".\n";
		  }
		  cout << " Hospital clinics :- " << endl;
		  for (int j = 0; j < NumberOfClinics; j++)
		  {
			   cout << j + 1 << "- " << hospital[hospital_index].HospitalClinics[j] << ".\n";
		  }
	 }
	 else
		  cout << " This hospital is not available" << endl;
}
void modifyreservation(Users patient[], Reservations patientreservation[], Hospitals hospital[], int HospitalCount) {
	 int search;
	 bool correctid = false;
	 do {
		  correctid = false;
		  cout << "Enter your Reservation ID: ";
		  cin >> search;

		  for (int i = 0; i < NumberOfReservation; i++) {
			   if (patientreservation[i].ReservtionID == search) {
					correctid = true;
					char editoption;
					char modifyagine;
					char typeoption;
					do {
						 bool correctchoice = false;
						 while (correctchoice == false)
						 {
							  correctchoice = false;
							  cout << endl << "What do you want to edit?\n";
							  cout << "1\\Hospital Name\n2\\Reservation Type\n3\\Reservation Day\n";
							  cout << "Choice: ";
							  cin >> editoption;
							  if (editoption >= '1' && editoption <= '3') {
								   correctchoice = true;
								   break;
							  }
							  else
								   cout << "Invalid choice" << endl;
						 }
						 if (editoption == '1') {
							  viewHospitals(hospital, HospitalCount);//
							  cout << "Enter the new Hospital Name: ";
							  cin.ignore(1, '\n');
							  getline(cin, patientreservation[i].hospital.HospitalName);
						 }
						 else if (editoption == '2') {
							  int index = 1;  //delet
							  bool correctchoice = false;
							  while (correctchoice == false)
							  {
								   correctchoice = false;
								   cout << "\nEnter the number of new Rservation Type\n1\\Surgery\n2\\Check-up\nchoice: ";
								   cin >> typeoption;
								   if (typeoption >= '1' && typeoption <= '2') {
										correctchoice = true;
										break;
								   }
								   else
										cout << "Invalid choice" << endl;
							  }
							  if (typeoption == '1') {
								   int specnumber;
								   int specindex;
								   patientreservation[i].ReservationType = "Surgery";
								   showspecialists(hospital, index);
								   bool correctchoice = false;
								   while (correctchoice == false)
								   {
										correctchoice = false;
										cout << "Enter the number of specialist for your surgery: ";
										cin >> specnumber;
										if (specnumber >= 1 && specnumber <= NumberOfSpecialties) {
											 correctchoice = true;
											 break;
										}
										else
											 cout << "Invalid choice" << endl;
								   }
								   specindex = specnumber - 1;
								   patientreservation[i].ReservationSpecialtie = hospital[index].HospitalSpecialties[specindex];
								   cout << "Successfully changed" << endl;
							  }
							  else  if (typeoption == '2') {
								   int clinicnumber;
								   int clinicindex;
								   patientreservation[i].ReservationType = "Check-up";
								   showclinics(hospital, index);
								   bool correctchoice = false;
								   while (correctchoice == false)
								   {
										correctchoice = false;
										cout << "Enter the number of clinic for your Check-up: ";
										cin >> clinicnumber;
										if (clinicnumber >= 1 && clinicnumber <= NumberOfClinics) {
											 correctchoice = true;
											 break;
										}
										else
											 cout << "Invalid choice" << endl;
								   }
								   clinicindex = clinicnumber - 1;
								   patientreservation[i].ReservationSpecialtie = hospital[index].HospitalSpecialties[clinicindex];
								   cout << "Successfully changed" << endl;
							  }
							  else {
								   cout << "Invalid choice";
							  }
						 }
						 else if (editoption == '3') {
							  cout << "Enter the new Reserrvation Day: ";
							  cin.ignore(1, '\n');
							  getline(cin, patientreservation[i].ReservationDay);
						 }
						 else
							  cout << "Invalid choice\n";
						 cout << endl << "Do you want to modify something else? (y|n)\nChoice: ";
						 cin >> modifyagine;

					} while (modifyagine == 'y' || modifyagine == 'Y');

					break;
			   }
		  }
		  if (!correctid)
			   cout << "Invalid Reservation ID\n";
	 } while (!correctid);
}
void showreservation(Users patient[], Reservations patientreservation[], Hospitals hospital[]) {
	 int search;
	 bool correctid = false;
	 do {
		  correctid = false;
		  cout << "Enter your Resevation ID: ";
		  cin >> search;

		  for (int i = 0; i < NumberOfReservation; i++) {
			   if (patientreservation[i].ReservtionID == search) {
					correctid = true;
					cout << "============================================================" << endl;
					cout << endl << "Your reservation:" << endl;
					cout << "Reservatiion ID\t\t: " << patientreservation[i].ReservtionID << endl;
					cout << "Hospital ID\t\t: " << patientreservation[i].hospital.HospitalID << endl;
					cout << "Hospital Name\t\t: " << patientreservation[i].hospital.HospitalName << endl;
					cout << "Hospital Rate\t\t: " << patientreservation[i].hospital.HospitalRate << endl;
					cout << "Reservation Type\t: " << patientreservation[i].ReservationType << endl;
					cout << "Hospital Specialtie\t: " << patientreservation[i].ReservationSpecialtie << endl;
					cout << "Hospital Clinic\t\t: " << patientreservation[i].ReservationClinic << endl;
					cout << "Number of Room\t\t: " << patientreservation[i].PatientReservationRoom << endl;
					cout << "Bed Price\t\t: " << patientreservation[i].hospital.BedsPrice << endl;
					cout << "Reservation Day\t\t: " << patientreservation[i].ReservationDay << endl;
					cout << "Reservation Price\t: " << patientreservation[i].hospital.ReservationPrice << endl;
					cout << endl << "============================================================" << endl;
					break;
			   }
		  }
		  if (!correctid)
			   cout << "Invalid Resevation ID\n";
	 } while (!correctid);
}
void cancelreservation(Users patient[], Reservations patientreservation[], Hospitals hospital[]) {
	 int search;
	 bool correctid = false;
	 do {
		  correctid = false;
		  cout << "Enter your Resevaion ID: ";
		  cin >> search;

		  for (int i = 0; i < NumberOfReservation; i++) {
			   if (patientreservation[i].ReservtionID == search) {
					correctid = true;
					patientreservation[i].ReservtionID = 0;
					patientreservation[i].hospital.HospitalName = " ";
					patientreservation[i].ReservationType = " ";
					patientreservation[i].ReservationSpecialtie = " ";
					patientreservation[i].ReservationClinic = " ";
					patientreservation[i].PatientReservationRoom = " ";
					patientreservation[i].hospital.BedsPrice = 0;
					patientreservation[i].ReservationDay = " ";
					patientreservation[i].hospital.ReservationPrice = 0;
					cout << endl << "Cancelled successfully" << endl;
					break;
			   }
		  }
		  if (!correctid)
			   cout << "Invalid Resevation ID\n";
	 } while (!correctid);
}
void mainReservation(Users patient[], Reservations patientreservation[], Hospitals hospital[], int HospitalCount) {
	 cout << "Enter your Resevation ID: ";
	 cin >> patientreservation[0].ReservtionID;
	 char transaction;
	 char reservation_again;
	 do {
		  bool correctchoice = false;
		  while (correctchoice == false)
		  {
			   correctchoice = false;
			   cout << endl << "What do you want to do in reservation?" << endl;
			   cout << "1\\Modify your reservation\n2\\Show your reservation\n3\\Cancel the reservation\nChoice: ";
			   cin >> transaction;
			   if (transaction >= '1' && transaction <= '3') {
					correctchoice = true;
					break;
			   }
			   else
					cout << "Invalid choice" << endl;
		  }
		  if (transaction == '1') {
			   modifyreservation(patient, patientreservation, hospital, HospitalCount);
		  }
		  else if (transaction == '2') {
			   showreservation(patient, patientreservation, hospital);
		  }
		  else if (transaction == '3') {
			   cancelreservation(patient, patientreservation, hospital);
		  }
		  else
			   cout << "Invalid choice\n";
		  cout << endl << "Do you want something else from reservation? (y|n)" << endl << "Choice: ";
		  cin >> reservation_again;

	 } while (reservation_again == 'y' || reservation_again == 'Y');
}
void showspecialists(Hospitals hospital[], int hospital_index) {
	 for (int i = 0; i < hospital[hospital_index].specialtiesCount; i++) {
		  cout << i + 1 << "-" << hospital[hospital_index].HospitalSpecialties[i] << endl;
	 }
}
void showclinics(Hospitals hospital[], int hospital_index) {
	 for (int i = 0; i < hospital[hospital_index].clinicsCount; i++) {
		  cout << i + 1 << "-" << hospital[hospital_index].HospitalClinics[i] << endl;
	 }
}
void DisplayAsAdmin(Hospitals hospital[], int& HospitalCount)
{
	 char Cho;
	 int Ansewr;
	 cout << "Welcome To Hospital\n";
	 int Need;
	 bool checkChoice = false;
	 char x;
	 do {
			   do
			   {
						 checkChoice = false;
					
						 cout << "\nLogin successful!" << endl;
						 cout << "1- To Add Hospital\n2- To Delete Hospital\n3- To Modify\n4- Exsit\n\n";

						 while (!checkChoice)
						 {
							  cout << "enter valied choice : ";
							  cin >> Need;

							  if (Need >= 1 && Need <= 4)
								   checkChoice = true;
							  else
							  {
								   cout << "In Valied Choice" << endl;
							  }
						 }
						 cin.ignore(); // áæ ÔáÊåÇ ÏÇíãÇ åíÎÔ Ý ÈÏÇíÉ ßá ÝÇäÔßä ÛáØ 
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
							  break;
						 }
					cout << "Do you want login another account: ";
		 
					cin >> x;
			   } while (x == 'y' || x == 'Y');
		  
		  cout << "Press 'y' to Continue: ";
		  cin >> Cho;
		  cin.ignore(); // Email.....
	 } while (Cho == 'y' || Cho == 'Y');

}
void DisplayAsPatient(Hospitals hospital[], int& HospitalCount, Users user[], int userCount) {

}
