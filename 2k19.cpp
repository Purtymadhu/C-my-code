#include<iostream>
using namespace std;
class Box
{
	public:
		int length,breath,height;
	public:
		
		void setDimension(int l,int b,int h)
		{
			length=l;
			breath=b;
			height=h;
		}
		void setShow()
		{
			cout<<length<<" "<<breath<<" "<<height;
		}
};
int main()
{
	Box b;
	b.setDimension(12,34,3);
	b.setShow();
}
