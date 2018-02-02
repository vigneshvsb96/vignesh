#include <stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER THREE NUMBERS");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(a>c))
	printf("a IS GREATER");
	else if(b>c)
	printf("b IS GREATER");
	else
	printf("c IS GREATER");
	return 0;
}
