#include <stdio.h>
int main() 
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=1;i<=(a/2);i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
	return 0;
}
