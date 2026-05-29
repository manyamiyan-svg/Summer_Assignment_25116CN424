#include <stdio.h>
int main() {
    int  i,n,prod=1;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0){
    prod=prod*n%10;
    n=n/10;
}
    printf("product of digits=%d",prod);

    return 0;
}
