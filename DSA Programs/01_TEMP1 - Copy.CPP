#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
T sum(T a, T b)
{
	T c;
	c=a+b;
	return c;
}
template<class Z>
Z max(Z a, Z b)
{
	Z c;
	if(a>b)
		c=a;
	else
		c=b;
	return c;
}

int main(void)
{	
	cout<<"Sum is "<<sum(5,6)<<endl;
	cout<<"Sum is "<<sum(5.5,6.6)<<endl;
	cout<<"Max is "<<max(5,6)<<endl;
	cout<<"Max is "<<max(5.5,6.6)<<endl;	
	getch();return 0;
}


