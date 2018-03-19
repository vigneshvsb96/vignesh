#include <stdio.h>
int main() 
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=(n/2);i++)
    {
        if(n%i==0)
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
