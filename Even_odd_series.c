#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,k1=1,k2=-1,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            a=pow(2,k1);
            printf("%d ",a);
            k1++;
        }
        else if(i%2!=0)
        {
            if(k2==-1)
            {
                printf("0 ");
                k2+=1;
            }
            else
            {
                b=pow(3,k2);
            printf("%d ",b);
            k2++;
            }
        }
    }
}