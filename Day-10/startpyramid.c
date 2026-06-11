#include <stdio.h>
int main() {
    int n,i,j,k;
    printf("Enter no. of rows:\n");
    scanf("%d", &n);
    printf("Star pyramid with %d rows:\n", n);
    for (int i = 1; i <= n; i++) {
        for (j = n - 1; j >= i; j--) {
            printf(" ");
        }
        for (k = 1; k <= i * 2 - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
