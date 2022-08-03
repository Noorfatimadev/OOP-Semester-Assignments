#include<iostream>
using namespace std;

void function(int arr[])
{
	for(int x=0; x<10;x++)
	{
		cout<<arr[x];
		
	}
}



int main ()
{
	int array[10];
	int *ptr[10];
for(int i=0 ;i<10 ; i++)
{ ptr[i]=&array[i];
	cout<<"Enter NO."<<i<<"=";
	cin>>array[i];
	cout<<endl;
	
}
function(*ptr);
return 0;


}
