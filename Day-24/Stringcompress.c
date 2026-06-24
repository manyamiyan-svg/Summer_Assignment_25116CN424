#include <stdio.h>
#include <ctype.h>
int main() {
    char s[200];
    int i,count=1;
    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
    printf("Compressed string: ");
    for (i = 1; s[i] != '\0'; i++) {
        if (s[i] != s[i - 1]) {
            printf("%c%d", s[i - 1], count);
            count = 1;
        } else {
            count++;
        }
    }
    if (i > 0) {
        printf("%c%d", s[i - 1], count);
    }
    printf("\n");
    return 0;
}
