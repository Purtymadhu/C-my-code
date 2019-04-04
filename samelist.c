#include<stdio.h>
#include<stdlib.h>
struct mylist
{
	int data;
	struct mylist *next;
}*head=NULL;
struct yourlist
{
	int info;
	struct yourlist *next1;
}*head2=NULL;
void createmylist(int);
void createyourlist(int);
void display1();
void display2();
int comp(int,int);
int main()
{
	int i,d1,d2,m,n;
	printf("Enter the size of first list: ");
	scanf("%d",&n);
	printf("Insert first list elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&d1);
		createmylist(d1);
	}
	display1();
	printf("Enter the size of second list: ");
	scanf("%d",&m);
	printf("Insert the second list elements:\n");
	for(i=0;i<m;i++)
	{
	scanf("%d",&d2);
	createyourlist(d2);
	}
	display2();
	comp(n,m);
}
void mylist(int d1)
{
	struct mylist *temp,*t=head;	
	temp=(struct mylist*)malloc(sizeof(struct mylist));
	temp->data=d1;
	temp->next=NULL;
	if(head==NULL)
		head=temp;
	else
	{
		while(t->next!=NULL)	
			t=t->next;
		t->next=temp;
	}
}

void yourlist(int d2)
{
	struct yourlist *tem,*t1=head2;
	tem=(struct yourlist*)malloc(sizeof(struct yourlist));
	tem->info=d2;
	tem->next1=NULL;
	if(head2==NULL)
		head2=tem;
	else
	{
		while(t1->next1!=NULL)
			t1=t1->next1;
		t1->next1=tem;	
}
}
void display1()
{
	struct mylist *ptr;
	ptr=head;
	printf("\nFirst List is : ");
	while(ptr!=NULL)
	{
		printf(" %d ->",ptr->data);
		ptr=ptr->next;
	}
}
void display2()
{
	struct yourlist *pon;
	pon=head2;
	printf("\nSecond List is : ");
	while(pon!=NULL)
	{
		printf(" %d ->",pon->info);
		pon=pon->next1;
	}
}
int comp(int n,int m)
{
	struct mylist *t1=head;
	struct yourlist *t2=head2;
	if (m!=n)
		printf("The list are not same.......\n");
	
	while(t1->next!=NULL)
	{
	t1=t1->next;
		while(t2->next1!=NULL)
		{
		t2=t2->next1;
		if(t1->data==t2->info)
		printf("The list are same!!\n");
		else{
			printf("List are not same!!");
		}	
		}
}
}
