#include<stdio.h>
int main()
{
    int n,a,i,sum=0,ld;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n);
        ld=n%10;
        while(n>=10)
        {
          n=n/10;
        }
        sum=ld+n;
        printf("%d
",sum);
    }
}
