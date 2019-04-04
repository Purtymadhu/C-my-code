#include<stdio.h>//traversing the array:
#include<conio.h>
int main()
{
	int n,i,a[10];
	printf("enter the length of the array:\n");
	scanf("%d",&n);
	printf("enter the elements of the array:\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("traversing the array:\n");
	for(i=0;i<=n-1;i++)
	printf("\n %d",a[i]);
	
}
