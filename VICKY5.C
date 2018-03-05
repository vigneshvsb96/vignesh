#include <stdio.h>
#include<string.h>
int main() 
{
	char a[10],b[10];
	int c,d,i,j;
	scanf("%s",&a);
	scanf("%s",&b);
	c=strlen(a);
	d=strlen(b);
	for(i=0;i<d;i++)
	{
	    a[c]=b[i];
	    c++;
	}
    	printf("%s",a);
   	return 0;
}
