/*
5. copy constructor:-
a.	A Constructor which copies all the members of one object into the members of another object while creating that object.
b.	Every class contains a default copy constructor if not defined by us.
c.	Default copy constructor will copy simple members of one object into another object. It will not copy dynamic array for this we have to add our own copy constructor.
d.	Copy constructor must use call be reference because if we remove & then obj will call copy constructor & this will create a recursive call so not allowed.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class A
{	int x,y;
	public:
	A()
	{	x=y=0;
	}
	A(int x1,int y1)
	{	x=x1;y=y1;
	}
	A(A &obj)//copy constructor
	{	
		x=obj.x*2;
		y=obj.y*2;
	}
	void display()
	{	cout<<x<<endl<<y;
	}
};
int main()
{	A a1(5,6);
	A a2(a1);
//or
//	A a2=a1;
	a2.display();
	getch();
	return 0;
}











