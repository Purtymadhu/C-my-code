#include<iostream>
#include<conio.h>
using namespace std;
int count=0;
class test
{
public:
test()
{
	count++;
	cout<<"\n \n constructor msg: object number"<<count<<"created:";
	}	
	~test()
	{
		cout<<"\n \n destructor msg: object number:"<<count<<"destroyed:";
		count--;
	}
};
int main()
{
	cout<<"inside the main block";
	cout<<"\n\n creating first object: T1";
	test T1;
	{
		cout<<"\n\n inside block:";
		cout<<"\n creating two more objects T2 and T3";
		test T2, T3;
		cout<<"\n leaving block 1..";
	}
	cout<<"\n back inside the main block:";'['
}
