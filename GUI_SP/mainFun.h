#pragma once
#include"Structs.h"
#include"mainPage.h"

class mainFun
{
public:
	 void DefinitonOfVariable(Hospitals hospital[]) {
		  ifstream HospitalInfo("Data/Hospitalinfo.txt", ios::app);
		  //HospitalInfo >> hospitalCount;
		  for (int i = 0; !HospitalInfo.eof(); i++) {
			   getline(HospitalInfo, hospital[i].HospitalName);
			   HospitalInfo >> hospital[i].HospitalID >> hospital[i].PatientReservationRooms >> hospital[i].ReservationPrice >> hospital[i].BedsPrice >> hospital[i].surgeryprice >> hospital[i].HospitalRate >> hospital[i].specialtiesCount >> hospital[i].clinicsCount;
			   for (int j = 0; j < hospital[i].specialtiesCount; j++)
					HospitalInfo >> hospital[i].HospitalSpecialties[j];
			   for (int j = 0; j < hospital[i].clinicsCount; j++)
					HospitalInfo >> hospital[i].HospitalClinics[j];
			   for (int x = 1; x <= 3; x++)
					HospitalInfo.ignore();
			   hospitalCount++;
		  }
		  HospitalInfo.close();
	 }
	 void DefinitonOfVariable(Users user[], Hospitals hos[]) {
		  ifstream UserInfo("Data/UserInfo.txt", ios::app);
		
		  for (int i = 0; !UserInfo.eof(); i++) {
			   UserInfo >> user[i].id >> user[i].username >> user[i].age >> user[i].email >> user[i].gender >> user[i].phonenumber >> user[i].password >> user[i].reserCount;
			   getline(UserInfo, user[i].name);
			   if (user[i].email.find("@Hadmin.com") != string::npos) {
					user[i].userType = "Admin";
					delete[] user[i].reservation;
					user[i].reservation = NULL;

			   }
			   if (user[i].userType == "Patient") { //definition of reser
					if (user[i].reserCount < NumberOfReservation && user[i].reserCount>0) {
						 for (int j = 0; j < user[i].reserCount; j++) {

							  UserInfo >> user[i].reservation[j].ReservtionID >> user[i].reservation[j].PAge >> user[i].reservation[j].hospital.HospitalID >> user[i].reservation[j].numberOfDays  >> user[i].reservation[j].ReservationType >> user[i].reservation[j].ReservationDay >> user[i].reservation[j].HospitalSpecialty >> user[i].reservation[j].HospitalClinic >> user[i].reservation[j].PatientReservationRoom >> user[i].reservation[j].PhoneNumber;
							  for (int z = 0; z < hospitalCount; z++) {
								   if (user[i].reservation[j].hospital.HospitalID == hos[z].HospitalID)
								   {
										user[i].reservation[j].hospital = hos[z];

										if (user[i].reservation[j].ReservationType != "Surgery") {
											 user[i].reservation[j].ReservationPrice = hos[z].ReservationPrice;
											 user[i].reservation[j].Totalprice = hos[z].ReservationPrice;

										}
										else {
											 user[i].reservation[j].BedPrice = user[i].reservation[j].numberOfDays * hos[z].BedsPrice;
											 user[i].reservation[j].surgeryprice = hos[z].surgeryprice;
											 user[i].reservation[j].Totalprice = user[i].reservation[j].surgeryprice + user[i].reservation[j].BedPrice;
										}

								   }
							  }
								   user[i].totalpaid += user[i].reservation[j].Totalprice;
								 
							  UserInfo.ignore();
							  getline(UserInfo, user[i].reservation[j].PName);
							  reservationID = user[i].reservation[j].ReservtionID;
						 }
					}
			   }
			   userCount++;
		  }
		  reservationID++;
		  UserInfo.close();
	 }
	 void SaveData(Hospitals hospital[]) {
		  ofstream ExportHospitalInfo("Data/Hospitalinfo.txt");
		  //ExportHospitalInfo << hospitalCount;
		  for (int i = 0; i < hospitalCount; i++) {
			   ExportHospitalInfo << hospital[i].HospitalName << endl;
			   ExportHospitalInfo << hospital[i].HospitalID << " " << hospital[i].PatientReservationRooms << " " << hospital[i].ReservationPrice << " " << hospital[i].BedsPrice << " " << hospital[i].surgeryprice << " " << hospital[i].HospitalRate << " " << hospital[i].specialtiesCount << " " << hospital[i].clinicsCount << endl;
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
	 void SaveData(Users user[]) {
		  ofstream ExportUserInfo("Data/UserInfo.txt");
		  for (int i = 0; i < userCount - 1; ++i) {
			   for (int j = i + 1; j < userCount; j++) {
					if (user[i].id > user[j].id)
						 swap(user[i], user[j]);
			   }
		  }
		  for (int i = 0; i < userCount; i++) {
			   ExportUserInfo << user[i].id << " " << user[i].username << " " << user[i].age << " " << user[i].email << " " << user[i].gender << " " << user[i].phonenumber << " " << user[i].password << " " << user[i].reserCount << user[i].name;
			   if (i != userCount - 1 || user[i].reserCount != 0)
					ExportUserInfo << endl;
			   if (user[i].userType == "Patient") { //definition of reser
					if (user[i].reserCount < NumberOfReservation && user[i].reserCount>0) {
						 for (int j = 0; j < user[i].reserCount; j++) {

							  ExportUserInfo << user[i].reservation[j].ReservtionID << " " << user[i].reservation[j].PAge << " " << user[i].reservation[j].hospital.HospitalID<< " " << user[i].reservation[j].numberOfDays <<  " " << user[i].reservation[j].ReservationType << " " << user[i].reservation[j].ReservationDay << " " << user[i].reservation[j].HospitalSpecialty << " " << user[i].reservation[j].HospitalClinic << " " << user[i].reservation[j].PatientReservationRoom << " " << user[i].reservation[j].PhoneNumber << " " << user[i].reservation[j].PName;
							  if (j != user[i].reserCount - 1 || i != userCount - 1)
								   ExportUserInfo << endl;
						 }
					}
			   }
		  }
		  ExportUserInfo.close();
	 } 
	 void SortHospitalByName(Hospitals hospital[]) {
		  char x;
		  for (int i = 0; i < hospitalCount - 1; ++i) {
			   for (int j = i + 1; j < hospitalCount; j++) {
					if (hospital[i].HospitalName > hospital[j].HospitalName)
						 swap(hospital[i], hospital[j]);
			   }
		  }
		  cout << "Sort Done\nDo you want new list of Hospitals(y/n)?: ";
		  cin >> x;
		  if (x == 'y' || x == 'Y') {
			   for (int i = 0; i < hospitalCount; ++i) {
					cout << i + 1 << "-" << hospital[i].HospitalName << endl;

			   }
		  }

	 }
	 void SortHospitalByRating(Hospitals hospital[]) {
		  char x;
		  for (int i = 0; i < hospitalCount - 1; ++i) {
			   for (int j = i + 1; j < hospitalCount; j++) {
					if (hospital[i].HospitalRate > hospital[j].HospitalRate)
						 swap(hospital[i], hospital[j]);
			   }
		  }
		  cout << "Sort Done\nDo you want new list of Hospitals(y/n)?: ";
		  cin >> x;
		  if (x == 'y' || x == 'Y') {
			   for (int i = 0; i < hospitalCount; ++i) {
					cout << i + 1 << "-" << hospital[i].HospitalName << "( " << hospital[i].HospitalRate << " )" << endl;

			   }
		  }
	 }
	 void SortByBedsAvailable(Hospitals hospital[]) {
		  char x;
		  for (int i = 0; i < hospitalCount - 1; ++i) {
			   for (int j = i + 1; j < hospitalCount; j++) {
					if (hospital[i].PatientReservationRooms > hospital[j].PatientReservationRooms)
						 swap(hospital[i], hospital[j]);
			   }
		  }
		  cout << "Sort Done\nDo you want new list of Hospitals(y/n)?: ";
		  cin >> x;
		  if (x == 'y' || x == 'Y') {
			   for (int i = 0; i < hospitalCount; ++i) {
					cout << i + 1 << "-" << hospital[i].HospitalName << "( " << hospital[i].PatientReservationRooms << " )" << endl;

			   }
		  }
	 }
	 void SortByBedsPrice(Hospitals hospital[]) {
		  char x;
		  for (int i = 0; i < hospitalCount - 1; ++i) {
			   for (int j = i + 1; j < hospitalCount; j++) {
					if (hospital[i].BedsPrice > hospital[j].BedsPrice)
						 swap(hospital[i], hospital[j]);
			   }
		  }
		  cout << "Sort Done\nDo you want new list of Hospitals(y/n)?: ";
		  cin >> x;
		  if (x == 'y' || x == 'Y') {
			   for (int i = 0; i < hospitalCount; ++i) {
					cout << i + 1 << "-" << hospital[i].HospitalName << "(" << hospital[i].BedsPrice << ")" << endl;
			   }
		  }
	 }
	 bool loginAsAdmin(Users user[], Users& temp) {
		  for (int i = 0; i < userCount; i++) {
			   if (temp.username == user[i].username && (temp.password == user[i].password || temp.id == user[i].id) && user[i].userType == "Admin") {
					temp = user[i];
					Lindex = i;
					return true;

			   }
		  }
		  return false;
	 }
	 void DeleteHospital(Hospitals hospital[], string hsptlname)
	 {
		  for (int i = 0; i < hospitalCount; i++)
		  {
			   if (hsptlname == hospital[i].HospitalName)
			   {
					//cout << "search successfully" << endl;
					//hospital[i].HospitalID = 0;
					//hospital[i].PatientReservationRooms = 0;
					//hospital[i].ReservationPrice = 0;
					//hospital[i].BedsPrice = 0;
					//hospital[i].HospitalRate = 0;
					//hospital[i].HospitalName = "";
					//for (int j = 0; j < hospital[i].specialtiesCount; j++)
					//{//hospital[i].specialtiesCount to stop work with garbage 
					//	 hospital[i].HospitalSpecialties[j] = "";
					//}
					//for (int j = 0; j < hospital[i].clinicsCount; j++)
					//{//hospital[i].clinicsCount->  same as specialtiesCount
					//	 hospital[i].HospitalClinics[j] = "";
					//}
					hospital[i] = Hdel;
					if (i != (hospitalCount - 1))
						 swap(hospital[i], hospital[hospitalCount - 1]);//edit -> Check the hospital not the last one
					hospitalCount--;
					SortHospitalByName(hospital);
			   }
		  }
	 }
	 void registerpatient(Users patient[], Users temp)
	 {

		  temp.email = temp.username + "@Huser.com";

		  temp.id = userID;
		  userID++;
		  patient[userCount] = temp;
		  userCount++;
	 }
	 bool loginAsPatient(Users patient[], Users& temp) {

		  bool loginstatus = false;
		  for (int i = 0; i < userCount; i++) {
			   if (patient[i].username == temp.username && (temp.password == patient[i].password || temp.id == patient[i].id) && patient[i].userType == "Patient")
			   {
					temp = patient[i];
					Lindex = i;
					loginstatus = true;
					break;
			   }
		  }
		  return  loginstatus;
	 }
	 void makeReservation(Users user[], Hospitals hospital[], Reservations Rtemp) {
		  bool exist=false;
		  if (user[Lindex].reserCount < NumberOfReservation) {
			   if (Rtemp.ReservationType == "Surgery") {
					int roomnumber =  50 + rand() % 500;
					
					for (int i = 5; i < userCount; i++) {
						 for (int j = 0; j < user[i].reserCount; j++) {
							  if (user[i].reservation[j].hospital.HospitalID == Rtemp.hospital.HospitalID) {
								   if (user[i].reservation[j].PatientReservationRoom == to_string(roomnumber)) {
										exist = true;
										roomnumber = 50 + rand() % 500;

										break;
								   }


							  }
						 }
						 if (exist == true) {
							  i = 5;
							  exist = false;
						 }
					}
					Rtemp.PatientReservationRoom = to_string(roomnumber);
					hospital[Hindex].PatientReservationRooms -= 1;
					Rtemp.BedPrice = Rtemp.numberOfDays * (hospital[Hindex].BedsPrice);
					Rtemp.surgeryprice = hospital[Hindex].surgeryprice;
					Rtemp.Totalprice = Rtemp.surgeryprice + Rtemp.BedPrice;
			   }
			   else if (Rtemp.ReservationType == "Check-up") {
			   Rtemp.ReservationPrice = hospital[Hindex].ReservationPrice;
			   Rtemp.Totalprice = hospital[Hindex].ReservationPrice;
			   }
			   Rtemp.ReservtionID = reservationID;
		  }	
		  
		  user[Lindex].totalpaid += Rtemp.Totalprice;
		  user[Lindex].reservation[user[Lindex].reserCount] = Rtemp;
		  user[Lindex].reserCount++;
		  reservationID++;
		  /*Rtemp.numberOfDays = 0;
		  Rtemp.HospitalSpecialty = "NOT-RESERVED";
		  Rtemp.HospitalClinic = "NOT-RESERVED";
		  Rtemp.PatientReservationRoom = "NONE";
		  Rtemp.BedPrice = 0;
		  Rtemp.ReservationDay = "";
		  Rtemp.ReservationPrice = 0;
		  Rtemp.surgeryprice = 0;
		  Rtemp.Totalprice = 0;*/
	 }
	 void cancelreservation(Users patient[],Hospitals hospital[], int PIndex) {


		

		  

			   for (int j = 0; j < hospitalCount; j++) {
					if (patient[PIndex].reservation[Rindex].ReservationType == "Surgery" && patient[PIndex].reservation[Rindex].hospital.HospitalName == hospital[j].HospitalName) {
						 hospital[j].PatientReservationRooms += 1;
						 break;
					}
			   }

			  patient[PIndex].totalpaid -= patient[PIndex].reservation[Rindex].Totalprice;
			 /*  patient[PIndex].reservation[Rindex].PName = " ";
			   patient[PIndex].reservation[Rindex].PAge = 0;
			   patient[PIndex].reservation[Rindex].ReservtionID = 0;
			   patient[PIndex].reservation[Rindex].hospital.HospitalName = " ";
			   patient[PIndex].reservation[Rindex].ReservationType = " ";
			   patient[PIndex].reservation[Rindex].HospitalSpecialty = "NOT RESERVED";
			   patient[PIndex].reservation[Rindex].HospitalClinic = "NOT RESERVED";
			   patient[PIndex].reservation[Rindex].PatientReservationRoom = " ";
			   patient[PIndex].reservation[Rindex].BedPrice = 0;
			   patient[PIndex].reservation[Rindex].ReservationDay = " ";
			   patient[PIndex].reservation[Rindex].ReservationPrice = 0;
			   patient[PIndex].reservation[Rindex].surgeryprice = 0;
			   patient[PIndex].reservation[Rindex].Totalprice = 0;*/
			  patient[PIndex].reservation[Rindex] = Rdel;
			   if (Rindex != patient[PIndex].reserCount - 1)
					swap(patient[PIndex].reservation[Rindex], patient[PIndex].reservation[patient[PIndex].reserCount - 1]);
			   Rindex = -1;
			   patient[PIndex].reserCount--;//update
			 
	 }
	 bool validPhoneNumber(string phoneNumber) {
		  if (phoneNumber.size() != 11 || phoneNumber[0] != '0' || phoneNumber[1] != '1') {
			   return false;
		  }
		  return true;
	 }
};
