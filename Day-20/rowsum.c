#include <stdio.h>
int main() {
    int r1, c1,i,j,m1[50][50],sum[50];
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
    for (i = 0; i < r1; i++) {
        sum[i] = 0;
        for (j = 0; j < c1; j++) {
            sum[i] += m1[i][j];
        }
    }
    printf("Column sums are:\n");
    for (j = 0; j < c1; j++) {
        printf("%d ", sum[j]);
    }
    return 0;
}
