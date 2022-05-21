#include<stdlib.h>
#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	ifstream fin("c:\\matrix\\a.txt");  
	if(!fin)
	{
		cerr<<"File opening error";
		getch();exit(1);
	}
	char ch;

	while(1)//infinite loop
	{
		ch=fin.get();
		if(fin.eof())
			break;
		cout<<ch;
	}

/*
	while(!fin.eof())
	{
		fin>>ch;
		cout<<ch;
	}
*/	
	fin.close();
	getch();
	return 0;
}	
	
