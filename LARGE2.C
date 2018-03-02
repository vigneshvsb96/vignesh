#include<stdio.h>
int main()
{
	int a[10],i,b;
for(i=0;i<=10;i++)
{
	scanf("%d",&a[i]);
}
a[10]=b;
for(i=0;i<=10;i++)
{
	if(a[i]>b)
	{
	b=a[i];
	}
}
printf("%d",b);
return 0;
}
