#include<stdio.h>
#include <ctype.h>
int main() {
    char s[200];
    int i,mf=0,arr[26] = {0};
    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            char ch = tolower(s[i]);
            arr[ch - 'a']++;
        }
    }
    for (i = 1; i < 26; i++) {
        if (arr[i] > arr[mf]) {
            mf = i;
        }
    }
    printf("Most occurring character of string: %c\n", (char)(mf + 'a'));
    return 0;
}
