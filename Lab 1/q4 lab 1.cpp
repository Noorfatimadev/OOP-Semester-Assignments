#include <iostream>
using namespace std;
void sort(int &arr[8])
{
   for(int j=0 ; j<8 ; j++)
   {
	
     int x;
     if(arr[j]>arr[j+1])
     {
     x=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=x;
     }
   }
      for(int i = 0; i < 8; ++i)
    {
	    cout<<arr[i]<<endl;}
 }

	
int main()
{
   int data[8];
   int *ptr[8];
   
   cout << "Enter elements: ";
   for(int i = 0; i < 8; ++i)
    {
	    cin >> data[i];
	    ptr[i]=&data[i];
		}
      
      sort(data);
       

      

 
   return 0;
}
