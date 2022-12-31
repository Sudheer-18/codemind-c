#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x==5&&y<2)
        {
            printf("Chocolate
");
        }
        else if(x==5&&y==2)
        {
            printf("Either
");
        }
        else
        {
            printf("Candy
");
        }
    }
}