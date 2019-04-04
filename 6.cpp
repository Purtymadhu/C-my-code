#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *arr;
	int size,i;
	cout<<"enter the size of the integer array:";
	cin>>size;
	cout<<"creating an array of size\n"<<size<<"\n";
	arr=new int (size);
	cout<<"enter elements of an array:\n";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"array elements are\n";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
	delete arr;
	
	return 0;
}
