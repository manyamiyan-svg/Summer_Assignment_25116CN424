#include <stdio.h>
#include <limits.h>
int main() {
    int n,max = INT_MIN, smax = INT_MIN,i,arr[50];
    printf("Enter size of array:\n");
    scanf("%d", &n);
    if (n < 2) {
        printf("Insufficient elements to find second largest.\n");
        return 0;
    }
    printf("Enter %d elements for array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }
    if (smax == INT_MIN)
        printf("No second largest element (all elements may be equal).\n");
    else
        printf("Second largest element of array is: %d\n", smax);
    return 0;
}
