#include<iostream>
using namespace std;

class Flights {

private:

	int Flight_num;
	float Distance, Fuel_req;
	string S_name, Destination;

	int calfuel()
	{
		//Detail: A member function to calculate the value of Fuel as per the following criteria: //
		// if Distance <=1000 then Fuel 500
		 // more than 1000 and <=1800 fuel 900
		//  more than 1800 and less than 2200
		//  1100 and more than 2200 then fuel 1300.//
	}

public:

	DefaultConstructor()
	{
		//to allow user to enter values for Flight Number, Destination, Distance.//
	}

	Showdata()
	{
		//Function to display all the data members on the screen & call function//
	}

	calfuel()
	{
		//to calculate the quantity of Fuel.//
	}
};