#include<stdio.h>
int main()
{
	int i,b;
	char a[100];
	scanf("%s",&a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
	printf("%c ",a[i]);
	}

	return 0;
}
