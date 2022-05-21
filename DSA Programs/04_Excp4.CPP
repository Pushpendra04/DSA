//nested try catch / rethrow
#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{	try
	{	//throw 5.4f;
		try
		{	throw 5;	
		}
		catch(int x)
		{	cout<<"Error message 1";
			throw (float)x;
		}		
	}
	catch(float x)
	{	cout<<"Error message 2";
	}
	cout<<"\nsome text";
	cout<<"\nsome text";
	getch();return 0;
}
