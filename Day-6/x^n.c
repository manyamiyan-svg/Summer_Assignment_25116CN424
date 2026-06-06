#include <stdio.h>
int main() {
    int n, pow, res = 1, x;
    printf("Enter a natural number:\n");
    scanf("%d", &n);
    printf("Enter the power that %d is to be raised to:\n", n);
    scanf("%d", &pow);
    x = pow;
    while (x > 0) {
        res *= n;
        x--;
    }
    printf("%d raised to the power of %d is: %d\n", n, pow, res);
    return 0;
}
