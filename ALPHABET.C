#include<stdio.h>
int main()
{
	char a;
	clrscr();
	printf("ENTER THE VALUE");
	scanf("%c",&a);
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
	printf("IT IS ALPHABET");
	else
	printf("IT IS NOT ALPHABET");
	return 0;
}
