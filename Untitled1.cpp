#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter total numbers in array:";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"numbers are:";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"reverse of a numbers:";
	for(i=n-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
}
