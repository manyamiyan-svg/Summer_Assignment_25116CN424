#include <stdio.h>
int main() {
    int n,sum = 0, arr[50];
    printf("Enter size of array:\n");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid length. Cannot be negative or 0.\n");
        return 0;
    }
    printf("Enter %d elements for array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of elements of array: %d\n", sum);
    printf("Average of elements of array: %.2f\n", (float)sum / n);
    return 0;
}
