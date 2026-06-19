#include<stdio.h>
int main() {
    int r1, c1,d_sum = 0,m1[50][50];
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
    for (i = 0; i < r1 && i < c1; i++) {
        d_sum += m1[i][i];
    }
    printf("Sum of principal diagonal elements is: %d\n", d_sum);
    return 0;
}
