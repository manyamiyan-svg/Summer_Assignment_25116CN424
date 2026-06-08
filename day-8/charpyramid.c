#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter no. of rows:\n");
    scanf("%d", &n);
    printf("Character pyramid with %d rows:\n", n);
    for (i = 1; i <= n; i++) {
        char x = 'A';
        for ( j = 1; j <= i; j++) {
            printf("%c ", x);
            x++;
        }
        printf("\n");
    }
    return 0;
}
