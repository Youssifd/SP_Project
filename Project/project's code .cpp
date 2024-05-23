#include "Structs.h"
#include "mainFun.h"
mainFun fun;

void Ambulancecall(Hospitals hospital[]);//SAMA,HABIBABASEL
void medicalLaboratory(Hospitals hospital[], Users user);//HABIBABASEL
void pharmacy(Hospitals hospital[]);//TOKA
void FirstAid();//HABIBABASEL


void DisplayAsAdmin(Hospitals hospital[], Users user[], int& PIndex);//MARWAN.
void DisplayAsPatient(Hospitals hospital[], Users user[], int PIndex);//YOUSSIF.
void main() {
/*	RenderWindow window(VideoMode(800, 600), "Tester");
	CircleShape shapest(50.0f);
	shapest.setFillColor(Color::Blue);
	shapest.setPosition(100,100);//Test SFML files

	while (window.isOpen()) {
		 Event event;
		 while (window.pollEvent(event)) {
			  if (event.type == Event::Closed) {
				   window.close();
			  }
		 }
		 window.clear();
		 window.draw(shapest);
		 window.display();

	}*/
	Hospitals hospital[NumberOfHospital];
	Users user[NumberOfUsers];
	int  userID = 1001;
	int patientAccount = -1;
	fun.DefinitonOfVariable(hospital);
	fun.DefinitonOfVariable(user, hospital);
	userID += userCount;


	cout << "\t\t\t\t  Welcome To Our Hospital Management syatem (^_^)\n";
	cout << "\t\t\t\t***************************************************\n";
	while (true) {
		string email = "";
		int choice;
		cout << "\n1. Register\n2. Login(if you have already registered)\n3. Call an Ambulance\n4. Display First Aid\n5. Quit\nPlease enter your choice: ";
		fun.infinit(choice, 5, 1);
		cout << ".........................\n";
		if (choice == 1) {
			 fun.registerpatient(user, userID);
		}
		if (choice == 2) {
			if (fun.Type(user, userID, email))
			{
				if (fun.loginAsAdmin(user,  patientAccount, email))
				{
					DisplayAsAdmin(hospital, user, patientAccount);
				}
			}
			else
			{
				if (fun.loginAsPatient(user,  patientAccount, email)) {

					DisplayAsPatient(hospital, user, patientAccount);
				}
			}
		}

		if (choice == 3) {
			Ambulancecall(hospital);
		}
		if (choice == 4) {
			FirstAid();
		}
		if (choice == 5) {
			 cout << "Thanks for use our system (^o^)\nClosing....";
			 fun.SaveData(hospital);
			 fun.SaveData(user);
			break;
		}
	}
	for (int i = 0; i < userCount; i++) {
		if (user[i].userType == "Patient") {
			delete[] user[i].reservation;
			user[i].reservation = NULL;
		}

	}
}
//definitions && must be exist
void Ambulancecall(Hospitals hospital[]) {
	int choice;
	string address;
	string phoneNumber;
	string Hospitalname;
	fun.viewHospitals(hospital);
	cout << "Enter the number of the nearest hospital to you : ";
	fun.infinit(choice, hospitalCount, 1);
	int index = choice - 1;
	Hospitalname = hospital[index].HospitalName;
	cout << "Enter your address : ";
	cin.ignore();
	getline(cin, address);
	do {
		cout << "Enter your Phone Number (Example : 01*********): ";
		cin >> phoneNumber;
		if (!fun.validPhoneNumber(phoneNumber)) {
			cout << "Invalid phone number. Please try again.\n";
		}
	} while (!fun.validPhoneNumber(phoneNumber));
	cout << "Phone number accepted.\n";
	cout << "An Ambulance is on its way to you ....";
	cout << "\nWe will contact you on your number : " << phoneNumber << "\nkeep your phone available!..\n";
}
void medicalLaboratory(Hospitals hospital[], Users user) {
	 int choice, choice2, choice3, age;
	 char Check;
	 string labname, testname, Hospitalname, patientname, gender;
	 string phoneNumber;
	 string tests[15] = { " Basic Metabolic Panel (BMP)"," Comprehensive Metabolic Panel(CMP)"," Lipid Profile"," hyroid Test(s)"," Complete Blood Count(CBC)"," Urinalysis(UA)"," Glucose Level"," Antinuclear Antibody(ANA)"," Liver Function Panell","Hemoglobin AIC","Abdominal X-ray","Bone X-ray","Chest X-ray","Dental X-ray","Fluoroscopy" };
	 cout << "Is this medical test or X-ray for you (y/n) ? ";
	 cin >> Check;
	 if (Check == 'Y' || Check == 'y') {
		  patientname = user.name;
		  age = user.age;
		  gender = user.gender;
		  phoneNumber = user.phonenumber;
	 }
	 else {
		  cin.ignore();
		  cout << "\nEnter the patient's full name: ";
		  getline(cin, patientname);

		  cout << "\nEnter the patient's age: ";
		  cin >> age;
		  cout << "\nEnter your gender (1 for Male, 2 for Female): ";
		  int genderInput;
		  fun.infinit(genderInput, 2, 1);

		  if (genderInput == 1) {
			   gender = "Male";
		  }
		  else if (genderInput == 2) {

			   do {
					cout << "\nEnter a Phone Number: ";
					cin >> phoneNumber;
					if (!fun.validPhoneNumber(phoneNumber)) {
						 cout << "Invalid phone number. Please try again.\n";
					}
			   } while (!fun.validPhoneNumber(phoneNumber));
			   cout << "Phone number accepted.\n";
			   gender = "Female";
		  }
	 }


	 cout << "\nEnter 1- to Book in an external laboratory .\n      2- to book in a hospital";
	 cout << "\nChoice : ";
	 fun.infinit(choice, 2, 1);
	 if (choice == 1) {
		  int choice2;
		  string laboratories[10] = { " Almokhtabar"," Alborg"," Speed"," Nile"," Alhakma"," Gamma"," Al-Fanar"," Alfa"," Cairo scan","Beta lab group" };
		  for (int i = 0; i < 10; i++) {
			   cout << i + 1 << "- " << laboratories[i] << "\n";
		  }
		  cout << "Enter the number of the lab you want : ";
		  fun.infinit(choice2, 10, 1);
		  int index = choice2 - 1;
		  labname = laboratories[index];
		  for (int j = 0; j < 15; j++) {
			   cout << j + 1 << "- " << tests[j] << "\n";
		  }
		  cout << "\nEnter the number of the test or X-ray you want : ";
		  fun.infinit(choice3, 15, 1);
		  int index2 = choice3 - 1;
		  testname = tests[index2];
		  cout << "Patient's Name: " << patientname << endl;
		  cout << "Patient's Age: " << age << endl;
		  cout << "Patient's Gender: " << gender << endl;
		  cout << "Lab Name: " << labname << endl;
		  cout << "Test or X-ray Name: " << testname << endl;
	 }
	 else if (choice == 2) {
		  fun.viewHospitals(hospital);
		  cout << "\nEnter the number of the nearest hospital to you : ";
		  fun.infinit(choice2, hospitalCount, 1);
		  int index = choice2 - 1;
		  Hospitalname = hospital[index].HospitalName;
		  for (int j = 0; j < 15; j++) {
			   cout << j + 1 << "- " << tests[j] << "\n";
		  }
		  cout << "\nEnter the number of the test or X-ray you want : ";
		  fun.infinit(choice3, 15, 1);
		  int index2 = choice3 - 1;
		  testname = tests[index2];
		  cout << "Patient's Name: " << patientname << endl;
		  cout << "Patient's Age: " << age << endl;
		  cout << "Patient's Gender: " << gender << endl;
		  cout << "Hospital Name: " << Hospitalname << endl;
		  cout << "Test or X-ray Name: " << testname << endl;
	 }
	 cout << "Your Reservation has been confirmed.\n";
	 cout << "Your Reservation Number is : " << labReservation << endl;
	 cout << "We are waiting for you :)\n";
	 labReservation++;
}
void FirstAid() {
	string instructions[10] = { "Remember the (Three Ps.):- \nPreserve life\nPrevent further injury\nPromote recovery\n","Check the scene for danger before you provide help.\n","To treat cutsand scrapes:-\napply gentle pressure, disinfectant,and bandages.\n","To treat sprains:-\napply iceand compression at intervalsand keep the limb elevated.\n","To treat heat exhaustion:-\nuse cool fluids, cool cloths,and shade.\n","To treat hypothermia:-\nuse warm fluidsand warm covering.\n","To treat burns:-\ndetermine the burn type and severity.\nCover the wound with loose cloth to prevent infection.\n","Use an EpiPen to treat allergic reactions.\n","To treat fractures:-\nkeep the fractured area stableand immobilized,and apply a cold pack.\n","Perform CPR if an injured person stops breathing." };
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << "- " << instructions[i] << "\n";
	}
	cout << "...........................";
}
void pharmacy(Hospitals hospital[]) {
	 string medicines[20];
	 int num_medicine;
	 string adress;
	 string phoneNumber;
	 string namecustomer;
	 int ans = 0;
	 int ans2 = 0;
	 cout << "you will get 20% discount because you are our customer :)\n";
	 cout << "Enter your name : ";
	 cin.ignore();
	 getline(cin, namecustomer);
	 cout << "how many medicines do you want?\nenter the number: ";
	 cin >> num_medicine;
	 cout << "Enter the medicines:\n";
	 cin.ignore();
	 for (int j = 0; j < num_medicine; j++) {
		  cout << j + 1 << ". ";
		  cin >> medicines[j];
	 }
	 cout << "where will you take the order?\n1. hospital\n2. home\nchoice: ";
	 fun.infinit(ans2, 2, 1);
	 if (ans2 == 1) {
		  fun.viewHospitals(hospital);
		  cout << "enter the number of hospital do you want to order from: ";
		  fun.infinit(ans, hospitalCount, 1);
		  cout << "the total price : " << 100 + rand() % 230 << endl;
		  cout << "the order is ready and we waiting for you :)\n";
	 }
	 else {
		  do {
			   cout << "Enter the Phone Number: ";
			   cin >> phoneNumber;
			   if (!fun.validPhoneNumber(phoneNumber)) {
					cout << "Invalid phone number. Please try again.\n";
			   }
		  } while (!fun.validPhoneNumber(phoneNumber));
		  cout << "enter your adress : ";
		  cin.ignore();
		  getline(cin, adress);
		  cout << "the total price: " << 120 + rand() % 230 << endl;
		  cout << "the order is on the way for you ,we are waiting your opinion :)\n";
	 }
}


void DisplayAsAdmin(Hospitals hospital[], Users user[], int& PIndex)
{
	cout << "Welcome " << user[PIndex].name << "\n";
	cout << "********************\n";
	int Hindex, HChoice = 0;
	char Cho;
	bool logOut = false;
	//cout << "Login successful!" << endl;
	while (!logOut)
	{
		int Need = 0;
		cout << "1- To Add Hospital\n2- To Delete Hospital\n3- To Modify\n4- print Data For All Hospital\n5- To print Data For Any Hospital You choose it\n6- To view all patient data\n7- Sort Hospital\n8- View Your Data\n9- Log out\n";
		cout << "Enter your choice: ";
		fun.infinit(Need, 9, 1);
		cin.ignore();
		switch (Need)
		{
		case 1:
			 fun.AddHospital(hospital);
			break;
		case 2:
			 fun.DeleteHospital(hospital);
			break;
		case 3:
			 fun.ModifyHospital(hospital);
			break;
		case 4:
			 fun.PrintHospitalData(hospital);
			break;
		case 5:
			do {
				 fun.viewHospitals(hospital);
				cout << "Enter hospital number: ";
				fun.infinit(HChoice, hospitalCount, 1);
				Hindex = HChoice - 1;
				fun.viewHospitalInfo(hospital, hospital[Hindex].HospitalName);

				cout << "Do you want view another hospital(y/n) ?";
				cin >> Cho;

			} while (Cho == 'y' || Cho == 'Y');
			break;
		case 6:
			 fun.PrintPatientData(user);
			break;
		case 7:
			 fun.sort(hospital);
			break;
		case 8:
			 fun.personalinfo(user, PIndex);
			break;
		case 9:
			 fun.LogOut(logOut, PIndex);//fun.log out or  bool var. to end loop
			break;
		}
		cout << "---------------------------------\n";
	}
}
void DisplayAsPatient(Hospitals hospital[], Users user[], int PIndex ) {
	 cout << "Login successful ✓.\nWelcome " << user[PIndex].name << "(^0^)\n";
	 cout << "********************\n";
	 int option = 0;

	 bool logOut = false;
	 do {
		  int Choice = 0, HChoice = 0, Hindex;
		  char Cho;
		  cout << "1- to View Personal Info.\n" << "2- to View Hospital(s) Information.\n";
		  cout << "3- to sort hospital\n" << "4- to Edit your Information.\n" << "5- to make a new reservation.\n";
		  cout << "6- to View your reservation.\n" << "7- to Modify an existing reservation.\n" << "8- to Cancel a reservation.\n" << "9- to Book an appointment for medical test or X-ray.\n\n" << "10- to Order from the Pharmacy.\n"<<"11- to call an Ambulance\n" << "12- to logout.\n";
		  cout << "Enter the number you want to do : ";
		  fun.infinit(option, 12, 1);
		  switch (option)
		  {
		  case 1:
			   fun.personalinfo(user, PIndex);
			   break;
		  case 2:
			   cout << "1. All hospital\n2. Certain hospital\n ";
			   cout << "Enter your choice: ";
			   fun.infinit(Choice, 2, 1);
			   if (Choice == 1)
					fun.PrintHospitalData(hospital);
			   else {
					do {
						 fun.viewHospitals(hospital);
						 cout << "Enter hospital number: ";
						 fun.infinit(HChoice, hospitalCount, 1);
						 Hindex = HChoice - 1;
						 fun.viewHospitalInfo(hospital , hospital[Hindex].HospitalName);

						 cout << "Do you want view another hospital(y/n) ?";
						 cin >> Cho;

					} while (Cho == 'y' || Cho == 'Y');
			   }
			   break;
		  case 3:
			   fun.sort(hospital);
			   break;
		  case 4:
			   fun.editpatientinfo(user, PIndex);
			   break;
		  case 5:
			   fun.makeReservation(user, hospital, PIndex);
			   break;
		  case 6:
			   fun.showreservation(user, hospital, PIndex);
			   break;
		  case 7:
			   fun.modifyreservation(user, hospital, PIndex);
			   break;
		  case 8:
			   fun.cancelreservation(user,  hospital,  PIndex);
			   break;
		  case 9:
			   medicalLaboratory(hospital, user[PIndex]);
			   break;
		  case 10:
			   pharmacy(hospital);
			   break;
		  case 11:
			   Ambulancecall(hospital);
			   break;
		  case 12:
			   fun.LogOut(logOut, PIndex);
			   break;
		  }
		  if (!logOut)
			   cout << "---------------------------------\n";
	 } while (!logOut);
	 cout << "===========================================\n";

}