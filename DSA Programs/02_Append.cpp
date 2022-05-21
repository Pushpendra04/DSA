/*
Save text in a file
create new file
overwrite any existing file named a.txt
but using ios::app or ios::ate it will not overwrite
existing contents
ios::ate    =   at end   Turbo c
ios::app    =   append   Turbo & Dev
app and ate are static members of class ios
*/
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
  	ofstream fout("c:\\matrix\\a.txt",ios::app);   //using constructor
	//or
	//ofstream fout;
	//fout.open("c:\\matrix\\a.txt");//using open function
	
	
	fout<<" computer";
	fout.close();
	getch();
	return 0;
}	
	
