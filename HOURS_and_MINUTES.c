#include<stdio.h>
int main()
{
    int n,hrs,min;
    scanf("%d",&n);
    hrs=n/60;
    min=n%60;
    printf("%d Hour(s) ",hrs);
    printf("%d Minute(s) ",min);
}