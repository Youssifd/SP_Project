#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#define NumberOfHospital 5
#define NumberOfReservation 10
#define NumberOfUsers 15
#define NumberOfSpecialties 11
#define NumberOfClinics 19

struct Hospitals {
	 int HospitalID;
	 int PatientReservationRooms;//BedsAvailable
	 float ReservationPrice;//for check-up
	 float BedsPrice; //for surgery
	 float HospitalRate;
	 string HospitalName;
	 string HospitalSpecialties[NumberOfSpecialties];
	 string HospitalClinics[NumberOfClinics];
};
struct Reservations {
	 int ReservtionID;
	 Hospitals hospital;
	 string ReservationType[2] = { "check-up","surgery" };
	 string ReservationDay[7] = { "Saturday","Sunday","Monday","Tuesday","Wednesday"," Thursday","Friday" };
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

void PrintHospitalData(Hospitals hospital[]);
void PrintPatientData(Users user[], int userCount);
void SortHospitalByName(Hospitals hospital[]);
void SortHospitalByRating(Hospitals hospital[]);
void SortByBedsAvailable(Hospitals hospital[]);
void SortByBedsPrice(Hospitals hospital[]);
void DefinitonOfVariable(Hospitals hospital[]);
void DefinitonOfVariable(Users user[],int& userCount );
bool loginAsAdmin(Users user[], int userCount);
void main() {
	 Hospitals hospital[NumberOfHospital];
	 Users user[NumberOfUsers];
	 int userCount = 0;
	 DefinitonOfVariable(hospital);
	 DefinitonOfVariable(user,userCount);
	// PrintPatientData(user, userCount);

	 if (loginAsAdmin(user, userCount)) {
		  cout << "\nLogin successful!" << endl;
	 }
	 else {
		  cout << "\nLogin failed. Invalid username or password." << endl;
	 }

}
void PrintHospitalData(Hospitals hospital[]) {
	 for (int i = 0; i < NumberOfHospital; i++) {
		  cout << "Hospital name: " << hospital[i].HospitalName << "\nHospital ID: " << hospital[i].HospitalID << "\nNunmber of beds available: " << hospital[i].PatientReservationRooms << "\nBeds price per night: " << hospital[i].BedsPrice << "\nReservation price for check-up: " << hospital[i].ReservationPrice << "\nHospiral Rate: " << hospital[i].HospitalRate << endl;
		  cout << "-----------------------------------------------\n";
		  cout << "Hospital Specialties:\n";
		  for (int j = 0; j < NumberOfSpecialties; j++)
		  {
			   cout << j + 1 << "-" << hospital[i].HospitalSpecialties[j] << ". ";
			   if ((j - 1) % 2 == 0)
					cout << "\n";
		  }
		  cout << "\n-----------------------------------------------\n";
		  cout << "Hospital Clinics:\n";
		  for (int j = 0; j < NumberOfClinics; j++)
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
void SortHospitalByName(Hospitals hospital[]) {
	 for (int i = 0; i < NumberOfHospital - 1; ++i) {
		  for (int j = i + 1; j < NumberOfHospital; j++) {
			   if (hospital[i].HospitalName > hospital[j].HospitalName)
					swap(hospital[i], hospital[j]);
		  }
	 }
}
void SortHospitalByRating(Hospitals hospital[]) {
	 for (int i = 0; i < NumberOfHospital - 1; ++i) {
		  for (int j = i + 1; j < NumberOfHospital; j++) {
			   if (hospital[i].HospitalRate > hospital[j].HospitalRate)
					swap(hospital[i], hospital[j]);
		  }
	 }
}
void SortByBedsAvailable(Hospitals hospital[]) {
	 for (int i = 0; i < NumberOfHospital - 1; ++i) {
		  for (int j = i + 1; j < NumberOfHospital; j++) {
			   if (hospital[i].PatientReservationRooms > hospital[j].PatientReservationRooms)
					swap(hospital[i], hospital[j]);
		  }
	 }
}
void SortByBedsPrice(Hospitals hospital[]) {
	 for (int i = 0; i < NumberOfHospital - 1; ++i) {
		  for (int j = i + 1; j < NumberOfHospital; j++) {
			   if (hospital[i].BedsPrice > hospital[j].BedsPrice)
					swap(hospital[i], hospital[j]);
		  }
	 }
}
void DefinitonOfVariable(Hospitals hospital[]) {
	 ifstream HospitalInfo("Data/Hospitalinfo.txt", ios::app);
	
	 for (int i = 0; !HospitalInfo.eof(); i++) {
		  getline(HospitalInfo, hospital[i].HospitalName);
		  HospitalInfo >> hospital[i].HospitalID >> hospital[i].PatientReservationRooms >> hospital[i].ReservationPrice >> hospital[i].BedsPrice >> hospital[i].HospitalRate;
		  for(int j=0;j< NumberOfSpecialties;j++)
			   HospitalInfo >> hospital[i].HospitalSpecialties[j];
		  for (int j = 0; j < NumberOfClinics; j++)
			   HospitalInfo >> hospital[i].HospitalClinics[j];
		  HospitalInfo.ignore();
		  HospitalInfo.ignore();
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
