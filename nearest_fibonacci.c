#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,c=1;
    scanf("%d",&n);
    a=0;
    b=1;
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(abs(n-b)>abs(n-c))
    {
        printf("%d
",c);
    }
    else if(abs(n-b)<abs(n-c))
    {
        printf("%d
",b);
    }
    else
    {
        printf("%d %d
",b,c);
    }
}
    