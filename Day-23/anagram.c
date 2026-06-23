#include<stdio.h>
#include <ctype.h>
int main() {
    char s1[200], s2[200];
    int i,arr1[26]={0},arr2[26]={0};
    printf("Enter 1st string:\n");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter 2nd string:\n");
    fgets(s2, sizeof(s2), stdin);
    for (i = 0; s1[i] != '\0'; i++) {
        if (isalpha(s1[i])) {
            char ch = tolower(s1[i]);
            arr1[ch - 'a']++;
        }
    }
    for (i = 0; s2[i] != '\0'; i++) {
        if (isalpha(s2[i])) {
            char ch = tolower(s2[i]);
            arr2[ch - 'a']++;
        }
    }
    for (i = 0; i < 26; i++) {
        if (arr1[i] != arr2[i]) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
 }
    printf("Strings are anagram.\n");
    return 0;
}
