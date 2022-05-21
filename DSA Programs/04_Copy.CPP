//copy a text file into another file
#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
using namespace std;
int main()
{
	char ch;
	ifstream fin("c:\\matrix\\a.txt");
	ofstream fout("c:\\matrix\\b.txt");
	if(!fin||!fout)
    {
        cout<<"Error";
        exit(0);
    }
	while(1)//infinite loop
	{
		ch=fin.get();
		ch=toupper(ch);//this is use for converting to capital letters
		if(fin.eof())
			break;
		fout<<ch;	//fout.put(ch);
	}
	fin.close();
	fout.close();
	getch();return 0;
}


