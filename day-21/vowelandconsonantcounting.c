#include<stdio.h>
#include <ctype.h>
int main() {
    char s[200],ch;
    int i , vow_c = 0, con_c = 0;
    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        ch = tolower(s[i]);
        if (!isalpha(ch))
            continue;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vow_c++;
        else
            con_c++;
    }
    printf("Vowel count: %d\n", vow_c);
    printf("Consonant count: %d\n", con_c);
    return 0;
}
