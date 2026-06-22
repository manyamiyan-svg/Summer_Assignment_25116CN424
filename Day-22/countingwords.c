#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[1000];
  int i,   count = 0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    for ( i = 1; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i - 1] != ' ') {
            count++;
        }
    }
    int len = strlen(s);
    if (isalpha(s[len - 2])) { 
        count++;
    }
    printf("No. of words in string: %d\n", count);
    return 0;
}
