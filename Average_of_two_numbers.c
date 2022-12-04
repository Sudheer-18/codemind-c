#include<stdio.h>
float avg(int a,int b)
{
    float x;
    x=(a+b)/2.0;
    return x;
}
int main()
{
    int a,b;
    float x;
    scanf("%d%d",&a,&b);
    x=(a+b)/2.0;
    printf("Average of %d and %d is: %.2f",a,b,x);
}