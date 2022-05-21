/*During compilation there will be as many copies of the
template function as there are number of different type
of call statements. This will help to reduce typing 
trouble of the progammar. Size of source code will
decrease but size of machine code will remain same 
whether we use template or not.*/
#include<iostream>
#include<conio.h>
using namespace std;
template<class T> 
T sum(T a, T b)
{	T t;
	t=a+b;
	return t;
}
int main()
{	int a1,b1,ans1;
	cout<<"Enter 2 integer numbers";
	cin>>a1>>b1;
	ans1=sum(a1,b1);
	cout<<"Result is "<<ans1<<endl;
	float a2,b2,ans2;
	cout<<"Enter 2 floating numbers";
	cin>>a2>>b2;
	ans2=sum(a2,b2);
	cout<<"Result is "<<ans2<<endl;
	float a3,b3,ans3;
	cout<<"Enter 2 integer numbers";
	cin>>a3>>b3;
	ans3=sum(a3,b3);
	cout<<"Result is "<<ans3<<endl;
	getch();return 0;
}


