#include<stdio.h>
int main()
{
    int a,b,c,d,q,p=0,s=0,r;
    scanf("%d",&a);
    b=a*a;
    c=a;
    while(c!=0)
    {
        r=c%10;
        s=s*10+r;
        c=c/10;
    }
    d=s*s;
    while(d!=0)
    {
        q=d%10;
        p=p*10+q;
        d=d/10;
    }
    if(p==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}