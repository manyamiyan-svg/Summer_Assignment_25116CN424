#include<stdio.h>
#include <ctype.h>
int main() {
    char s[200];
    int i,j;
    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i + 1; s[j] != '\0'; j++) {
            if (tolower(s[i]) == tolower(s[j]) && isalpha(s[i])) {
                printf("%c is the first repeating character in given string.\n", tolower(s[i]));
                return 0;
            }
        }
    }
    printf("No repeating characters in string.\n");
    return 0;
}
