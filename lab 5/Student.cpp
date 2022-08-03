#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
#include<ctime> 
using namespace std;

class Student {

	struct Date
	{
		int day;
		string month;
		int year;
	};

	string StudentName;
	string RegistrationNumber;
	Date Date_of_Birth;
	double CGPA;
	string CNIC;
	string Hobbies;

public:
	//default constructor
	Student()
	{
		cout << "Default constructor called" << endl << endl;
		StudentName = "Sarfraz Ahmed";
		RegistrationNumber = "2017-cs-999";


	}

	//parameterized constructor

	Student(string Name, string Reg)
	{

		StudentName = Name;
		ValiName(StudentName);

		RegistrationNumber = Reg;
		ValiReg(RegistrationNumber);

	}

	//validations
	void ValiName(string studentName)
	{

		//cout << "Valiname" << endl;

		for (int i = 1; i <= studentName.length(); i++)
		{

			if (!(isalpha(studentName[i]) || studentName[i] == '.' || (isspace(studentName[i]))))

			{
				studentName[i] = -1;
			}


		}


	}

	void ValiDate(Date D)
	{
		//cout << "ValiDate" << endl;




		if (!(D.month == "January" || D.month == "February" || D.month == "March" || D.month == "April" || D.month == "May" || D.month == "June" || D.month == "July" || D.month == "August" || D.month == "September" || D.month == "October" || D.month == "November" || D.month == "December"))
			D.month = -1;


		if (!(D.day >= 1 && D.day <= 31))
		{
			D.day = -1;
		}


		if (!(D.year <= 1990 || D.year > 2004))

			D.year = -1;

		if (D.year == 1990)
		{
			if (!((D.month <= "December") && (D.day <= 31)))
				D.month = -1;
		}



	}





	void ValiReg(string registrationNumber)
	{
		//	cout << "ValiReg" << endl;
		for (int i = 0; i <= registrationNumber.length(); i++)
		{
			if (!isdigit(registrationNumber[i]))
			{
				registrationNumber[i] = -1;
			}
			if (registrationNumber[4] != '-' && registrationNumber[7] != '-')
			{
				registrationNumber[i] = -1;
			}
			if (!isalpha(registrationNumber[5]) || !isalpha(registrationNumber[6]))
			{
				registrationNumber[i] = -1;
			}
			if (!isdigit(registrationNumber[8]))
			{
				registrationNumber[i] = -1;
			}
			if (!isdigit(registrationNumber[9]))
			{
				registrationNumber[i] = -1;
			}
			if (!isdigit(registrationNumber[9]))
			{
				registrationNumber[i] = -1;
			}
		}

	}
	bool ValiCGPA(double cg)
	{
		//	cout << "valicgpa" << endl;


		bool valid = true;
		if ((cg <= 4) && (cg >= 0))
			valid = true;
		else
			valid = false;

		if (valid == false)
			cout << " NOT VALID";


		return valid;

	}

	void ValiCNIC(string cn)
	{
		//cout << "Valicnic" << endl;


		for (int i = 0; i < 13; i++)
		{
			if (!isdigit(cn[i]))

				cn[i] = -1;
		}

	}


	//getters

	string getStudentName()
	{

		return StudentName;

	}

	string getRegistrationNumber()
	{
		return RegistrationNumber;

	}

	Date getDate_of_Birth()
	{
		return Date_of_Birth;

	}
	double getCGPA()
	{
		return CGPA;

	}

	string getHobbies()
	{
		return Hobbies;
	}

	//setters

	void SetStudentName(string Name)
	{
		//cout << "setname" << endl;

		ValiName(Name);
		StudentName = Name;

	}

	void SetRegistrationNumber(string Reg)
	{
		//cout << "setreg" << endl;
		ValiReg(Reg);
		RegistrationNumber = Reg;

	}

	void SetDate_of_Birth(Date date)
	{
		//cout << "setdate" << endl;
		ValiDate(date);
		Date_of_Birth.day = date.day;
		Date_of_Birth.month = date.month;
		Date_of_Birth.year = date.year;


	}

	void SetCGPA(double cgpa)
	{
		//cout << "setcgpa" << endl;
		ValiCGPA(cgpa);
		CGPA = cgpa;
	}

	void SetCNIC(string cnic)
	{
		//cout << "setcnic" << endl;
		ValiCNIC(cnic);
		CNIC = cnic;
	}

	void SetHobbies(string hobby)
	{
		//cout << "sethobby" << endl;
		Hobbies = hobby;
	}

	void Input() {
		//cout << "input" << endl;
		/////////////////////////


		cout << endl << "Enter your Date of Birth : ";
		Date date;
		cout << "Month(in words):";
		cin >> date.month;
		cout << "Day: ";
		cin >> date.day;
		cout << "Year : ";
		cin >> date.year;
		SetDate_of_Birth(date);

		/////////////////////////////
		double cgpa;
		cout << endl << "Enter your CGPA : ";
		cin >> cgpa;
		SetCGPA(cgpa);

		/////////////////////////
		string cnic;

		cout << endl << "Enter your CNIC: ";
		cin >> cnic;
		SetCNIC(cnic);

		////////////////////
		string hobby;

		cout << endl << "Enter your hobbies : ";
		cin.ignore();
		getline(cin, hobby);
		SetHobbies(hobby);
	}

	void GetGender(string cnic)
	{
		string x;


		if (cnic[12] % 2 == 0)
		{
			cout << "Female";
		}
		if (cnic[12] % 2 != 0)
		{
			cout << "Male";
		}


	}

	void GetAge(Date D)
	{
		Date Pdate;


		///////////////////////////////////////////////
		int pd, bd;
		Pdate.month = "July";
		pd = 7;
		Pdate.day = 20;

		Pdate.year = 2020;


		if ((D.month == "January") || (D.month == "january"))
		{
			bd = 1;
		}
		else if ((D.month == "February") || (D.month == "february"))
		{
			bd = 2;
		}
		else if ((D.month == "March") || (D.month == "march"))
		{
			bd = 3;
		}
		else if ((D.month == "April") || (D.month == "april"))
		{
			bd = 4;
		}
		else if ((D.month == "May") || (D.month == "may"))
		{
			bd = 5;
		}
		else if ((D.month == "June") || (D.month == "june"))
		{
			bd = 6;
		}
		else if ((D.month == "July") || (D.month == "july"))
		{
			bd = 7;
		}
		else if ((D.month == "August") || (D.month == "august"))
		{
			bd = 8;
		}
		else if ((D.month == "September") || (D.month == "september"))
		{
			bd = 9;
		}
		else if ((D.month == "October") || (D.month == "october"))
		{
			bd = 10;
		}
		else if ((D.month == "November") || (D.month == "november"))
		{
			bd = 11;

		}
		else if ((D.month == "December") || (D.month == "december"))
		{
			bd = 12;
		}


		if (D.day > Pdate.day) {
			Pdate.day = Pdate.day + (bd - 1);
			pd = pd - 1;
		}


		if (bd > pd)
		{
			Pdate.year = Pdate.year - 1;
			pd = pd + 12;
		}


		int caldate = (Pdate.day) - (D.day);
		int calmonth = (pd)-(bd);
		int calyear = (Pdate.year) - (D.year);

		// printing   age
		cout << "( Age is " << calyear << " years " << calmonth << " months and " << caldate << " days )";

	}



	void NumberOfWordsInName(string studentName)
	{

		int count = 0;
		int i;
		for (i = 0; studentName[i] != '\0'; i++)
		{
			if (studentName[i] == ' ')
				count++;
		}
		cout << " (Contains " << count + 1 << "words)";


	}

	void GetStatus(double cgpa)
	{


		if (cgpa < 2)
		{
			cout << "Suspended";
		}
		else if (cgpa >= 2 && cgpa < 2.5)
		{
			cout << "Below Average";
		}

		else if (cgpa >= 2.5 && cgpa < 3.3)
		{
			cout << " Average";
		}

		else if (cgpa >= 3.3 && cgpa < 3.5)
		{
			cout << "Below Good";
		}

		if (cgpa >= 3.5)
		{
			cout << "Excellent ";
		}


	}


	void ToString()
	{
		//cout << "to string called" << endl << endl;
		cout << "Name: " << StudentName;
		NumberOfWordsInName(StudentName);
		cout << endl;
		cout << "Registration Number : " << RegistrationNumber;
		cout << endl;

		cout << "CGPA : " << CGPA;
		GetStatus(CGPA);
		cout << endl;
		cout << "Date of Birth : " << Date_of_Birth.month << Date_of_Birth.day << "," << Date_of_Birth.year;
		GetAge(Date_of_Birth);
		cout << endl;

		cout << "CNIC : " << CNIC;
		cout << endl;
		cout << "Gender : ";
		GetGender(CNIC);
		cout << endl;

		cout << "Hobbies : " << Hobbies << endl;

	}

	void initializeDataMembers()
	{

		//cout << "initializeing" << endl << endl;

		Date_of_Birth.day = 0;
		Date_of_Birth.month = "";
		Date_of_Birth.year = 0;
		CGPA = 0;
		CNIC = "";
	}

	//destructor 
	~Student() {
		cout << endl << "destructorcalled" << endl;
	}

};



