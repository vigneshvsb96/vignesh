#include <stdio.h>
int main() 
{
	int n,i,a[100],c,d;
	scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   d=a[0];
   for(i=0;i<n;i++)
   {
       if(a[i]>d)
       {
           d=a[i];
       }
   }
   c=a[0];
   for(i=0;i<n;i++)
   {
       if(a[i]<c)
       {
           c=a[i];
       }
   }
   printf("min is %d\nmax is %d",c,d);
	return 0;
}
