#include<iostream>
using namespace std;
#define NumberOfHospital 6
#define NumberOfReservation 10
#define NumberOfUsers 8
#define NumberOfSpecialties 15
struct Hospitals {
	 int HospitalID;
	 int PatientReservationRooms;//BedsAvailable
	 float ReservationPrice;
	 float BedsPrice;
	 float HospitalRate;
	 string HospitalSpecialties[NumberOfSpecialties];
	 string HospitalClinics[NumberOfSpecialties];
};
struct Reservations {
	 int ReservtionID;
	 Hospitals hospital;
	 string ReservationType[2] = { "check-up","surgery" };
	 string ReservationDay[7] = { "Saturday","Sunday","Monday","Tuesday","Wednesday"," Thursday","Friday" };
};
struct Users {
	 int userID;
	 string userType;
	 string username;
	 string password;
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
