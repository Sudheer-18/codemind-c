#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],s=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      if(a[i]%2!=0)
      {
          s=s+a[i];
      }
      else
      {
          break;
      }
    }
    printf("%d",s);
}