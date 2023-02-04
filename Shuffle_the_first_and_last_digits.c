#include<stdio.h>
#include<math.h>
int main()
{
    int num,fir,end,swp,dig,div;
    scanf("%d",&num);
    dig=log10(num);
    div=pow(10,dig);
    fir=num/div;
    num=num%div;
    end=num%10;
    num=num/10;
    swp=end*div+num*10+fir;
    printf("%d",swp);
}