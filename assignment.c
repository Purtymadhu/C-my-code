#include<stdio.h>
#include<string.h>
struct product
{
	int id;
	char product_name[100];
	float product_price;
	float product_quantity;
	char company_name[100];
}s;
 main()
{
	FILE *fp;
	int n,i;
	fp=fopen("f3.txt","w");
	if(fp==NULL)
	{
	printf("file not exist:");	
	return 1;
	}
	fprintf(fp,"id\tproduct_name\tproduct_price\tproduct_quantity\tcompany_name");
	printf("enter how many records you want:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter product id:=");
		scanf("%d",&s.id);
				
	    printf("enter product name:=");
	    scanf("%s",s.product_name);
	    
	    printf("enter product price:=");
	    scanf("%f", &s.product_price);
	    
	    printf("enter product quantity:=");
	    scanf("%f",&s.product_quantity);
	    
	    printf("enter product comapnay name:=");
	    scanf("%s",s.company_name);
	    
		fprintf(fp,"\n%d\t%s\t\t %f\t%f\t\t%s",s.id, s.product_name, s.product_price, s.product_quantity, s.company_name);
	}
	fclose(fp);
	return 0;
}
