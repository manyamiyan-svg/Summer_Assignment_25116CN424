#include<stdio.h>
int main() {
    char s[200];
    int len = 0;
    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);
    while (s[len] != '\0') {
        len++;
    }
    if (len > 0 && s[len - 1] == '\n') {
        len--;
    }
    printf("Length of string: %d\n", len);
    return 0;
}
