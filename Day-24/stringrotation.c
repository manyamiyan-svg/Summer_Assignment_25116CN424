#include <stdio.h>
#include <string.h>
int main() {
    char s1[200], s2[200], temp[400];
    printf("Enter 1st string:\n");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter 2nd string:\n");
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotated strings.\n");
        return 0;
    }
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp, s2) != NULL)
        printf("Rotated strings\n");
    else
        printf("Not rotated strings.\n");
    return 0;
}
