#include<iostream>
using namespace std;
#define NumberOfHospital 6
#define NumberOfReservation 10
#define NumberOfUsers 8
#define NumberOfSpecialties 15
struct Hospitals {
	 int HospitalID;
	 int PatientReservationRooms[NumberOfHospital];
	 float ReservationPrice;
	 float HospitalRate;
	 string HospitalSpecialties[NumberOfSpecialties];
	 string HospitalClinics[NumberOfSpecialties];
};
struct Reservations {
	 int ReservtionID[NumberOfReservation];
	 Hospitals hospital[10];
	 string ReservationType[2] = { "check-up","consultation" };
	 string ReservationDay[7] = { "Saturday","Sunday","Monday","Tuesday","Wednesday"," Thursday","Friday" };
};
struct Users {
	 int userID;
	 string userType;
	 string username;
	 string password;
	 string CheckUserType="patient";
	 /*if (CheckUserType == userType[1]) {
		  Reservations reservation[NumberOfHospital];
		  by use pointer
	 }*/
};
void PrintHospitalData();
void PrintPatientData();
void SortHospitalByName();
void SortHospitalByRating();
void SortByBedsAvailable();
void SortByBedsPrice();
void main() {
}
