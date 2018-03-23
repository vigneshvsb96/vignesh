#include <stdio.h>
#include<string.h>
int main() 
{	
   char a[10];
   int i,j,n,c=0;
   scanf("%s",&a);
   n=strlen(a);
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
         if(a[i]==a[j])  
         {
             c=1;
             break;
         }
         else
         {  
             continue;
         }
       }
    }
    if(c==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
	return 0;
}
