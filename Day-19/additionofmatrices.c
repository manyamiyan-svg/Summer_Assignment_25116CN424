#include<stdio.h>
int main() {
    int r1, c1, r2, c2,m1[50][50], m2[50][50], sum[50][50];
    printf("Enter no. of rows and columns of 1st matrix:\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter no. of rows and columns of 2nd matrix:\n");
    scanf("%d %d", &r2, &c2);
    if (r1 < 1 || c1 < 1 || r2 < 1 || c2 < 1) {
        printf("Invalid length. Cannot be negative or 0.\n");
        return 0;
    }
    if (r1 != r2 || c1 != c2) {
        printf("Sum of the two matrices is not possible due to unequal order.\n");
        return 0;
    }
    printf("Enter %d elements for 1st matrix:\n", r1 * c1);
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &m1[i][j]);
    printf("Enter %d elements for 2nd matrix:\n", r2 * c2);
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &m2[i][j]);
    for (i = 0; i < r1; i++)
for (j = 0; j < c1; j++)
   sum[i][j] = m1[i][j] + m2[i][j];
    printf("Sum of matrices is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}     
