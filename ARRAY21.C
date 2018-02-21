#include <stdio.h>
int main() 
{
    int b,a[10],i;
    printf("enter the number of elements\n");
    scanf("%d",&b);
    printf("enter the elements\n");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
      printf("%d %d\n",a[i],i);
    }
	return 0;
}
