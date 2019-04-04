#include<stdio.h>
#include<conio.h>
int main()
{ 
int p,q,i,j ,c;
int arr1[100],arr2[100],arr3[200];
puts("enter number of  element of a the first sorted array:\n");
scanf("%d",&p);
puts("enter element of the first sorted array:\n");
for(i=0;i<=p-1;i++)
scanf("%d",&arr1[i]);
puts("enter number of element of the second sorted array:\n");
scanf("%d",&q);
puts("enter element of the second array:\n");
for(j=0;j<=q-1;j++)
scanf("%d",&arr2[j]);
 c=0;
 i=0;
 j=0;
 while((i<p) && (j<q))
{
	if(arr1[i] <= arr2[j])
	arr3[c]= arr1[i++];
	else
	arr3[c]=arr2[j++];
	c++;
}
while(i<p)
{
	arr3[c] = arr1[i];
	c++;
	i++;
}
while(j<q)
{
	arr3[c]= arr1[i];
	c++;
	j++;
}
 
 puts("merged array in ascending order:\n");
 for(i=0;i<=c-1;i++)
 printf("%d\n",arr3[i]);
 
}
