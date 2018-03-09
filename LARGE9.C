#include<stdio.h>
int main()
{
	int x[10],i,y;
for(i=0;i<=10;i++)
{
	scanf("%d",&x[i]);
}
x[10]=y;
for(i=0;i<=10;i++)
{
	if(x[i]>y)
	{
	y=x[i];
	}
}
printf("%d",y);
return 0;
}
