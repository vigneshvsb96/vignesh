#include<stdio.h>
void main()
{
int i,j,n,a[15],c;
printf(" \n Enter number of elements\n");
scanf("%d\n",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d\t",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
 c=a[i];
 a[i]=a[j];
 a[j]=c;
}
}
}
printf("%d",a[n/2]);
return 0;
}
