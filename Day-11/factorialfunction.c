#include <stdio.h>
int facto(int n)
{
int i,fact=1;
for(i=1;i<=n;i++){
    fact=fact*i ;
   }
   return fact;
}

int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    
    printf("factorial=%d",facto(a));
    

    
    return 0;
}
