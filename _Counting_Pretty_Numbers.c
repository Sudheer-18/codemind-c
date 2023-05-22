#include<stdio.h>
int main()
{
    int n,m,a,i,j,r,c=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d%d",&m,&n);
        for(j=n;j>=m;j--)
        {
            r=j%10;
            if(r==2||r==3||r==9)
            {
                c++;
            }
        }
        printf("%d
",c);
        c=0;
    }
}