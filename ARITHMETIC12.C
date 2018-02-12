#include<stdio.h>
int main()
{
int sum=0,a,b,i,c;
scanf("%d%d%d",&a,&b,&c);
for(i=1;i<=c;i++)
{
sum=sum+a;
a=a+b;
}
printf("%d",sum);
return 0;
}
