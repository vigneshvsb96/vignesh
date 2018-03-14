#include<stdio.h>
int main()
{
int i,a,b;
scanf("%d",&a);
for(i=a;i<=(a*10);i++)
{
if(i%10==0)
{
printf("%d",i);
break;
}
}
return 0;
}
