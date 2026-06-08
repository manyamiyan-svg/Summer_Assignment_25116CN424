#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter no. of rows:\n");
    scanf("%d", &n);
    printf("Repeated number pyramid with %d rows:\n", n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
