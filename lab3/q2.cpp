#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int** dynarr;
	int rows;
	int columns;

	cout << "Enter the number of rows : ";
	cin >> rows;
	cout << "Enter the number of columns : ";
	cin>> columns;

	dynarr = new int* [rows];

	for (int row = 0; row < rows; row++)
	{
		dynarr[rows] = new int[columns];
	}
	for (int row = 0; row < rows; row++)
	{
		cout << "Enter elements";
		for (int col = 0; col < columns; col++)
			cin >> dynarr[row][col];
	
	}

	int sumrows=0;
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < columns; col++)
		{
			sumrows+=dynarr[row][col];
		}		
		cout<<"Sum of rows = "<< sumrows<<endl;
		
		
	}

	int sumcolumns = 0;
	for (int row = 0; row < columns; row++)
	{
		for (int col = 0; col < rows; col++)
		{
			sumcolumns = sumcolumns + dynarr[col][row];
		}
		cout << "Sum of column = " << sumcolumns<< endl;

	
	}
	return 0;

}