#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char ch[]="hello madhu";
	FILE *fp;
	fp=fopen("f1.txt","w");
	if(fp==NULL)
	{
		printf("file not exist");
		
	}
	for(i=0;i<strlen(ch);i++)
	
		fputc(ch[i],fp);
		fclose(fp);
	
}
