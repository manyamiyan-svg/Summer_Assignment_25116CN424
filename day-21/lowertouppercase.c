#include<stdio.h>
int main() {
    char s[200];
    int i;
    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }
    printf("String with all lowercase as uppercase: %s", s);
    return 0;
}
