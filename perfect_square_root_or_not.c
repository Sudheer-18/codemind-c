#include<stdio.h>
#include<math.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    d=sqrt(n);
    int q=d*d;
    if(n==q)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}