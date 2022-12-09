#include<stdio.h>
int main()
{
    int n,rem,sum=0,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rem=q%10;
        sum=sum*10+rem;
        q=q/10;
    }
    if(n==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}