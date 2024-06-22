#pragma once
#include<conio.h>
#include<fstream>
#include<iostream>
#include<string>

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
	 int PAge;
	 int numberOfDays = 0;//P-> patient
	 Hospitals hospital;
	 string PName;
	 string ReservationType;
	 string ReservationDay;
	 string HospitalSpecialty = "NOT-RESERVATED";
	 string HospitalClinic = "NOT-RESERVATED";
	 string PatientReservationRoom = "NONE";//asking TA
	 string PhoneNumber = "";
	 float ReservationPrice;//for check-up
	 float BedPrice = 0; //for surgery
	 float surgeryprice = 0;
	 float Totalprice = 0;
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
	 string phonenumber;
	 string gender;
	 Reservations* reservation = new Reservations[NumberOfReservation];
};
int  reservationID = 101, labReservation = 501, userCount = 0, hospitalCount = 0;
