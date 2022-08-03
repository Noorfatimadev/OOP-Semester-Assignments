#include<iostream>
using namespace std;
int main()
{
	int** studentarr;
	studentarr = new int* [5];
	int marks[5];   
	for (int i = 0; i <5; i++)
	{
		cout << "enter marks of student no." << i << endl;
		
			cin >> marks[i];
	}
		int sum = 0;
		for (int i = 0; i < 5; i++)
		{
		
			 sum+= marks[i];
			}
			float average = sum / 5;
			 
			int max = 0;
			for (int i = 0; i < 5; i++)
			{

					if(marks[i]>max)
					{
						max = marks[i];
					}
				
				}
			cout << "AVERAGE=" << average<<endl;
			cout << "MAX MARKS=" << max << endl;
			return 0;


}