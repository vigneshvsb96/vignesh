#include <stdio.h>
#include<string.h>
int main(void)
{
     char a[100];
    int i,b,c=0;
    scanf("%s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    { 
       if((a[i]>='a' && a[i]<='z') || (a[i]>=0 && a[i]<=9))
       c++;
     }
   if(c>=1)
   printf("Yes");
   else
   printf("No");
   
return 0;
}
