#include<stdio.h>        
int main()
{
    int n,i;
    int b=1,c=1,a;
    scanf("%d",&n);
    printf("%d  %d  ",b,c);
    for(i=2;i<n;i++)
    {
        a=b+c;
        printf("%d  ",a);
        b=c;
        c=a;
    }
    return 0;
}
