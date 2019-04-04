#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define NULL 0
int main()
{
	int *ptr;
	int i,n,sum=0;
	float avg;
	printf("enter the number of elements you want to be stored:\n");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("the required amount of memory is n ot available:");
		//exit(0);
	}
	else
	{
		printf("enter the elements:");
		for(i=0;i<n;i++)
		scanf("%d",ptr+i);
		for(i=0;i<n;i++)
		{
			sum=sum+(*(ptr+i));
		}
		printf("sum of %d elements of array is =%d\n",n,sum);
		avg=sum/n;
		printf("the average of %d number of the array is %f\n",n,avg);
	}
	return 0;
}
