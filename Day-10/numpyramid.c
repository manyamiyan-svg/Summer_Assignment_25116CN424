#include <stdio.h>
int main() {
    int n,i,j,k;
    printf("Enter no. of rows:\n");
    scanf("%d", &n);
    printf("Reverse pyramid with %d rows:\n", n);
    for (i = 1; i <= n; i++) {
        for (j = 2; j <= i; j++) {
            printf(" ");
        }
        for (k = 1; k <= (n - i) * 2 + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
