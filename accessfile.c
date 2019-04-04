#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	char str[1000];
	fp=fopen("f3.txt","r");
	if(fp==NULL)
	{
		printf("file not exist");
		return 1;
	}
	while((fgets(str,999,fp))!=NULL)
	{
		puts(str);
	}
	return 0;
	
	
}
