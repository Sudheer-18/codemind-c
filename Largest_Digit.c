#include<stdio.h>
int main ()
{
   int num, rem, Larg= 0; 
   scanf ("%d", &num);
     while (num > 0)
     { 
        rem = num % 10;
        if (Larg < rem)
         {
           Larg = rem;
         }
           num = num / 10;
      }
        printf ("%d",Larg);
}
