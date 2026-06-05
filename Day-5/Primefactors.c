#include <stdio.h>

// function to check prime
int isprime(int x) {
    if (x < 2) return 0;

    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a natural number:\n");
    scanf("%d", &n);

    if (n == 1) {
        printf("1 does not have any prime factors.\n");
        return 0;
    }

    for (int i = n; i > 1; i--) {
        if (n % i == 0 && isprime(i)) {
            printf("%d is the largest prime factor of %d\n", i, n);
            break;
        }
    }

    return 0;
}
