#include<stdio.h>
int main() {
    int n1, n2,i,n,a = 0, b = 0, c = 0,arr1[50],arr2[50],arr[50];
    printf("Enter size of 1st array:\n");
    scanf("%d", &n1);
    if (n1 < 1) {
        printf("Invalid length. Cannot be negative or 0.\n");
        return 0;
    }
    printf("Enter %d elements for 1st sorted array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of 2nd array:\n");
    scanf("%d", &n2);
    if (n2 < 1) {
        printf("Invalid length. Cannot be negative or 0.\n");
        return 0;
    }
    printf("Enter %d elements for 2nd sorted array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    n = n1 + n2;
    while (a < n1 && b < n2) {
        if (arr1[a] > arr2[b]) {
            arr[c++] = arr2[b++];
        } else {
            arr[c++] = arr1[a++];
          }
    }
while (a < n1) {
        arr[c++] = arr1[a++];
    }
    while (b < n2) {
        arr[c++] = arr2[b++];
    }
    printf("Elements of merged array:\n");
    for (i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    return 0;
}
