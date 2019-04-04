#include<iostream>9999
#include<conio.h>
using namespace std;
class test
{
	public:
		int num;
		test(int j)
		{
			num=j;
		}
		test * operator ->(void)
		{
			return this;
		}
};
int main()
{
	test T(5);
	test *ptr=&T;
	cout<<"T.num ="<<T.num;//accessing num normal;
	cout<<"\n ptr->num ="<<ptr->num;  //accessing num using normal object pointer;
	cout<<"\n T->num ="<<T->num;//accesing num using overloaded -> operator;
	return 0;
}
