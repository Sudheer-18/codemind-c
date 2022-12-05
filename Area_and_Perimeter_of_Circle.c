#include<stdio.h>
int main()
{
    float r,area,peri;
    scanf("%f",&r);
    area=3.14*r*r;
    peri=2*3.14*r;
    printf("%.2f
%.2f",area,peri);
}