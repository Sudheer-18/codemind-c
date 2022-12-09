#include<stdio.h>
int main()
{
    int n,rem,mul=1,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        mul=mul*rem;
        n=n/10;
    }
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}