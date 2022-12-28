#include<stdio.h>
int main()
{
    int n,c=0,s=0,i,temp,r=0,rev=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        rev=0;
        while(a[i]!=0)
        {
            r=a[i]%10;
            a[i]=a[i]/10;
            rev=rev*10+r;
        }
        if(rev==temp)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}