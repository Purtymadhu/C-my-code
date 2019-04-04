#include<iostream>
#include<conio.h>
using namespace std;
inline float mul(float a,float b)
{
	return (a*b);
}
inline double div(double a,double b)
{
	return (a/b);
}
int main()
{
	float a=12;
	float b=12;
	cout<<mul(a,b)<<"\n";
	cout<<div(a,b)<<"\n";
}
