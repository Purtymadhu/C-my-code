#include<iostream>
#include<conio.h>
using namespace std;
class b
{
	int a; //private not inheritable;
	public:
		int b;
		void setab();
		int geta();
		void showa();
};
class d:public b //public derivation;
{
	int c;
	public:
		void mul();
		void display();
	};
	void b::setab()
	{
		a=5;
		b=10;
	}
	int b::geta()
	{ 
		return a;
	}
	void b::showa()
	{
		cout<<"a="<<a<<"\n";
	}
	void d::mul()
	{
		c=b*geta();
	}
	void d::display()
	{
		cout<<"a="<<geta() <<endl;
		cout<<"b="<<b<<"\n";
		cout<<"c="<<c<<endl<<endl;
	}
	int main()
	{
		d D;
		D.setab();
		D.mul();
	    D.showa();
	    D.display();
	    D.b=20;
	    D.mul();
	    D.display();
	    return 0;
	}
