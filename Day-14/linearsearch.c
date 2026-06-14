#include <stdio.h>
int main() {
    int n,i,s,pos=-1,arr[50];
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
    printf("Enter search element:\n");
    scanf("%d", &s);
    for (i = 0; i < n; i++) {
        if (arr[i] == s) {
            pos = i;
            break;
        }
    }
    if (pos == -1)
        printf("%d was not found in array.\n", s);
    else
        printf("%d found in array at index %d.\n", s, pos);
    return 0;
}
