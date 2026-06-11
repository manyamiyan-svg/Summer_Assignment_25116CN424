#include <stdio.h>
int main() {
    int n,i,j,k,l;
    printf("Enter no. of rows:\n");
    scanf("%d", &n);
    printf("Number pyramid with %d rows:\n", n);
    for (i = 1; i <= n; i++) {
        for (j = n - 1; j >= i; j--) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        for (l = i - 1; l >= 1; l--) {
            printf("%d ", l);
        }
        printf("\n");
    }
    return 0;
}
