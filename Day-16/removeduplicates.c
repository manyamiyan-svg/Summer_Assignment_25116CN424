#include <stdio.h>
int main() {
    int n,i,x,l,arr[50],dup[50];
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
    x = 0, l = n - 1;
    dup[x] = arr[x];
    for (i = 1; i < n; i++) {
        if (arr[i] != dup[x]) {
            x++;
            dup[x] = arr[i];
        } 
        else {
            dup[l] = arr[i];
            l--;
        }
    }
    printf("Elements of array after removal of duplicates:\n");
    for (i = 0; i <= x; i++) {
        printf("%d, ", dup[i]);
    }
    return 0;
}
