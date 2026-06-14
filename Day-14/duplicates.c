#include <stdio.h>
int main() {
    int n,i,c=0,arr[50];
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
        if (arr[i] == arr[i + 1]) {
            c++;
            while (i < n - 1 && arr[i] == arr[i + 1]) {
                i++;
            }
        }
    }
    printf("Number of elements that have duplicates are: %d\n", c);
    return 0;
}
