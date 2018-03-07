#include<stdio.h>
int main()
{
	int a,i,b=1,pow=2;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	b=b*pow;
	if(b==a)
		{
		printf("YES");
		break;
		}
	}
		if(b!=a)
		{
			printf("NO");
		}
		
	
	return 0;
}
