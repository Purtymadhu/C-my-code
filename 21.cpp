#include<iostream>
#include<conio.h>
using namespace std;
class code
{
	int id;
	public:
		code()
		{
			
		}
		code(int a)//constructor;
		{
			id=a;
		}
		code(code & x)//copy constructor;
		{
			id=x.id;
		}
		void display()
		{
			cout<<id;
		}
};
int main()
{
	code A(100); //object a is created and initialized;
	code B(A);//copy constructor called;
	code C=A;//copy constructor called again;
	code D;
	D=A;
	cout<<"\n id of A:"; A.display();
	cout<<"\n id of B:"; B.display();
	cout<<"\n id of C:"; C.display();
	cout<<"\n id of D:"; D.display();
	return 0;
}

