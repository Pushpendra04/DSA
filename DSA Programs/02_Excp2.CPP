/*
try:-
	try is a block which contains all those statements which are error prone or linked with error statements

throw:-
	throw transfers the control from try block to catch block along with Exception variable

catch:-
	catch block receives the exception variable and then it can take any one action(informs the user about the exception or it can also solves the exception). It is also called as exception handler.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int a,b,c;
	cout<<"Enter 2 numbers";
	cin>>a>>b;
	try
	{
		if(b ==0)
			throw b;
		else
		{
			c=a/b;
			cout<<c;
		}
		
	}
	catch(int b)
	{
		cout<<"Divide by " << b << " is not possible\n";
	}
	cout<<"\nsome text";
	cout<<"\nsome text";
	cout<<"\nsome text";
	getch();
	return 0;
}



