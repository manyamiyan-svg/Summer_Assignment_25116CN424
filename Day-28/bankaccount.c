#include <stdio.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
#define delay(ms) Sleep(ms)
#else
#include <unistd.h>
#define delay(ms) usleep((ms) * 1000)
#endif
int main() {
    char account[50];
    char pw[50] = "1234";
    char epw[50], str1[50], str2[50];
    int pass = 1, i, ch;
    double bal = 0.0, cash;
    printf("******WELCOME TO BANK ACCOUNT SYSTEM******\n");
    printf("Please enter account number >>>>>>>>\n");
    fgets(account, sizeof(account), stdin);
    account[strcspn(account, "\n")] = '\0';
    printf("Searching");
    for(int j = 0; j < 3; j++) {
        delay(1000);
        printf(".");
        fflush(stdout);
    }
    delay(1500);
    printf("\nAccount found.\n\nEnter your password now for authentication:\n");
    delay(1500);
    while(pass == 1) {
        i = 3;
        while(i > 0) {
            printf("PASSWORD: ");
            fgets(epw, sizeof(epw), stdin);
            epw[strcspn(epw, "\n")] = '\0';
            if(strcmp(epw, pw) == 0) {
                pass = 0;
                break;
            }
            i--;
            printf("\nWrong password. %d attempts remaining.\n", i);
        }
        if(i == 0) {
            printf("\nYou have exhausted password attempts. Enter 1 to reset password, or any other number to exit- ");
            scanf("%d", &ch);
            getchar();
            while(ch == 1) {
                printf("\n****************************************\n");
                printf("Enter new password:\n");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Confirm password:\n");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                if(strcmp(str1, str2) == 0) {
                    strcpy(pw, str1);
                    printf("\nPassword change successful. Re-enter password for authentication.\n");
                    break;
                }
                else {
                    printf("\nPasswords must be same in both attempts. Enter 1 to retry or any other number to exit: ");
                    scanf("%d", &ch);
                    getchar();
                }
            }
            if(ch != 1) {
                printf("EXITING.\nPLEASE VISIT AGAIN.\n");
                return 0;
            }
        }
    }
    delay(2000);
    printf("Authentication successful.\n");
    printf("Enter a number to choose any option from below:\n");
    printf("1 for Checking balance.\n");
    printf("2 for Depositing money.\n");
    printf("3 for Withdrawing money.\n");
    printf("0 for exiting.\n");
    ch = 1;
    while(ch != 0) {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();
        if(ch == 1) {
            printf("Account balance: %.2lf\n", bal);
        }
        else if(ch == 2) {
            printf("Enter amount to deposit in account: ");
            scanf("%lf", &cash);
            getchar();
            printf("Processing transaction");
            for(int j = 0; j < 3; j++) {
                delay(1000);
                printf(".");
                fflush(stdout);
            }
            if(cash == 0) {
                printf("\nCannot deposit 0.\n");
                continue;
            }
            if(cash < 0) {
                printf("\nCannot deposit negative amount.\n");
                continue;
            }
            bal += cash;
            printf("\nTransaction successful. Sum of %.2lf credited to account.\n", cash);
        }
        else if(ch == 3) {
            printf("Enter amount to withdraw from account: ");
            scanf("%lf", &cash);
            getchar();
            printf("Processing transaction.\n");
            delay(2000);
            if(cash > bal) {
                printf("Insufficient balance.\n");
                continue;
            }
            printf("Account balance verified. Dispensing");
            for(int j = 0; j < 3; j++) {
                delay(2000);
                printf(".");
                fflush(stdout);
            }
            bal -= cash;
            printf("\nFinished dispensing. Collect sum of %.2lf from dispenser.\n", cash);
            printf("Sum of %.2lf has been debited from account.\n", cash);
        }
        else if(ch != 0) {
            printf("Please enter a valid choice.\n");
        }
    }
    printf("EXITING.\nPLEASE VISIT AGAIN.\n");
    return 0;
}
