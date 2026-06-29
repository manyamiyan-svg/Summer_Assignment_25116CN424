#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[1000], rev[1000];
    int ch = 1;
    printf("******WELCOME TO STRING OPERATIONS******\n");
    printf("Choose operation to perform:\n");
    printf("1- Re-enter new string\n");
    printf("2- Find length\n");
    printf("3- Convert to Upper Case and Lower Case\n");
    printf("4- Count vowels and consonants\n");
    printf("5- Reverse String\n");
    printf("6- Check palindrome\n");
    printf("7- Exit\n");
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    while(ch != 7) {
        printf("\n*********************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();
        if(ch == 1) {
            printf("Enter string: ");
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0';
        }
        else if(ch == 2) {
            printf("Length of \"%s\" is: %lu\n", str, strlen(str));
        }
        else if(ch == 3) {
            char upper[1000], lower[1000];
            strcpy(upper, str);
            strcpy(lower, str);
            for(int i=0; upper[i]!='\0'; i++) {
                upper[i] = toupper(upper[i]);
                lower[i] = tolower(lower[i]);
            }
            printf("%s converted to Upper Case: %s\n", str, upper);
            printf("%s converted to Lower Case: %s\n", str, lower);
        }
        else if(ch == 4) {
            int vow_c = 0, con_c = 0;
            char c;
            for(int i=0; str[i]!='\0'; i++) {
                c = tolower(str[i]);
                if(!isalpha(c))
                    continue;
                if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                    vow_c++;
                else
                    con_c++;
            }
            printf("Vowel count: %d\n", vow_c);
            printf("Consonant count: %d\n", con_c);
        }
        else if(ch == 5) {
            int len = strlen(str);
            for(int i=0;i<len;i++)
                rev[i] = str[len-1-i];
            rev[len] = '\0';
            printf("Reversed string: %s\n", rev);
        }
        else if(ch == 6) {
            int f = 0;
            int l = strlen(str) - 1;
            int palindrome = 1;
            while(f < l) {
                if(str[f] == ' ') {
                    f++;
                    continue;
                }
                if(str[l] == ' ') {
                    l--;
                    continue;
                }
                if(str[f] != str[l]) {
                    palindrome = 0;
                    break;
                }
                f++;
                l--;
            }
            if(palindrome)
                printf("String is a palindrome.\n");
            else
                printf("String is not a palindrome.\n");
        }
        else if(ch != 7) {
            printf("Wrong choice. Please choose only from given options.\n");
        }
    }
    printf("EXITING.\n");
    printf("Thank you for using this system.\n");
    return 0;
}
