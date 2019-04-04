#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr1[5]={1,99,3,-1,6};
	int arr2[5]={0,66,3,0,6};
	bool comp[5];
	  cout<<"Array 1";
	  for(int i=0;i<5;i++)
	  cout<<arr1[i]<<"\t";
	  
	  cout<<"\n Array 2:";
	  for(int j=0;j<5;j++)
	  cout<<arr2[j]<<"\t";
	  
	  cout<<"\n comparing the two arrays:";
	  for(i=0; j=0;i<5;j<5;i++;j++)
	  comp[i]=arr1[i]==arr2[j];
	  
	  cout<<"\n display the comparision results:\n";
	  for(i=0;i<5;i++)
	  if(comp[i]==1)
	  cout<<"index "<<i<<"-match\n";
	  else
	  cout<<"index "<<i<<"- no match";
	  return 0;
	  
}
