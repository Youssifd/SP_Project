#pragma once
#include<conio.h>
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
#define NumberOfHospital 10
#define NumberOfReservation 20
#define NumberOfUsers 20
#define NumberOfSpecialties 25
#define NumberOfClinics 25
#define daysInWeek  7

string ReservationDays[daysInWeek] = { "Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday" };
string tests[15] = { " Basic Metabolic Panel (BMP)"," Comprehensive Metabolic Panel(CMP)"," Lipid Profile"," hyroid Test(s)"," Complete Blood Count(CBC)"," Urinalysis(UA)"," Glucose Level"," Antinuclear Antibody(ANA)"," Liver Function Panell","Hemoglobin AIC","Abdominal X-ray","Bone X-ray","Chest X-ray","Dental X-ray","Fluoroscopy" };
string laboratories[10] = { "Almokhtabar","Alborg","Speed","Nile","Alhakma","Gamma","Al-Fanar","Alfa","Cairo scan","Beta lab group" };
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
	 float ReservationPrice=0;//for check-up
	 float BedPrice = 0; //for surgery
	 float surgeryprice = 0;
	 float Totalprice = 0;
};
struct LABReservations {
	 string Pname;
	 string RPlace;
	 string PhoneNumber;
	 string gender;
	 string Ntest;
	 string id;
	 int age;


};
struct Users {
	 int id;
	 int age;
	 int reserCount = 0;
	 int LabRCount = 0;
	 int totalpaid = 0;
	 string userType = "Patient";
	 string name;
	 string email;
	 string username;
	 string password;
	 string phonenumber;
	 string gender;
	 Reservations* reservation = new Reservations[NumberOfReservation];
	 LABReservations* LabR = new LABReservations[NumberOfReservation];

};
int  reservationID = 101, labReservation = 501, userCount = 0, hospitalCount = 0,userID=1001;
int Lindex = -1, Pindex = -1, Hindex = -1, Rindex = -1,SPindex=-1,CLindex=-1,Dindex=-1,LabRindex=-1;
