#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
#define NumberOfHospital 5
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
	 string ReservationType; // { "check-up","surgery" }
	 string ReservationDay; 
};
struct Users {
	 int id;
	 int age;
	 string userType="Patient";
	 string name;
	 string email;
	 string username;
	 string password;
};

void DefinitonOfVariable(Hospitals hospital[],int& hospitalCount);
void DefinitonOfVariable(Users user[], int& userCount);
void PrintHospitalData(Hospitals hospital[], int hospitalCount);
void PrintPatientData(Users user[], int userCount);
void SortHospitalByName(Hospitals hospital[], int hospitalCount);
void SortHospitalByRating(Hospitals hospital[], int hospitalCount);
void SortByBedsAvailable(Hospitals hospital[], int hospitalCount);
void SortByBedsPrice(Hospitals hospital[], int hospitalCount);
bool loginAsAdmin(Users user[], int userCount);
void print(Hospitals hos[], int hospitalCount);//test name
void main() {
	 Hospitals hospital[NumberOfHospital];
	 Users user[NumberOfUsers];
	 int userCount = 0,hospitalCount=0;
	 DefinitonOfVariable(hospital,hospitalCount);
	 DefinitonOfVariable(user,userCount);
	 	 
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
		  if (user[i].email.find("@Hadmin.com") != string::npos)
			   user[i].userType = "Admin";
		
		  userCount++;
	 }
	 UserInfo.close();
}
void PrintHospitalData(Hospitals hospital[],int hospitalCount) {
	 for (int i = 0; i < hospitalCount; i++) {
		  cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate: " << hospital[i].HospitalRate << endl;
		  cout << "-----------------------------------------------\n";
		  cout << "Hospital Specialties:\n";
		  for (int j = 0; j < hospital[i].specialtiesCount; j++)
		  {
			   cout << j + 1 << "-" << hospital[i].HospitalSpecialties[j] << ". ";
			   if ((j - 1) % 2 == 0)
					cout << "\n";
		  }
		  cout << "\n-----------------------------------------------\n";
		  cout << "Hospital Clinics:\n";
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
	 bool loggedIn = false;
	 int count = 0;
	 string username, password;

	 do {
		  cout << "Enter username: ";
		  cin >> username;
		  cout << '\n';
		  cout << "Enter password: ";
		  cin >> password;
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
void print(Hospitals hos[], int hospitalCount) {
	 for (int i = 0; i < hospitalCount; i++)
	 {
		  cout << hos[i].HospitalName << "\n======================\n";
	 }
}
