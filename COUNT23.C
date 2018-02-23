#include<stdio.h>
#include<string.h>
int main()
{
	char X[100];
	int i,count=0,Y;
	scanf("%s",&X);
	Y=strlen(X);
	for(i=0;i<Y;i++)
	{
		if((X[i]='65')&&(X[i]='112')||(X[i]='97')&&(X[i]='144'))
		{
			count++;
		}
	}
	printf("%d",count);
	return 0; 
}
