//merge two text files
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	char name[20];
	float per;
	ifstream fin1("c:\\matrix\\names.txt");
	ifstream fin2("c:\\matrix\\per.txt");
	ofstream fout("c:\\matrix\\result.txt");
	if(!fin1||!fin2||!fout)
	{
		cerr<<"file opening error";
		getch();
		exit(1);
	}
	while(1)
	{
		fin1.getline(name,20);
		fin2>>per;
		if(fin1.eof()||fin2.eof())
			break;
		fout<<name<<"\t"<<per<<endl;
	}
	fin1.close();
	fin2.close();
	fout.close();
	getch();return 0;
}


