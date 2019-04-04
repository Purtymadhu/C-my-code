//try block throwing an exception;
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter values of a and b:";
	cin>>a>>b;
	int x=a-b;
	try
	{
		if(x!=0)
		{
			cout<<"Result(a/x)= "<<a/x<<endl;
		}
		else //there is and exception;
		{
			throw(x); //throw int object;
		}
	}
	catch(int i)
	{
		cout<<"exception caught: divide by zero:";
		
	}
	cout<<"END";
	return 0;
}
