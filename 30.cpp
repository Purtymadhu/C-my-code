#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int size=20;
	char city[20];
	cout<<"enter city name:\n";
	cin>>city;
	cout<<"city name:"<<city<<endl<<endl;
	cout<<"enter city name again:"<<endl;
	cin.getline(city,size);
	cout<<"city name now:="<<city<<endl<<endl; 
	cout<<"enter another city name:"<<endl;
	cin.getline(city,size);
	cout<<"new city name:"<<city <<endl <<endl;
	return 0;
}

