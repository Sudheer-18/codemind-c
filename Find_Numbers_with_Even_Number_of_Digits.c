#include<stdio.h>
#include<math.h>
int count_Even(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
       int   k=0;
       k=log10(arr[i])+1;
       if(k%2==0)
       {
           c++;
       }
    }
    return c;
    
}
int main()
{
    int  n,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     count=count_Even(a,n);
    printf("%d",count);
}