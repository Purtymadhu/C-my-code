#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL,*curr,*tmp,*p,*prev;
int createnode(int d);
int insertnodeb(int d);
int insertnodem();
int insertnodee(int d);
void deletef();
void deletem();
void deletel();
void traverse();
void reverse();
int main()
{
	int ch,d;
	while(1)
	{
		printf("enter your choice:\n");
		printf("1: create a node:\n");
		printf("2: insert at beginning:\n");
		printf("3: insert at middle:\n");
		printf("4: insert at last:\n");
		printf("5: delete at first:\n");
		printf("6: delete at middle:\n");
		printf("7: delete at last:\n");
		printf("8: view the list:\n");
		printf("9: reverse the list:\n");
		printf("10: exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
			       printf("enter the element:");
			       scanf("%d",&d);
			       createnode(d);
			       break;
			       
		    case 2: 
		           printf("enter the element:");
		           scanf("%d",&d);
		           insertnodeb(d);
		           break;
		       
		    case 3: 
		           insertnodem();
		           break;
		           
		    case 4:
		    	   printf("enter the element:");
		    	   scanf("%d",&d);
		    	   insertnodee(d);
		    	   break;
		    	   
		    case 5: 
		            deletef();
		            break;
		    case 6:
		    	   deletem();
		    	   break;
		    case 7:
		    	   deletel();
		    	   break;
		    case 8: 
		            traverse();
		            break;
		    case 9: 
		            reverse();
		            break;
		    case 10:
		    	     exit(1);
		    	     
		    default:
		    	    printf("\n entered a weong choice:");
		    	    
		}
	}
	getch(); //end of switch
} //end of while
int createnode(int d)
{
tmp=(struct node *)malloc(sizeof(struct node));
tmp->data=d;
tmp->next=NULL;
start=tmp;	
}
int insertnodeb(int d)
{
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->data=d;
	tmp->next=start;
	start=tmp;
}
int insertnodem()
{
	int d,ele;
	 printf("enter element which to be inserted::");
	 scanf("%d",&d);
	 tmp=(struct node *)malloc(sizeof(struct node));
	 tmp->data=d;
	 p=start;
	 printf("enter element after which to be inserted\n:");
	 scanf("%d",&ele);
	 while(p!=NULL)
	 {
	 	if(p->data==ele)
	 	{
	 		tmp->next=p->next;
	 		p->next=tmp;
	 		return 0;
		 }
		 p=p->next;
	 }
	 printf("%d ele not found",ele);
	
	
}
int insertnodee(int d)
{
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->data=d;
	p=start;
	while(p->next!=NULL)
	{
		p=p->next;
		
	}
	p->next=tmp;
}
void deletef()
{
	tmp=start;
	start=start->next;
	free(tmp);
}
void deletel()
{
	curr=start;
	while(curr->next!=NULL)
	{
		prev=curr;
		curr=curr->next;
		free(curr);
		prev->next=NULL;
	}
}
void deletem()
{
	int d;
	printf("enter the element to be deleted:");
	scanf("%d",&d);
	if(start->data==d)
	deletef();
	else
	{
		prev=NULL;
		curr=start;
		while(curr->data!=d)
		{
			prev=curr;
			curr=curr->next;
		}
		prev->next=curr->next;
		free(curr);
	}
}
void traverse()
{
	if(start==NULL)
	printf("\n list is empty:");
	else
	{
		p=start;
		printf("list is \n");
		while(p!=NULL)
		{
			printf("%d\t",p->data);
			p=p->next;
		}
	}
}
void reverse()
{
	struct node *t1=NULL,*t2=NULL;
	if(start==NULL)
	printf("\n list is empty\n");
	else
    {
    	p=start;
    	while(p!=NULL)
    	{
    		t2=p->next;
    		p->next=t1;
    		t1=p;
    		p=t2;
		}
		p=t1;
		printf("list is \n");
		while(p!=NULL)
		{
			printf("%d\t",p->data);
			p=p->next;
		}
	}
	start=t1;
}
