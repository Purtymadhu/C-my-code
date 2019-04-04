#include<process.h>
#include<stdio.h>
int queue[5];
long front,rear;
int main()
{
	int choice,info;
	void initqueue();
	do
	{
		printf("\n----MENU----\n");
        printf("1. Insert an element in queue:\n");
		printf("2. Delete an element from queue:\n");
		printf("3. Display the queue:\n");
		printf("4. Exit:\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: if(rear < 4)
			{
				printf("enter the number:\n");
				scanf("%d",&info);
				if(front== -1)
				{
				 printf("queue is empty:");
				}
				else {
				
				rear=rear+1;}
				queue[rear]=info;
				
			}
			else
			printf("queue is full");
			break;
			
			case 2: int info;
			if(front!=-1)
			{
				info=queue[front];
				if(front==rear)
				{
					front=-1;
					rear=-1;
				}
				else
				front=front+1;
				printf("no delted is =%d\n",info);
			}
			else
			printf("queue is empty");
			break;
			
			case 3: void display();
			{
				int i;
	           for(i=front;i<=rear;i++)
	           printf("%i\t",queue[i]);
			}
			break;
			
			case 4: exit(0);
			default: printf("you entered wrong choice:!");
		}
	}
		while(choice!=4);
		return 0;
		}
void initqueue()
{
	front= rear=-1;
}
/*
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	printf("%i\n",queue[i]);
}*/
