#include<stdio.h>
int main() {
    int n1, n2,i,a = 0, j = 0, x = 0,arr1[50],arr2[50],arr[50];
    printf("Enter size of 1st array:\n");
    scanf("%d", &n1);
    if (n1 < 1) {
        printf("Invalid length.\n");
        return 0;
    }
    printf("Enter %d elements for 1st sorted array:\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    printf("Enter size of 2nd array:\n");
    scanf("%d", &n2);
    if (n2 < 1) {
        printf("Invalid length.\n");
        return 0;
    }
    printf("Enter %d elements for 2nd sorted array:\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    while (a < n1 && j < n2) {
        if (arr1[a] == arr2[j]) {
            arr[x++] = arr1[a];
            a++;
            j++;
        }
        else if (arr1[a] < arr2[j]) {
            a++;
        }
        else {
            j++;
}
    }
    printf("Common elements of array:\n");
    for (i = 0; i < x; i++) {
        printf("%d, ", arr[i]);
    }
    return 0;
}

You replied to Joru ka gulaam🤪💓💋
mujhe toh lagra hai ye ladna hi hota hai
