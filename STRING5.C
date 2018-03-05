#include<stdio.h>
#include<string.h>
int main() {
	char a[50],b[50];
	int i,c,d;
	scanf("%s",&a);
	scanf("%s",&b);
	c=strlen(a);
	d=strlen(b);
    if(c==d)
    {
        printf("%s",b);
    }
    else if(c>d)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }
	 return 0;
}
