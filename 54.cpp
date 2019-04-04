#include<process.h>
#include<stdio.h>
struct node
{
	int no,num;
	struct queue *next;
}
*front= NULL, *rear=NULL;
typedef struct node node;
int main()
{
	int ch;
	do
	{
		printf("1. add\n");
		printf("2. delete\n");
		printf("3. traverse\n");
		printf("4. exit\n");
		printf("enter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: void enque();
			break;
			
			case 2: void deque();
			break;
			
			case 3: void traverse();
			break;
			
			case 4: exit(0);
			default: printf("wrong choice:");
		}
	}
	while(ch!=4);
}
void enque()
{
	node *p;
	printf("enter the no\n");
	scanf("%d",&p->num);
	if(front == NULL)
	{
		p->next =NULL;
		front=p;
		rear=p;
	}
	else
	{
		p->next = NULL;
		rear->next=p;
		rear=p;
	}
}
void deque()
{
	node *p;
	if(front!=NULL)
	{
		p=front;
		if(front==rear)
		{
			front=NULL;
			rear=NULL;
		}
		else
		front=front->next;
		printf("no deleted is =%d",p->num);
	}
	else
	printf("queue is empty:");
}
void traverse()
{
	node *p;
	if(front !=NULL)
	{
		p=front;
		while(p!=NULL)
		{
			printf("%d",p->num);
			p=p->next;
		}
	}
	else
	printf("queue is empty:");
}
