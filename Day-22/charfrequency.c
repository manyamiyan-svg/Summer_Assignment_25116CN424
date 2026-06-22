#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[100], ch;
    i,int count = 0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
    printf("Enter character to find its frequency: ");
    scanf("%c", &ch);
    ch = tolower(ch);
    for ( i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch)
            count++;
    }
    printf("Frequency of %c in given string is: %d\n", ch, count);
    return 0;
}
