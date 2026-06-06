#include <stdio.h>
int main() {
    int dec, n;
    long bin = 0, p = 1;
    printf("Enter a decimal number:\n");
    scanf("%d", &dec);
    n = dec;
    while (n > 0) {
        bin += (n % 2) * p;
        p *= 10;
        n /= 2;
    }
    printf("%d in binary is: %ld\n", dec, bin);
    return 0;
}
