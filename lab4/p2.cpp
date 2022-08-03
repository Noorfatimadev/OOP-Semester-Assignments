#include<iostream>
using namespace std;
class Time {
private:
	int hrs, min;

public:


	void time()
	{
		hrs = 0;
		min = 0;
	}




	void TInput()
	{
		cout << "Enter Hours=";
		cin >> hrs;
		cout << endl;
		cout << "Enter Minutes=";
		cin >> min;
		cout << endl;
	}


	void displaydataT()
	{
		cout << "HOURS=" << hrs << endl;
		cout << "MINUTES=" << min << endl;
	}
	Time sum(Time obj)
	{
		obj.hrs = obj.hrs + hrs;
		obj.min = obj.min + min;
		cout << "Total hrs" << obj.hrs << endl;
		cout << "Total min" << obj.min << endl;
		return obj;
	}
};
int main()
{

	Time obj1, obj2, ans;
	cout << "First object" << endl;

	obj1.TInput();
	cout << endl;
	
	cout << "Second object" << endl;
	obj2.TInput();
	cout << endl;




	ans = obj1.sum(obj1);


	cout << endl;
	obj1.displaydataT();
	cout << endl;
	obj2.displaydataT();
	cout << endl;

	return 0;



}