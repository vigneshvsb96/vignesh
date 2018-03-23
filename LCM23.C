#include <stdio.h>
int main()
{
	int a,b,c,i,d;
	scanf("%d %d",&a,&b);
	for(i=1;(i<=a)&&(i<=b);i++)
	{
	  if((a%i==0) && (b%i==0))     
	  {
	      c=i;
	  }
	}
	 d=(a*b)/c;
	printf("%d",d);
	return 0;
}
