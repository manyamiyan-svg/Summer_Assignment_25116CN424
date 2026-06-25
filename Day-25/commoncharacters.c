#include <stdio.h>
#include <ctype.h>
int main() {
    char s1[200], s2[200];
    int i,a1[26]={0},a2[26]={0);
    printf("Enter 1st string:\n");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter 2nd string:\n");
    fgets(s2, sizeof(s2), stdin);
    for (i = 0; s1[i] != '\0'; i++) {
        char ch = tolower(s1[i]);
        if (isalpha(ch))
            a1[ch - 'a']++;
    }

    for (i = 0; s2[i] != '\0'; i++) {
        char ch = tolower(s2[i]);
        if (isalpha(ch))
            a2[ch - 'a']++;
    }
    printf("List of common characters:\n");
    for (i = 0; i < 26; i++) {
        if (a1[i] > 0 && a2[i] > 0) {
            int common = (a1[i] < a2[i]) ? a1[i] : a2[i];
            printf("%c - %d\n", i + 'a', common);
        }
    }
    return 0;
}
