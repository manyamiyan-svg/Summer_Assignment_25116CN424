#include<stdio.h>
#include <ctype.h>
int main() {
    char s[200];
    int i,c,arr[26] = {0};
    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0' && s[i+1] != '\0'; i++) {
        c = 0;
        if (isalpha(s[i]) && arr[tolower(s[i]) - 'a'] == 0) {
            arr[tolower(s[i]) - 'a']++;
            for (j = i + 1; s[j] != '\0'; j++) {
                if (tolower(s[i]) == tolower(s[j])) {
                    c = 1;
                    break;
                }
            }
            if (c == 0) {
                printf("%c is the first non-repeating character in string.\n", tolower(s[i]));
                return 0;
            }
        }
    }
    printf("All characters appear at least twice.\n");
   return 0;
}
