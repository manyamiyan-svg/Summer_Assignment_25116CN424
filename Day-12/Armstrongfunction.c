#include <stdio.h>
#include <math.h>
int armstrong(int x) {
    int n = x, arm = 0, l = 0;
    int temp = x;
    while (temp > 0) {
        l++;
        temp /= 10;
    }
    while (n > 0) {
        int digit = n % 10;
        arm += (int)pow(digit, l);
        n /= 10;
    }
    return x == arm;
}
int main() {
    int n;
    printf("Enter a natural number:\n");
    scanf("%d", &n);
    if (armstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}
