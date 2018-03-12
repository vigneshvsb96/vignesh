#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	int n,i,b;
	scanf("%s",a);
	scanf("%d",&b);
	n=strlen(a);
    for(i=0;i<b;i++)
    {
        printf("%c",a[i]);
    }
	return 0;
}
