#include<process.h>
#include<malloc.h>
#include<stdio.h>
#include<stdlib.h>
int start,no,choice,item;
struct stack
{
	//int no;
	struct stack *next;
} *top=NULL;
typedef struct stack st;
void push();
void pop();
void display();
int main()
{
	char ch;
	//int choice,item;
	do
	{
		printf("\n1: push");
		printf("\n2: pop");
		printf("\n3: display");
		printf("\n4: exit");
		printf("\n enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
			break;
			
	    	 case 2: item = pop();
			 printf("the deleted element is %d",item);
			 break;
			 
			 case 3: display();
			 break;
			 
			  case 4: exit(0);
		}
	}
	while(choice !=4)
	
}
void push()
{
	st *p;
	p=(st *)malloc(sizeof(st));
	printf("enter the number:");
	scanf("%d",&p->no);
	p->next=top;
	top=p;
}
int pop()
{
	st *p;
	p=start;
	if(top==NULL){
	printf("stack is already empty:");}
else
{
	top=top->next;
	return(p->no);
	free(p);
}
}
void display()
{
	st* p;
	p=top;
	while(p!=NULL)
	{
		printf("\n no=%d",p->no);
		p=p->next;
	}
	printf("\n no =%d",p->no);
}
