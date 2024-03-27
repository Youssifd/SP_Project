#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#define NumberOfHospital 6
#define NumberOfReservation 10
#define NumberOfUsers 8
#define NumberOfSpecialties 11

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

void PrintHospitalData(Hospitals hospital[]);
void PrintPatientData(Hospitals hospital[]);
void SortHospitalByName(Hospitals hospital[]);
void SortHospitalByRating(Hospitals hospital[]);
void SortByBedsAvailable(Hospitals hospital[]);
void SortByBedsPrice(Hospitals hospital[]);
void DefinitonOfVariable(Hospitals hospital[]);
void main() {
}
