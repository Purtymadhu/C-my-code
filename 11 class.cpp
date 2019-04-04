#include<iostream>
#include<conio.h>
using namespace std;
class item
{
	int number; //private by default;
	float cost; //private by default;
	public:
		void getdata(int a,float b); //prototype declaration to be defined;
		//function defination inside the class;
		void putdata()
		{
			cout<<"number:"<<number<<"\n";
			cout<<"cost :"<<cost<<"\n";
		}
};
//member function defination;
void item::getdata(int a,float b)
{
	number=a;//private variable directly used;
	cost=b;
	
}
int main()
{
	item x; //create object;
	cout<<"\n object x"<<"\n";
	x.getdata(100,299.95);
	x.putdata();
	item y; //create another object;
	y.getdata(200,175.50);
	y.putdata();
	return 0;
}
