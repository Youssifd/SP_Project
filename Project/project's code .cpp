#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#define NumberOfHospital 5
#define NumberOfReservation 10
#define NumberOfUsers 8
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
	 Hospitals hospital[NumberOfHospital];
	 DefinitonOfVariable(hospital);
	 cout << "-------------------Before sorting by Rate---------------------\n";
	 for (int i = 0; i < NumberOfHospital; i++)
		  cout << hospital[i].HospitalName<<"--> "<< hospital[i].HospitalRate << "\n";
	 cout << "-------------------After  sorting by Rate---------------------\n";
	 SortHospitalByRating(hospital);
	 for (int i = 0; i < NumberOfHospital; i++)
		  cout << hospital[i].HospitalName << "--> " << hospital[i].HospitalRate << "\n";
	 cout << "-------------------Before sorting by name---------------------\n";
	 for (int i = 0; i < NumberOfHospital; i++)
		  cout << hospital[i].HospitalName << "\n";
	 cout << "-------------------after sorting by name---------------------\n";
	 SortHospitalByName(hospital);
	 for (int i = 0; i < NumberOfHospital; i++)
		  cout << hospital[i].HospitalName << "\n";
 cout << "-------------------Print hospital Data---------------------\n";
	 PrintHospitalData(hospital);
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
void DefinitonOfVariable(Hospitals hospital[]) {
	 ifstream HospitalInfo("Data/Hospitalinfo.txt", ios::app);
	
	 for (int i = 0; i < NumberOfHospital; i++) {
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
/*
El-Demerdash
1931101 664 80 600 3.5
Dentist InternalMedicine Neurosurgery Ophthalmology Otorhinolaryngology Pediatrics Oncology Emergency Anesthesiology X-Ray ObesitySurgeries
Otorhinolaryngology Ophthalmia Dentist Nephrology Cardiology Pulmonology Neurology BloodVessels Phoniatrics ObstetricsAndGynecology Dermatology Orthopedics Endocrinology Urology Psychiatry NaturalTherapy Nutrition CosmeticMedicine InternalMedicine
Ain Shams Specialized
1984102 700 250 1200 3.8
Dentist InternalMedicine Neurosurgery Ophthalmology Otorhinolaryngology Pediatrics Oncology Emergency Anesthesiology X-Ray ObesitySurgeries
Otorhinolaryngology Ophthalmia Dentist Nephrology Cardiology Pulmonology Neurology BloodVessels Phoniatrics ObstetricsAndGynecology Dermatology Orthopedics Endocrinology Urology Psychiatry NaturalTherapy Nutrition CosmeticMedicine InternalMedicine
Al-Qasr Al-Aini
1827103 536 80 600 4.0
Dentist InternalMedicine Neurosurgery Ophthalmology Otorhinolaryngology Pediatrics Oncology Emergency Anesthesiology X-Ray ObesitySurgeries
Otorhinolaryngology Ophthalmia Dentist Nephrology Cardiology Pulmonology Neurology BloodVessels Phoniatrics ObstetricsAndGynecology Dermatology Orthopedics Endocrinology Urology Psychiatry NaturalTherapy Nutrition CosmeticMedicine InternalMedicine
Sayed Galal
1945104 1500 100 400 3.6
Dentist InternalMedicine Neurosurgery Ophthalmology Otorhinolaryngology Pediatrics Oncology Emergency Anesthesiology X-Ray ObesitySurgeries
Otorhinolaryngology Ophthalmia Dentist Nephrology Cardiology Pulmonology Neurology BloodVessels Phoniatrics ObstetricsAndGynecology Dermatology Orthopedics Endocrinology Urology Psychiatry NaturalTherapy Nutrition CosmeticMedicine InternalMedicine
Dar Al-Fouad
1999105 1050 300 1200 3.7
Dentist InternalMedicine Neurosurgery Ophthalmology Otorhinolaryngology Pediatrics Oncology Emergency Anesthesiology X-Ray ObesitySurgeries
Otorhinolaryngology Ophthalmia Dentist Nephrology Cardiology Pulmonology Neurology BloodVessels Phoniatrics ObstetricsAndGynecology Dermatology Orthopedics Endocrinology Urology Psychiatry NaturalTherapy Nutrition CosmeticMedicine InternalMedicine

*/