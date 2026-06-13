#include <stdio.h>
int main() {
    int n,arr[50], ec = 0, oc = 0,i,j;
    printf("Enter size of array:\n");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid length. Cannot be negative or 0.\n");
        return 0;
    }
    printf("Enter %d elements for array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (j = 0; j < n; j++) {
        if (arr[i] % 2 == 0)
            ec++;
        else
            oc++;
    }
    printf("Even element count of array: %d\n", ec);
    printf("Odd element count of array: %d\n", oc);
    return 0;
}
