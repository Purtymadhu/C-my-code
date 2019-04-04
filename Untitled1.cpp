#include<stdio.h>
int main()
{
	int i,x;
	printf("enter a number:");
	scanf("%d",&x);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",x,i,x*i);
	}
	return 0;
}
