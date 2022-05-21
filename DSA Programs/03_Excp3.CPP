/*Multiple catch block with a single try but execute any one*/
#include<iostream>
#include<conio.h>
using namespace std;
class ArithmeticException
{	public:
		void showmessage()
		{	cout<<"Can't divide by zero";
		}
};
class ArrayIndexOutOfBoundsException
{	public:
		void showmessage()
		{	cout<<"Index is out of range";
		}
};
int main ()
{	int i,j;
	int a[3]={10,20,30};
	int b[3]={5,0,2};
	cout<<"Enter 2 numbers";
	cin>>i>>j;
	try
	{	if(i<0 || i >2 || j<0 || j >2 )
		   throw ArrayIndexOutOfBoundsException();
		else if(b[j]==0)
		{
		   ArithmeticException obj;
		   throw obj;
		}
		else
			cout<<a[i]/b[j];	
	}
	catch(ArrayIndexOutOfBoundsException obj)
	{	obj.showmessage();
	}
	catch(ArithmeticException obj)
	{	obj.showmessage();
	}
	catch(...)//can catch all remaining exception
	{	cout<<"some unexpected exception occurred";
	}
	cout<<"\nsome text";
	cout<<"\nsome text";
	cout<<"\nsome text";
	getch();return 0;
}
