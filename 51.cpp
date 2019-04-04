#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
void push();
int pop();
void traverse();
int stack[5];
int top=-1;
int main()
{
	int choice ;
	char ch;
	do
	{
		printf("\n 1: push:");
		printf("\n 2: pop");
		printf("\n 3: traverse");
		printf("\n 4: exit");
		printf("\nenter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
			break;
			
			case 2: printf("\n the deleted element is %d",pop());
			break;
			
			case 3: traverse();
			break;
			
			case 4: exit(0);
			
		}
	}
	while(choice != 4);
}
void push()
{
	int item;
	if(top==4)
	{
	printf("stack is full");
}
else
{
	printf("enter the element to be inserted:\n");
	scanf("%d",&item);
	top=top+1;
	stack[top]=item;
}
	
}
int pop()
{
	int item;
	if(top==-1){
	printf("stack is empty:");}
	else
	{
		item=stack[top];
		top=top-1;
	}
	return item;
}
void traverse()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty:");
		
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n %d\n",stack[i]);
		}
	}
}
