#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,k1=0,k2=0,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            a=pow(2,k1);
            printf("%d ",a-1);
            k1++;
        }
        else
        {
            b=pow(3,k2);
            printf("%d ",b-1);
            k2++;
        }
    }
}