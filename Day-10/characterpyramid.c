#include <stdio.h>
int main() {
    int n,i,j,k,l;
    printf("Enter no. of rows:\n");
    scanf("%d", &n);
    printf("Character pyramid with %d rows:\n", n);
    char c;
    for (i = 1; i <= n; i++) {
        c = 'A';
        for (j = n - 1; j >= i; j--) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%c ", c);
            c++;
        }
        c--;
        for (l = i - 1; l >= 1; l--) {
            c--;
            printf("%c ", c);
        }
        printf("\n");
    }
    return 0;
}
