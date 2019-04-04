#include<iostream>
#include<conio.h>
class bill
{
	int qty;
	float price;
	float amount;
	public:
		
		bill()
		{
			qty=10;
			price=10.24;
			amount=122.8;
		}
		void show()
		{
			std::cout<<"quantity is:"<<qty<<"\n";
			std::cout<<"price is:"<<price<<"\n";
			std::cout<<"amount of this item is:"<<amount<<"\n";
		}
};
int main()
{
	bill s;
	bill *ptr;
	ptr=&s;
	//ptr->getdata();
	ptr->show();
	return 0;
}
