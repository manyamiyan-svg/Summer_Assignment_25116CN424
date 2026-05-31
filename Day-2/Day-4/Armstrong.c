#include<stdio.h>
#include<math.h>
int main(){
    int a,n,sum=0,count=0;
    printf("enter the number");
    scanf("%d",&n);
    int og=n;
    while (n!=0){
        count++;
        n=n/10;
    }
    n=og;
    // calculating the sum for checking armstrong number
    while (n!=0){
        a=n%10;
        sum = sum+ pow(a,count);
        n=n/10;
    }
    if (sum==og){
        printf("the number is an armstrong number");
    }
    else{
        printf("the number is not an armstrong number");
    }
    return 0;
}
