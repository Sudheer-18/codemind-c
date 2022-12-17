#include<stdio.h>
int main()
{
    int a,k,m,n;
    scanf("%d%d%d",&n,&m,&k);
    if(n%(k*m)==0)
    {
        a=n/(k*m);
    }
    else
    {
        a=n/(k*m)+1;
    }
    printf("%d",a);
}