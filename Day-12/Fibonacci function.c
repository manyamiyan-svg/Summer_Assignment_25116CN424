#include <stdio.h>
int fib(int x) {
    if (x == 1) return 0;
    if (x == 2) return 1;
    int ft = 0, st = 1, tt = 1,i;
    for (i = 3; i <= x; i++) {
        tt = ft + st;
        ft = st;
        st = tt;
    }
    return tt;
}
int main() {
    int n;
    printf("Enter desired term of fibonacci series:\n");
    scanf("%d", &n);
    printf("%d term of fibonacci series is: %d\n", n, fib(n));
    return 0;
}
