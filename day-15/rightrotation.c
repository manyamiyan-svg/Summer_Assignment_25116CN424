#include<stdio.h>
int main() {
    int n,i,r,x=0,arr[50],reva[50];
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
    printf("Enter number of times array has to be rotated right:\n");
    scanf("%d", &r);
    r = r % n;  
    for (i = n - r; i < n; i++) {
        reva[x++] = arr[i];
    }
    for (i = 0; i < n - r; i++) {
        reva[x++] = arr[i];
    }
    printf("Elements of rotated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d, ", reva[i]);
    }
    return 0;
}
Joru ka gulaam🤪💓💋 replied to themself
right rotation
