#include<iostream>
using namespace std;

void userdefined(int &c, int &y )
{
	int a;
	a=c;
	c=y;
	y=a;
	
	
}

int main ()

{int x, m;
cout<<"enter no";
cin>>x;
cout<<"enter no";
cin>>m;
	int *t;
	int *g;
	t=&x;
	g=&m;
	userdefined(*t,*g);
	cout<<"no.1"<<*t;
	cout<<"no.2"<<*g;
	return 0;
	
}
