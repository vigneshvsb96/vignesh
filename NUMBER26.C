#include <stdio.h>
#include <string.h>
int main()
{
char a[100];
int b=0,i;
printf("\n Enter the sentence:");
scanf("%[^\n]a",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
b++;    
}
printf("\n Number of words are: %d",b+1);
return 0;
}
