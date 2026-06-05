#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter a natural number:\n");
    scanf("%d", &n);

    if (n == 1) {
        printf("1 is not a perfect number.\n");
        return 0;
    }

    int sumf = 1;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            sumf = sumf + i;
        }
    }

    if (sumf == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);

    return 0;
}
