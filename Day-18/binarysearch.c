#include <stdio.h>
int main() {
    int n,i,t,f,l,pos,arr[50];
    printf("Enter size of array:\n");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid length. Cannot be negative or 0.\n");
        return 0;
    }
    printf("Enter %d elements for array (sorted):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter search element:\n");
    scanf("%d", &t);
    f = 0, l = n - 1, mid, pos = -1;
    while (f <= l) {
        mid = (f + l) / 2;
        if (arr[mid] == t) {
            pos = mid;
            break;
        }
        else if (arr[mid] > t) {
            l = mid - 1;
        }
        else {
            f = mid + 1;
        }
    }
    if (pos == -1)
        printf("%d was not found in array.\n", t);
    else
        printf("%d found in array at index %d.\n", t, pos);
    return 0;
}

bartan dhone ko bol diya maa ne
ab ja rha apna submit krne
