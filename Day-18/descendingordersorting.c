#include<stdio.h>
int main() {
    int n,i,j,t,max,arr[50];
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
    for (i = 0; i < n - 1; i++) {
        max = i;
        for (j = i + 1; j < n; j++) {
            if (arr[max] < arr[j]) {
                max = j;
            }
        }
        t = arr[max;
        arr[max] = arr[i];
        arr[i] = t;
    }
    printf("Elements of sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    return 0;
}
