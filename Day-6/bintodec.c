#include <stdio.h>
int main() {
    long bin, n;
    int dec = 0, x = 1;
    printf("Enter a binary number:\n");
    scanf("%ld", &bin);
    n = bin;
    while (n > 0) {
        dec += (n % 10) * x;
        n /= 10;
        x *= 2;
    }
    printf("%ld in decimal is: %d\n", bin, dec);
    return 0;
}
