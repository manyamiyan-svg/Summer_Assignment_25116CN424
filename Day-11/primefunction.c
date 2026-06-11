#include <stdio.h>
int prime(int x) {
int i;
    if (x < 2) return 0;
    for (i = 2; i <= x / 2; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    if (prime(a))
        printf("%d is a prime number.\n", a);
    else
        printf("%d is not a prime number.\n", a);
    return 0;
}
