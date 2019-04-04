#include<iostream>
#include<conio.h>
int main()
{
	int arr[20],arr2[20],arr3[20],n,m,i,a,b,s,index1=0;
	std::cout<<"enter how many number u want to entered";
	std::cin>>n;
	for(i=0;i<n;i++)
	{
		std::cout<<"entered numbers are:";
		std::cin>>arr[i];
	}
	std::cout<<"enter numbers  to be enterd in 2nd list\n";
	std::cin>>m;
	for(i=0;i<m;i++)
	{
		std::cout<<"enterd elements are:";
		std::cin>>arr2[i];
	}
	s=n+m;
	for(i=0;i<n;i++)
	{
		arr3[i]=arr[i];
		std::cout<<arr3[i];
		}
	for(i=n;i<s;i++)
	{
		arr3[i]=arr2[index1];
		std::cout<<arr3[i];
		index1++;
	}
	return 0;
}
