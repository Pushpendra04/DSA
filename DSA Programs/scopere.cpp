Scope operator(::):- The double colon :: is used as the scope resolution operator in c++.The scoping operator is also used in a class
member function definition.The scope operator can also be used to differentiate between members of base classes with identical names.

//To print  global variable when local variable override a global variable.
#include<iostream>
#include<conio.h>
int a=5;		//global variable
using namespace std;
int main()
{
	cout<<a<<endl;	//5
	int a=10;		//local variable
	cout<<a<<endl;	//10
	cout<<::a<<endl;	//5
	{
		int a=15;
		cout<<a<<endl;	//15
		cout<<::a<<endl;	//5
		// int a=20;	//error
		//cout<<::::a;	//error
	}
	cout<<a<<endl;	//10
	getch();
	return 0;
}
