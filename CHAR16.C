#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int b,i,c=0;
    scanf("%s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
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
