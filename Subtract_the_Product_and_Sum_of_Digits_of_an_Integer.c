#include<stdio.h>
int main()
{
    int n,e,r,s=0,p=1,q;
    scanf("%d",&n);
    e=n;
    while(n>0)
    {
        r=n%10;
        p=p*r;
        n=n/10;
    }
    while(e>0)
    {
    	q=e%10;
    	s=s+q;
    	e=e/10;
	}
	printf("%d",p-s);
    
}