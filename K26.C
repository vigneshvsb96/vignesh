#include<stdio.h>
int main()
{
  int a[20],b,c,i;
  scanf("%d %d",&b,&c);
  for(i=1;i<=b;i++)
{
   scanf("%d",&a[i]);
}
printf("%d",a[c-1]);
  return 0;
}
