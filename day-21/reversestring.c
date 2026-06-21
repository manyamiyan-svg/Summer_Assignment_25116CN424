#include<stdio.h>
#include <string.h>
int main() {
    char s[200],rev[200];
    int len,i;
    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);
    len = strlen(s);
    if (s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }
    for (i = 0; i < len; i++) {
        rev[i] = s[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string: %s\n", rev);
    return 0;
}
