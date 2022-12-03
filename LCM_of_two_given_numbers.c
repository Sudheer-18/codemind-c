#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m*n;i++)
    {
        if(i%m==0&&i%n==0)
        break;
    }
    printf("%d",i);
}