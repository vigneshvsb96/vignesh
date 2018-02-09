#include<stdio.h>
int main()
{
  int a,b,c,d,e;
  scanf("%d",&a);
  b=a/100;
  c=(a-((a/10)+10));
  d=(a-((a/10)*10));
  e=(b*b*b)+(c*c*c)+(d*d*d);
  if(e==a)
  printf("ARMSTRONG\n");
  else
  printf("NOT A ARMSTRONG");
  return 0;
}
