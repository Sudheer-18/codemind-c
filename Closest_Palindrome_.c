#include<stdio.h>
#include<stdbool.h>
bool ispalindrome(int n)
{
    int r,s=0,temp;
    temp=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==temp)
    {
        return true;
    }
    return false;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(ispalindrome(i))
        {
             break;
        }
    }
    for(j=n-1;;j--)
    {
        if(ispalindrome(j))
        {
            break;
        }
    }
    int d1,d2;
    d1=n-j;
    d2=i-n;
    if(d1>d2)
    {
        printf("%d",i);
    }
    else if(d1<d2)
    {
        printf("%d",j);
    }
    else
    {
        printf("%d %d",j,i);
    }
}