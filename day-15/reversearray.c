#include<stdio.h>
int main() {
    int n,i,f = 0, l = n - 1, t,arr[50];
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
    while (f < l) {
        t = arr[f];
        arr[f] = arr[l];
        arr[l] = t;
        f++;
        l--;
    }
    printf("Elements of reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    return 0;
}
