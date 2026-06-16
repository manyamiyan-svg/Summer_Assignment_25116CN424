#include <stdio.h>
int main() {
    int n,i,sum=0,expected,arr[50];
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
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    expected = (n + 1) * (n + 2) / 2;
    printf("Missing Element of array is: %d\n", expected - sum);
    return 0;
}
