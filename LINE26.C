#include <stdio.h>
#include<string.h>
int main() 
{
	char a[1000];
	int n,i,b=1;
	scanf("%[^\t\n]s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	   if(a[i]=='.'&& a[i+1]!='\0')
	    {
	        b++;
	    }
	}
	printf("%d",b);
	return 0;
}
