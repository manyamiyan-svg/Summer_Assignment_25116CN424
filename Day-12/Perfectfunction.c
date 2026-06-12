#include <stdio.h>
int perfect(int n) {
    if (n == 1) return 0;
    int sumf = 1,t;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sumf += i;
                sumf += n / i;
        }
    }
    return sumf == n;
}
int main() {
    int n;
    printf("Enter a natural number:\n");
    scanf("%d", &n);
    if (perfect(n))
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);
    return 0;
}
