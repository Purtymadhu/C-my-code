#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char ch[10];
int push(int);
int top=-1;
int main()
{
	int l,i,item;
	printf("enter the desired string :");
	gets(ch);
	push(item);
	l=strlen(ch);
	for(i=0;i<l/2;i++){
	if(ch[i]!=ch[l-i-1])
	printf("the string is not a palindrome");
	else
	printf("the string is palindrome");
}

	
}
int push(int item)
{
	if(top==9)
	printf("no element\n");
	else
	top=top+1;
	ch[top]=item;
	return;
}

