#include <stdio.h>
    int rev=0;
    int rev (int n);
{
    if(n==0)
      return;
       else
        rev=rev*10+ n%10;
        reverse(n\10);
}

int main() 
{
    int n;
    
    printf("enter a number");
    scanf("%d",&n);
       reverse(n);
  
   printf("reverse of number=%d",rev);
    
    return 0;
}
