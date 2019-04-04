#include<iostream>
#include<conio.h>
class shape
{
	protected:
		int length , breadth;
		public:
			getdata()
			{
				length = 10;
				breadth=15;
			}
			
};
class rectangle:public shape
{
public:
	int aor;
  void area()
  {
  	aor=length*breadth;
  	std::cout<<"area of rectagle is:"<<aor;
	   }	 
	
};
int main()
{
	rectangle R;
	R.getdata();
	R.area();
	return 0;
}
