#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
class emp
{
	char name[30];
	int ecode;
	public:
		emp()
		{
			
		}
		emp(char *n, int c)
		{
			strcpy(name,n);
			ecode=c;
		}
};
int main()
{
	emp e[4];
	e[0]=emp("amit",1);
	e[1]=emp("joy",2);
	e[2]=emp("rahul",3);
	e[3]=emp("vikas",4);
	
	fstream file;
	file.open("employee.dat",ios::in | ios::out);
	
	int i;
	for(i=0;i<4;i++)
	file.write((char * ) &e[i], sizeof(e[i]));
	
	file.seekg(0,ios::end);
	int end=file.tellg();
	
	cout<<"number of objects stored in employee.dat is:"<<end;
	sizeof(emp);
	return 0;
}
