#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p,AT[10],BT[10],CT[10],TAT[10],WT[10];
	int j,time=0,n;
float avgwt=0.0,avgtat=0.0;
printf("Enter The All Processes:");
scanf("%d",&p);
printf("Enter The Arrival Time:");
for(j=1;j<=p;j++)
{
scanf("%d",&AT[j]);
}
printf("Enter The Burst Time:");
for(j=1;j<=p;j++)
{
scanf("%d",&BT[j]);
}
for(j=1;j<=p;j++)
{
time=time+BT[j];
CT[j]=time;
}
for(j=1;j<=p;j++)
{
TAT[j]=CT[j]-AT[j];
}
for(j=1;j<=p;j++)
{
WT[j]=TAT[j]-BT[j];
}
for(j=1;j<=p;j++)
{
avgtat=avgtat+TAT[j];
n=p;
}
for(j=1;j<=p;j++)
{
avgwt=avgwt+WT[j];
n=p;
}
printf("*******FCFS SCHEDULING ALGORITHM TABLE********\n");
printf("\n\n");
printf("AT\tBT\tCT\tTAT\tWT\n");
for(j=1;j<=p;j++)
	printf("\n%d\t%d\t%d\t%d\t%d\n",AT[j],BT[j],CT[j],TAT[j],WT[j]);
printf("\nAverage Turnaround Time: %f",avgtat/n);
printf("\nAverage Waiting Time: %f",avgwt/n);
}
