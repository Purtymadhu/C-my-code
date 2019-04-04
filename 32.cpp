#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char string[80];
	cout<<"enter a string :";
	cin>>string;
	 
	 int len=strlen(string);
	 fstream file; // input and output stream;
	 cout<<"opening the text file and storing the string in it.\n \n";
	 file.open("textl",ios::in | ios::out);
	 for(int i=0;i<len;i++)
	 file.put(string[i]);  //put a character to a file;
	 file.seekg(0); // go to the start;
	 
	 char ch;
	 cout<<"reading the file contents:";
	 while(file)
	 {
	 	file.get(ch);   //get a character from file;
	 	cout<<ch;       //display it on screen;
	 	
	 }
	 return 0;
}
