#include <stdio.h>
#include <string.h>
int main() {
    int n,i,j;
    char arr[n][100], temp[100];
    printf("Enter no. of names:\n");
    scanf("%d", &n);
    getchar(); 
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        fgets(arr[i], sizeof(arr[i]), stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0';
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strlen(arr[j]) > strlen(arr[j + 1])) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
    printf("Names sorted by length:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}















