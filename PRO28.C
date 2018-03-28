#include<stdio.h>
int main()
{
 int a,b,c=1,i;
 scanf("%d",&a);
 for(i=1;a!='\0';i++)
 {
  b=a%10;
  c=c*b;
  a=a/10;
 }
 printf("%d",c);
 return 0;
}
