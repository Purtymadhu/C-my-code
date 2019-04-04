//unary operator
#include<iostream>
#include<conio.h>
using namespace std;
class space
{
	int x;
	int y;
	int z;
	public:
		void getdata();
		void display();
		void operator-(); //overload unary minus;
};
void space::getdata()
{
	int a,b,c;
cout<<"enter three number:";
cin>>a>>b>>c;
x=a;
y=b;
z=c;
}
void space::display()
{
	cout<<"x:="<<x<<endl;
	cout<<"y:="<<y<<endl;
	cout<<"z:="<<z<<endl;
}
void space::operator-()
{
	x= -x;
	y= -y;
	z= -z;
}
int main()
{
	space s;
	int x,y,z;
	s.getdata();
//	cout<<"s :";
	s.display();
}
