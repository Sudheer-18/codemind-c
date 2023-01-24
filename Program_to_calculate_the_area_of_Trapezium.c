#include<stdio.h>
int main()
{
    float a,b,h,area;
    scanf("%f%f%f",&a,&b,&h);
    area=h/2.0*(a+b);
    printf("%.4f",area);
}