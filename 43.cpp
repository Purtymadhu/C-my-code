#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	string s("ONE TWO THREE FOURS");
	cout<<"the string contains:";
	for(int i=0; i<s.length();i++)
	cout<<s.at(i);
	cout<<"\n string is shown again:";
	for(int j=0;j<s.length();j++)
	cout<<s[j];
	
	int x1= s.find("TWO");
	cout<<"\n\n TWO is found at:"<<x1<<endl;
	
	int x2=s.find_first_of('T');
	cout<<"\n T is found first at:"<<x2<<endl;
	
	int x3=s.find_last_of('R');
	cout<<"\n R is the last found at:"<<x3<<endl;
	
	cout<<"\n Retrive and print subsring two\n";
	cout<<s.substr(x1,3);
	cout<<endl;
	return 0;
}+?4'
