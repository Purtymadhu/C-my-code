#include<iostream>
#include<conio.h>
class num
{
	private:
		int a,b,c,d;
		public:
			void input(void);
			void show(void);
			num operator - (num);
			
};
void num :: input()
{
	std::cout<<"enter value for a,b,c,d";
	std::cin>>a>>b>>c>>d;
}
void num :: show()
{
	std::cout<<"A="<<a<<"B="<<b<<"C="<<c<<"D"<<d<<"\n";
	void num :: operator -(num t);
	{
		num tmp;
		tmp.a=a-t.a;
		tmp.b=b-t.b;
		tmp.c=c-t.c;
		tmp.d=d-t.d;
		return(tmp)
	}
}
	int main()
	{
		num x,y,z;
		std::cout<<"\n object x";
		x.input();
		std::cout<<"\n object y";
		y.input();
		z=x-y;
		std::cout<<"\n x:";
		x.show();
		std::cout<<"y:";
		y.show();
		std::cout<<"z:";
		z.show();
		return 0;
	}
