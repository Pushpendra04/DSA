//Save text in a file
//create new file
//overwrite any existing file named a.txt
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	//ofstream fout("c:\\matrix\\a.txt");   //using constructor
	//or
	ofstream fout;   //default constructor is called
      fout.open("c:\\matrix\\a.txt");//using open function
	
	
	fout<<"matrix";
	fout.close();
	getch();
	return 0;
}	
	
