#include <stdio.h>
#include<string.h>
int main() 
{	
   char b[10],c[10];
   int i,n;
   scanf("%s",&b);
   n=strlen(b);
   for(i=0;i<n;i=i+2)
   {
       c[i]=b[i];
       printf("%c",c[i]);
   }
   printf(" ");
   for(i=1;i<n;i=i+2)
   {
       c[i]=b[i];
       printf("%c",c[i]);
   }
 return 0;
}
