#include<iostream>
#include<conio.h>
class number
{
	public:
		int x;
		int y;
		number()
		{
		}
		number(int j,int k)
		{
			x=j;
			y=k;
		}
		number operator -(number D)
		{
			number T;
			T.x=x-D.x;
			T.y=y-D.y;
			return T;
			
		}
		void show()
		{
			std::cout<<"\n x="<<x<<"y="<<y;
			
		}
};
int main()
{
	number A(9,8),B(2,1),C;
	A.show();
	B.show();
	C=A-B;
	C.show();
	return 0;
}

