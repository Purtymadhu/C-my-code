#include<iostream>
#include<conio.h>
using namespace std;
#define 50;
class item
{
	int itemcode[m];
	float itemprice[m];
	int count;
	public:
		void cnt(void){count=0;}
		void getitem(void);
		void displaysum(void);
		void remove(void);
		void displayitem(void);
};
void item::getitem(void)
{
	cout<<"enter item code:";
	cin>>itemcode[count];
	cout<<"enter item cost:";
	cin>>itemprice[count];
	count++;
}
void item::displaysum(void)
{
	float sum=0;
	for(int i=0;i<count;i++)
	sum=sum+itemprice[i];
	cout<<"\n total value:"<<sum <<"\n";
}
void item::remove(void)
{
	int a;
	cout<<"enter item code:";
	cin>>a;
	for(int i=0;i<count;i++)
	if(itemcode[i]==a)
	itemprice[i]=0;
}
void item::displayitems(void)
{
	cout<<"\n code price\n";
	for(int i=0;i<count;i++)
	{
		cout<<"\n"<<itemcode[i];
		cout<<" "<<itemprice[i];
	}
	cout<<"\n";
}
int main()
{
	item order;
	order.cnt();
	int x;
	do
	{
		cout<<"\n you can do the following:";
		cout<<"enter appropriate number:";
		cout<<"\n 1:add and item";
		cout<<"\n 2:display total value";
		cout<<"\n 3:delete and item";
		cout<<"\n 4:display all items";
		cout<<"\n 5: quit";
		cout<<"\n what is you option?";
		cin>>x;
		switch(x)
		{
			case 1: order.getitem(); break;
			case 2: order.displaysum(); break;
			case 3: order.remove();break;
			case 4: order.displayitem();break;
			case 5: break;
			default: cout<<"error in input: try again:\n";
		}
	} while(x!=5);
	return 0;
}
