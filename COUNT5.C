#include <stdio.h>

int main(void) 
{
	char a[10];
	int i,c=0;
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			c=c+1;
		}
	}
	printf("%d",c);
	return 0;
}
