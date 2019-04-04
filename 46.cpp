#include<stdio.h>//inserting an element in specified postition;
#include<conio.h>
int i,len,pos,num;
int main()
{
	int a[100];
	void insert(int a[],int ,int ,int);
	printf("enter integers to be read:");
	scanf("%d",&len);
	printf("enter integers:");
	for(i=0;i<=len-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter integer to be inserted:");
	scanf("%d",&num);
	printf("enter position in the array for insertion:");
	scanf("%d",&pos);
	--pos;
	insert(a,len,pos,num);
}
void insert(int a[],int len,int pos,int num)
{
	for(i=len;i>=pos;i--)
	{
		a[i+1]=a[i]; //shifts down by 1 postion;
	}
	a[pos]=num;
	if(pos>len)
	{
		printf("insertion outside the array:");
	}
	len++;
	printf("new array:");
	for(i=0;i<len;i++)
	{
		printf("%d\n",a[i]);
	}
}
