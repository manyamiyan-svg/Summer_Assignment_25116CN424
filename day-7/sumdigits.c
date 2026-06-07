#include<stdio.h>
int sumdigits(int n)
{
   if ( n==0)
      return 0;
      else
        return n%10+ sumdigits(n/10);
}
  int main ()
 {
      int n;
      printf("enter a number");
      scanf("%d",&n);
      
      printf("sum of digits %d=%d",sumdigits(n));
      return 0;
 }
