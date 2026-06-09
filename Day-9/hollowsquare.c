#include <stdio.h>

int main() {
    int n,i,j;    
    char c;
    printf("Enter length of side of square:\n");
    scanf("%d", &n);
    printf("Hollow square with side length %d:\n", n);
    for (i = 1; i <= n; i++) {
        c = ' ';
        printf("* ");
        if (i == 1 || i == n)
            c = '*';
        for (j = 1; j <= n - 2; j++) {
            printf("%c ", c);
        }
        printf("* \n");
    }
    return 0;
}
