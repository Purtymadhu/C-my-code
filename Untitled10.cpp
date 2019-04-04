#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10];
	int i,max;
	printf("enter values in array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	max=arr[0];
	for(i=1;i<10;i++)
	{
		if(max<arr[i])
			max=arr[i];
		
	}
			printf(" larges element is:%d\n",max);
	return 0;
}
