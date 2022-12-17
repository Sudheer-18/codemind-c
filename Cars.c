#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    if(n%4==0)
    {
        a=n/4;
    }
    else
    {
        a=(n/4)+1;
    }
    printf("%d",a);
}