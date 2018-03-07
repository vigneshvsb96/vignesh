#include<stdio.h>
int main()
{  
  int a[100],i,b,c=0,d;
  scanf("%d",&b);
  for(i=0;i<=b;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<=b;i++)
  {
   c=c+a[i];
  }
  d=c/b;
  printf("%d",d);
  return 0;
}
