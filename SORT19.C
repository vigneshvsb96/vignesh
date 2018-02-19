#include<stdio.h>
int main()
{
	int a,b[25],c,i,j;
	printf("Enter the number of elements\n");
	scanf("%d",&c);
	printf("enter the array elements\n ");
	for(i=0;i<c;i++)
	{
	scanf("%d",&b[i]);	
	}
for(i=0;i<c;i++)
{
	for(j=i+1;j<c;j++)
	{
		if(b[i]>b[j])
	{
		a=b[j];
		b[j]=b[i];
		b[i]=a;
	}
 }
}
for(i=0;i<c;i++)
printf("%d",b[i]);
return 0;
}
