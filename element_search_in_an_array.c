#include<stdio.h>
int main()
{
    int i,n,x,y;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
       if(x==a[i])
       {
           y=0;
       }
    }
    if(y==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}