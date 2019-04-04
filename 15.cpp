#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
	char name[30];
	float age;
	public:
		void getdata(void);
		void putdata(void);
};
void employee::getdata()
{
	cout<<"enter name";
	cin>>name;
	cout<<"enter age:";
	cin>>age;
}
void employee::putdata(void)
{
	cout<<"Name:"<<name<<"\n";
	cout<<"age:"<<age<<"\n";
}
const int size=3;
int main()
{
	employee manager[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\n details of manager:"<<i+1<<"\n";
		manager[i].getdata();
	}
	cout<<"\n";
	for(int i=0;i<size;i++)
	{
		cout<<"\n manager"<<i+1<<"\n";
		manager[i].putdata();
	}
	return 0;
}
