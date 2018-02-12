#include<stdio.h>
int main()
{
int a,b=1,c;
scanf("%d",&c);
for(a=1;a<=c;a++)
{
b=b*a;
}
printf("\n FACTORIAL OF %d IS :%d",c,b);
return 0;
}
