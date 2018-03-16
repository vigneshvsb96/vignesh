#include<stdio.h>
int main()
{
 int n,l,r,i;
 scanf("%d%d%d",&n,&l,&r);
 for(i=0;i<r;i++)
 {
  if(n>=l&&n<=r)
  {
   printf("YES");
   break;
  }
  else
  {
  	printf("NO");
  }
 }
 return 0;
}
