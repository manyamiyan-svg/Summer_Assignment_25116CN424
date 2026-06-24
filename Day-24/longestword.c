#include <stdio.h>
#include <ctype.h>
int main() {
    char s[200], max[200] = "", curr[200] = "" ;
    int i,j,max_len = 0, curr_len = 0;
    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' || s[i] == '\n') {
            if (curr_len > max_len) {
                max_len = curr_len;
                for (int j = 0; j < curr_len; j++) {
                    max[j] = curr[j];
                }
                max[curr_len] = '\0';
            }
            curr_len = 0;
        } else {
            curr[curr_len++] = tolower(s[i]);
        }
    }
    if (curr_len > max_len) {
        for (j = 0; j < curr_len; j++) {
            max[j] = curr[j];
        }
        max[curr_len] = '\0';
    }
    printf("Longest word in string: %s\n", max);
    return 0;
}
