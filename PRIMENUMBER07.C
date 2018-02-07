#include<stdio.h>
int main()
{
 int a,b,c=0;
 scanf("%d",&a);
 for(b=0;b<=a/2;++b)
 {
  if(a%b==0)
  {
   c=1;
   break;
  }
 }
  if(c==0)
  printf("PRIME NUMBER");
  else
  printf("NOT A PRIME NUMBER");
  return 0;
} 
