#include<iostream>
#include<conio.h>
class A
{
	private:
		int a,b,s;
		int n;
		public:
			A()
			{
				a=5;
				b=6;
			}
		//void getdata();
			//std::cout<<"enter a number";
			//std::cin>>a>>b;
			void sum();

			
			//s=a+b;
			//std::cout<<"our sum is:"<<s;
	
			

};
/*void A::getdata()
{
	std::cout<<"enter a number";
	std::cin>>a>>b;
}*/
void A::sum()
{
	s=a+b;
	std::cout<<"sum value is:"<<s;
	
}
int main()
{
A a;
//a.getdata();
a.sum();
return 0;
}
	/*int a,b,s,n;
	std::cout<<" enter a number";
	std::cin>>a>>b;
	s=a+b;
	std::cout<<"sum number is:"<<s;
	return 0;
}*/
