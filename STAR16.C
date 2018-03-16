#include<stdio.h>
#include<string.h>
int main()
{
	char b[100];
	int c;
	scanf("%s[^\t]",&b);
	c=strlen(b);
	if(c%2==0)
	{
		b[c/2]='*';
		b[(c/2)-1]='*';
	}
	else
	{
		b[c/2]='*';
	}
	printf("%s",b);
	return 0;
}
