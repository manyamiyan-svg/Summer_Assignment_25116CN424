#include <stdio.h>
int main() {
    int n,i,s,freq=0,arr[50];
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
    printf("Enter element to find frequency:\n");
    scanf("%d", &s);
    for (i = 0; i < n; i++) {
        if (arr[i] == s) {
            freq++;
        }
    }
    printf("Frequency of %d in array is: %d\n", s, freq);
    return 0;
}
