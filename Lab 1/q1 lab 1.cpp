#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
	int a ;
	double b;
	char c;
	
 int *x;
 double *y;
char *z;



cout<<"Enter an integer";
cin>>a;
cout<<"Enter a double ";
cin>>b;
cout<<"Enter a character";
cin>>c;


x=&a;
y=&b;
z=&c;

cout<<"accessing a"<<*x<<endl;
cout<<"accessing b"<<*y<<endl;
cout<<"accessing c"<<*z<<endl;

cout<<"Memory size of a"<<sizeof(a)<<endl;
cout<<"Memory size of a"<<sizeof(b)<<endl;
cout<<"Memory size of a"<<sizeof(c)<<endl;


return 0;
}

