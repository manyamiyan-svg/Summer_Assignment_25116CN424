#include<stdio.h>
int main() {
    int r1, c1,m1[50][50],t[50][50];
    printf("Enter no. of rows and columns of matrix:\n");
    scanf("%d %d", &r1, &c1);
    if (r1 < 1 || c1 < 1) {
        printf("Invalid length. Cannot be negative or 0.\n");
        return 0;
    }
    printf("Enter %d elements for matrix:\n", r1 * c1);
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &m1[i][j]);
    for (i = 0; i < c1; i++)
        for (j = 0; j < r1; j++)
            t[i][j] = m1[j][i];
    printf("Transpose of the matrix is:\n");
    for (i = 0; i < c1; i++) {
        for (j = 0; j < r1; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
    return 0;
}

