#include<stdio.h>
int main()
{
    int n,s=0,i,q;
    scanf("%d",&n);
    q=n;
    for(i=1;i<n;i++)
    {
        if(q%i==0)
        {
            s=s+i;
        }
    }
    if(s>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}