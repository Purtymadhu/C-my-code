#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	string s1;
	string s2("new");
	string s3("delhi");
	
	s1=s2;  
	cout<<"s1:"<<s1<<endl;
	//using a string constants;
	s1="standard c++";
	cout<<"now s1="<<s1<<endl;
	//using another object;
	string s4(s1);
	cout<<"s4 ="<<s4<<endl;
	
	//reading through keyboard;
	cout<<"enter a string:";
	cin>>s4;
	cout<<"s4 ="<<s4<<endl;
	 //concatenatin string;
	 s1=s2+s3;
	 cout<<"s1 finally contains:"<<s1<<endl;
	 return 0;
}
