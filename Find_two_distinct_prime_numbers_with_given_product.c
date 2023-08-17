#include<stdio.h>
#include<stdbool.h>
bool isprime(int n)
{
    int c=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return true;
    }
    return false;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(isprime(i))
        {
            for(j=2;j<n;j++)
            {
                if(isprime(j))
                {
                    if(i*j==n)
                    {
                        printf("%d %d",i,j);
                        break;
                    }
                }
            }
        }
        if(i*j==n)
        {
            break;
        }
    }
    if(i*j!=n)
    {
        printf("-1");
    }
}