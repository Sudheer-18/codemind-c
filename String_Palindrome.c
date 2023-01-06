#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100],j=0,i;
	scanf("%s",s1);
	for(i=strlen(s1)-1;i>=0;i--)
	{
		s2[j++]=s1[i];
	}
	if(strcmp(s1,s2)==0)
	printf("Palindrome");
	else
	printf("Not Palindrome");             
}                                       