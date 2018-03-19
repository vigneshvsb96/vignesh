#include <stdio.h>
int main() 
{
    int a,b,c,i;
    scanf("%d %d",&a,&b);
    c=a*b;
    for(i=0;i<=c;i++)
    {
        if(c==(i*i))
        {
            printf("YES");
        }
        else
        {
         printf("NO");
        }
    }
	return 0;
}
