#include <stdio.h>
int main() {
    int n,i,j,maxCount = 0, count,element, arr[50];
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
    element = arr[0];
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }
    printf("Element of array with most frequency is: %d\n", element);
    return 0;
}
