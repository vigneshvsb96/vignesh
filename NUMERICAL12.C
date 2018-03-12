#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	int b,i,count=0;
	scanf("%s",a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
	    if(a[i]=='0'||a[i]=='1')
	    {   
	        count++;
	    }
	    else
	    {
	       printf("no");
	       break;
	    }
	    if(b==count)
	{
	     printf("yes");
	}
	}
	
	return 0;
}
