#include<stdio.h>
int main() 
{
int a,b;
printf("\n enter two numbers to swap:");
scanf("%d %d",&a,&b);
printf("\n before swapping:");
printf("\n%d",a);
printf("\n%d",b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after swapping:");
printf("\n%d",a);
printf("\n%d",b);
return 0;
}
