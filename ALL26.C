#include<stdio.h>
int main()
{
 int n,i,a[10],b=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  b=b+a[i];
 }
 printf("%d",b);
 return 0;
}
