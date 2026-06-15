#include<stdio.h>
int main() {
    int n,i,x=0,r,arr[50],reva[50];
    printf("Enter size of array:\n");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid length. Cannot be negative or 0.\n");
        return 0;
    }
    printf("Enter %d elements for array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of times array has to be rotated left:\n");
    scanf("%d", &r);
    r = r % n;  
    for (i = r; i < n; i++) {
        reva[x++] = arr[i];
    }
    for (i = 0; i < r; i++) {
        reva[x++] = arr[i];
    }
    printf("Elements of rotated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d, ", reva[i]);
    }
    return 0;
}
