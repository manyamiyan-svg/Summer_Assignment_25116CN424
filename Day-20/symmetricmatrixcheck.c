#include <stdio.h>
int main() {
    int r1, c1,i,j,m1[50][50];
    printf("Enter no. of rows and columns of matrix:\n");
    scanf("%d %d", &r1, &c1);
    if (r1 < 1 || c1 < 1) {
        printf("Invalid length.\n");
        return 0;
    }
    if (r1 != c1) {
        printf("Non-square matrix. Cannot be symmetric.\n");
        return 0;
    }
    printf("Enter %d elements for matrix:\n", r1 * c1);
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &m1[i][j]);
    for (i = 0; i < r1; i++) {
        for (j = i+1; j < c1; j++) {
            if (m1[i][j] != m1[j][i]) {
                printf("Not a symmetric matrix.\n");
                return 0;
            }
        }
    }
    printf("It is a symmetric matrix.\n");
    return 0;
}
