#include <stdio.h>
int main() {
    int dec, n, c = 0;
    printf("Enter a decimal number:\n");
    scanf("%d", &dec);
    n = dec;
    while (n > 0) {
        if (n % 2 == 1)
            c++;
        n /= 2;
    }
    printf("Number of set bits in %d is: %d\n", dec, c);
    return 0;
}
