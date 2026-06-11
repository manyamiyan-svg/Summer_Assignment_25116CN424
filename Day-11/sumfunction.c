#include <stdio.h>
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b,i;
     printf("enter 2 numbers");
     scanf("%d%d",&a,&b);
     i=sum(a,b);
     printf("sum of 2 nos=%d",i);
   
    return 0;
}
