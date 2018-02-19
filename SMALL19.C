#include<stdio.h>
int main()
{
int a,b[3],d,i;
printf("Enter the number of elements: ");
scanf("%d",&a);
printf("Enter the array elements: ");
for(i=1;i<=a;i++)
{
scanf("%d\n",&b[i]);
}
d=b[0];
for(i=1;i<=a;i++)
{
if(b[i]<d)
{
 d=b[i];
}
}
printf("SMALLEST NUMBER IS  %d",d);
return 0;
}
