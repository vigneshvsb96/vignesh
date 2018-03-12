#include <stdio.h>
#include <string.h>
int main()
{
char b[100];
int c=0,i;
scanf("%[^\n]b",&b);
for(i=0;b[i]!='\0';i++)
{
if(b[i]==' ')
c++;    
}
printf("\n  %d",c+1);
return 0;
}
