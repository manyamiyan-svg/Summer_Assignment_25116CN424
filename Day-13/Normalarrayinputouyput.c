#include <stdio.h>
int main() {
    int n,i,j, arr[50];
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
    printf("Elements of array:\n");
    for (j = 0; j < n; j++) {
        printf("%d, ", arr[i]);
    }
    return 0;
}
