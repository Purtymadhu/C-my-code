#include<iostream>
#include<conio.h>
int main()
{
	int arr[20];
	int i,n;
	std::cout<<"no of elements";
	std::cin>>n;
	std::cout<<"enter the elements";
	for(i=0;i<n;i++)
	{
		std::cin>>arr[i+1];
	}
	for(i=0;i<n;i++)
	{
		std::cout<<arr[i];
	}
	   return 0;
}

