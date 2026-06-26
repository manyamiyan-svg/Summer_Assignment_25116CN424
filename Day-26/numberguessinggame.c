#include <stdio.h>
#include <ctype.h>
int main() {
    char ans;
    int f = 1, l = 1000, mid;
    printf("***WELCOME TO NUMBER GUESSING GAME***\n");
    printf("RULES-\n");
    printf("-> Think of a number between 1 and 1000.\n");
    printf("-> Answer prompted question with y for 'Yes' and n for 'No'.\n");
    printf("-> If the prompted number is equal to your number, answer 'n', since it is not greater.\n");
    printf("ENJOY!!\n\n");
    while (f <= l) {
        mid = (f + l) / 2;
        printf("Is your number greater than %d? (y/n): ", mid);
        scanf(" %c", &ans);
        ans = tolower(ans);
        if (ans == 'y') {
            f = mid + 1;
        }
        else if (ans == 'n') {
            l = mid;
        }
        else {
            printf("Enter a valid answer (y/n).\n");
        }
        if (f == l)
            break;
    }
    printf("\nWe think your number is: %d\n", f);
 return 0;
}
