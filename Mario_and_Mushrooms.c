#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==1)
    {
        printf("HUGE");
    }
    else if(a%3==2)
    {
        printf("SMALL");
    }
    else
    {
        printf("NORMAL");
    }
}