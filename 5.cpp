#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,n2,max;
	cout<<"enter two number:";
	cin>>n1>>n2;
	if(n1>n2)
	{
		max=n1;
	}
	else
	{
		max=n2;
	}
	cout<<"maximum value:"<<max;
	return 0;
}
