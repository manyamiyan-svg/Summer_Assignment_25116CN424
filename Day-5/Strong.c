#include <stdio.h>

// function to calculate factorial
int factorial(int x) {
    if (x == 0 || x == 1)
        return 1;
    return x * factorial(x - 1);
}

int main() {
    int n;
    printf("Enter a natural number:\n");
    scanf("%d", &n);

    int n1 = n, sn = 0;

    while (n1 > 0) {
        int digit = n1 % 10;
        sn = sn + factorial(digit);
        n1 /= 10;
    }

    if (sn == n)
        printf("%d is a strong number.\n", n);
    else
        printf("%d is not a strong number.\n", n);

    return 0;
}
