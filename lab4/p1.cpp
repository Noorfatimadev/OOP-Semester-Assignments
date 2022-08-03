#include<iostream>
using namespace std;
class Travel
{
private:
	int Km, hr;
public:

	Travel()
	{
		Km = 0;
		hr = 0;
	}



	void Input()
	{
		cout << "Enter km=";
		cin >> Km;
		cout << endl;
		cout << "Enter hr=";
		cin >> hr;
		cout << endl;
	}

	void displaydata()
	{
		cout << "km=" << Km << endl;
		cout << "hr=" << hr << endl;

		cout << endl;
	}

	void Sum(Travel obj) {
		int x;
		obj.Km = obj.Km + Km;
		obj.hr = obj.hr +hr;
		cout << "Total km=" << obj.Km<<endl;
		cout << "Total hr=" << obj.hr<<endl;
		cout << endl;

	}
};
int main()
{
	Travel obj1, obj2;
	cout << "First object" << endl;

	obj1.Input();
	cout << endl;

	obj2.Input();

	cout << endl;

	obj1.Sum(obj1);
	cout << endl;


	obj1.displaydata();
	cout << endl;

	obj2.displaydata();
	cout << endl;


	
	return 0;

}

