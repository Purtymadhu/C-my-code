#include<iostream>
#include<conio.h>
using namespace std;2w


class integer
{
	int m,n;
	public:
		integer(int ,int );//constructor declared;
		void display()
		{
			cout<<"m"<<m<<endl;
			cout<<"n"<<n<<endl;
		}
};
integer::integer(int x,int y)//constructor defined;
{
	m=x;
	n=y;
}
int main()
{
	integer int1(0,100); //constructor implicitly;
	integer int2=integer(25,75); //constructor explicility;
	cout<<"\n OBJECT 1"<<endl;
	int1.display();
	cout<<"\n OBJECT 2"<<endl;
	int2.display();
	return 0;
}
