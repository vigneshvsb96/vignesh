#include<stdio.h>        
int main()
{
    int n,i;
    int b=1,c=1,d;
    scanf("%d",&n);
    printf("%d  %d  ",b,c);
    for(i=2;i<n;i++)
    {
        d=b+c;
        printf("%d  ",d);
        b=c;
        c=d;
    }
    return 0;
}
