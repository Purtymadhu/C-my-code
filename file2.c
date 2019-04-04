#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char ch[100];
	FILE *fp;
	fp=fopen("f2.txt","w");
	if(fp==NULL)
	{
		printf("file not exist:");
		exit(1);
	}
	printf("enter a string:");
	gets(ch);
	for(i=0;i<strlen(ch);i++)
	fputc(ch[i],fp);
	getch();
	fclose(fp);
	getch();
}
	
