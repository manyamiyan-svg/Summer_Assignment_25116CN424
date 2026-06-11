#include <stdio.h>
int max (int a, int b )
{
 if(a>b){
   return a ;
 }
   else {
        return b;
   }    
}

int main()
{
    int a,b;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    
    printf("Greater of 2 numbers=%d",max(a,b));
    

    
    return 0;
}
