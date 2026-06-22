#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[1000];
    int f, l,i;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
    f = 0;
    l = strlen(s) - 1;
    while (f < l) {
        if (s[f] == ' ') {
            f++;
            continue;
        }
        if (s[l] == ' ') {
            l--;
            continue;
        }
        if (s[f] != s[l]) {
            printf("String is not a palindrome.\n");
            return 0;
        }
        f++;
        l--;
    }
    printf("String is a palindrome.\n");
    return 0;
}


