#include <stdio.h>
int main() {
    int n,i,j,t_sum,arr[50];
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
    printf("Enter target sum:\n");
    scanf("%d", &t_sum);
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t_sum) {
                printf("Elements %d and %d at indices %d and %d add up to target sum %d.\n",
                       arr[i], arr[j], i, j, t_sum);
                return 0;
            }
        }
    }
    printf("No such pair found.\n");
    return 0;
}
