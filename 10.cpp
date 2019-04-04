#include<iostream>
#include<conio.h>
using namespace std;
int volume(int);
double volume(double ,int);
long volume(long,int,int);
int main()
{
	cout<<"calling the volume() function for computing the volume of a cube -"<<volume(10)<<"\n";
	cout<<"calling the volume() function for computing the volume of a cyinder-"<<volume(2.5,8)<<"\n";
	cout<<"calling the volume() function for computing the volume of a rectangular box-"<<volume(1001,75,15);
	return 0;
	}
	int volume(int s)
	{
		return (s*s*s);
	}
	double volume(double r,int h)
	{
		return(3.14519*r*r*h);
	}
	long volume(long l,int b,int h)
	{
		return(l*b*h);
	}
