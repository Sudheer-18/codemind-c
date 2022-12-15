#include<stdio.h>
int main()
{
    int a=0,n,i,r,d,s=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        r=i*i;
        s=s+r;
        a=a+i;
    }
    d=a*a-s;
    printf("%d",d);
}