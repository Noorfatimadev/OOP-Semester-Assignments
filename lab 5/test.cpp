


int main()

{
	//object for default constructor
	Student s1;
	cout << "Student 1" << endl;
	s1.initializeDataMembers();
	s1.Input();
	cout << endl;
	cout << endl;



	//object for parameterized constructor

	Student  s2("Hafiz Muhammad Aslam", "2017-cs-999");

	cout << "Student 2" << endl;
	s2.initializeDataMembers();
	s2.Input();
	cout << endl;
		cout << "******Output********" << endl;
			cout << endl;
	cout << endl;
		cout << endl;
	s1.ToString();
	cout << endl;
	cout << endl;
		cout << endl;
	s2.ToString();

	cout << endl << endl << endl;
	//object for parameterized constructor
	return 0;
}
