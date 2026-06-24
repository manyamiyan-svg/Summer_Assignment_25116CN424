#include <stdio.h>
#include <ctype.h>
int main() {
    char s[200],ns[200];
    int i,j=0;
    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
    if (s[0] != '\0' && s[0] != '\n') {
        ns[j++] = s[0];
    }
    for (i = 1; s[i] != '\0'; i++) {
        if (s[i] == '\n') break; 
        if (s[i] != s[i - 1]) {
            ns[j++] = s[i];
        }
    }
    ns[j] = '\0';
    printf("String after removal of duplicate characters: %s\n", ns);
    return 0;
}
