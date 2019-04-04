#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
	int x[]={ 10,50,30,40,20};
	int y[]={70,90,60,80};
	sort(x,x+5,greater<int>());
	sort(y,y+4);
	for(int i=0;i<5;i++)
	cout<<x[i]<<" ";
	cout<<endl;
	for(int j=0;j<4;j++)
	cout<<y[j]<<" ";
	cout<<endl;
	int z[9];
	merge(x,x+5,y,y+4,z);
	for(i=0;i<9;i++)
	cout<<z[i]<<" ";
	return 0;
	}
