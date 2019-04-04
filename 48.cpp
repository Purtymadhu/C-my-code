#include<stdio.h> //delete an elements;
#include<conio.h>
int i,n;
int main()
{
	int a[100],pos;
	void del(int a[],int ,int);
	printf("how many elements in the array\n:");
	scanf("%d",&n);
	printf("enter the elements of the array:\n");
	for(i=0;i<=n-1;i++)
	scanf("%d",&a[i]);
	printf("on which position element do you want delete:\n");
	scanf("%d",&pos);
	del(a,pos,n);
	
}
void del(int a[],int pos,int n)
{
	int j,item;
	item=a[pos];
	for(j=pos;j<=n-1;j++)
	{
		a[j]=a[j+1];
	}
	n=n-1;
	printf("new array;\n");
	for(i=0;i<=n-1;i++)
	printf("%d\n",a[i]);
}
