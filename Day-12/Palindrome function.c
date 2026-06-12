#include <stdio.h>
int palindrome(int x) {
    int rev = 0, n = x;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return x == rev;
}
int main() {
    int n;
    printf("Enter a natural number:\n");
    scanf("%d", &n);
    if (palindrome(n))
        printf("%d is a palindrome number.\n", n);
    else
        printf("%d is not a palindrome number.\n", n);
    return 0;
}
