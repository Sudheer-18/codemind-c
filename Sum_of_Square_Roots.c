#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    float sum=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        float sq=sqrt(i);
        sum=sum+sq;
    }
    printf("%.2f",sum);
}