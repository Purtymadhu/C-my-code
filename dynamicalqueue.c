#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *next;
}*front=NULL,*rear=NULL;
int insert(int);
int delete();
void display();
void main()
{
	int choice,item;
	while(1)
	{
		printf("1.insertion in queue\n");
		printf("2.deletion in queue\n");
		printf("3.display\n");
		printf("4.quit\n");
		printf("enter your desired choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("the insert element in a queue:\n");
				scanf("%d",&item);
				insert(item);
				break;
			case 2:
				printf("the deleted element in the queue\n");
				item=delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("you have entered a wrong choice\n");
			}		
	}
}
int insert(int item)
{
	struct queue *temp;
	temp=(struct queue*)malloc(sizeof(struct queue));
	if(temp==NULL)
		printf("overflow");
	temp->data=item;
	temp->next=NULL;
	if (front==NULL)
	{
		front=temp;
		rear=temp;
    }
	else
	{
		rear->next=temp;
		rear=temp;
	}
}
int delete()
{
	struct queue *temp;
	int item;
	if (front==NULL)
		printf("underflow");		
else
{
temp=front;
item=temp->data;
front=front->next;
free(temp);
return item;
}
}
void display()
{
	struct queue *ptr;
	ptr=front;
	if(front==NULL) 
		printf("stack is empty\n");
	else
	{
	printf("queue elements are:\n");
	while(ptr!=NULL)
		{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
}	
