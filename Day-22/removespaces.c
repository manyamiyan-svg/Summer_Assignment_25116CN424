#include<stdio.h>
int main() {
    char s[1000], ns[1000];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            ns[j] = s[i];
            j++;
        }
    }
    ns[j] = '\0';
    printf("String after removal of spaces is: %s", ns);
    return 0;
}
