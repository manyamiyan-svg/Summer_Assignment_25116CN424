#include <stdio.h>
int main() {
    int  n,a,rev=0;
    printf("enter a number");
    scanf("%d",&n);
    a=n;
    while(n!=0){
    rev=rev*10+n%10;
    n=n/10;
}
    if(a == rev){
printf ("it is a palindrome");
}
      else{
      printf(" it is not a palindrome");
}
      
      
    return 0;
}
