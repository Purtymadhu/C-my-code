#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	string s1("12345");
	string s2("abcde");
	 cout<<"original strings are:";
	 cout<<"S1:"<<s1<<endl;
	 cout<<"S2:"<<s2<<endl;
	 
	 //inserting a string into another;
	 cout<<"palce s2 inside s1\n";
	 s1.insert(4,s2);
	 cout<<"modified S1: "<<s1<<endl;
	 
	 //removing charcter in a string;
	 cout<<"remove 5 character from s1:";
	 s1.erase(4, 5);
	 cout<<"now S1:"<<s1<<endl;
	 
	 //replacing characters in a string:
	 cout<<"replace middle 3 characters in S2 with S1 \n";
	 s2.replace(1,3,s1);
	 cout<<"now s2:"<<s2<<endl;
	 return 0;
}
