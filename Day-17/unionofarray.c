#include<stdio.h>
int search(int a[], int t, int x) {
int i;
    for (i = 0; i < x; i++)
        if (a[i] == t)
            return 0;
    return 1;
}
int main() {
    int n1, n2,i,a = 0, b = 0, x = 0,arr1[50],arr2[50],arr[50];
    printf("Enter size of 1st array:\n");
    scanf("%d", &n1);
    if (n1 < 1) {
        printf("Invalid length.\n");
        return 0;
    }
    printf("Enter %d elements for 1st sorted array:\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    printf("Enter size of 2nd array:\n");
    scanf("%d", &n2);
    if (n2 < 1) {
        printf("Invalid length.\n");
        return 0;
    }
    printf("Enter %d elements for 2nd sorted array:\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    while (a < n1 && b < n2) {
        if (search(arr, arr1[a], x))
            arr[x++] = arr1[a];
if (search(arr, arr2[b], x))
            arr[x++] = arr2[b];
        a++;
        b++;
    }
    while (a < n1) {
        if (search(arr, arr1[a], x))
            arr[x++] = arr1[a];
        a++;
    }
    while (b < n2) {
        if (search(arr, arr2[b], x))
            arr[x++] = arr2[b];
        b++;
    }
    printf("Elements of union array:\n");
    for (i = 0; i < x; i++)
        printf("%d, ", arr[i]);
    return 0;
}
