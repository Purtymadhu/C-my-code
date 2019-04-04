#include<iostream>
#include<conio.h>
class number
{
	public:
		int x;
		int  y;
		number()
		{
		}
		number (int j,int k)
		{
			x=j;
			y=k;
		}
		number operator *(number D)
		{
			number T;
			T.x=x*D.x;
			T.y=y*D.y;
			return T;
			}
			void show()
			{
				std::cout<<"\n x="<<x<<"y="<<y;
				
			}
};
int main()
{
	number A(2,3),B(4,5),c;
	A.show();
	B.show();
	c=A*B;
	c.show();
}

