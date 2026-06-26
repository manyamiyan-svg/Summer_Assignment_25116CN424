#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main() {
    printf("Please insert card>>>>>>>>\n");
    printf("Reading");
    for(int j = 0; j < 3; j++) {
        sleep(1);
        printf(".");
        fflush(stdout);
    }
    sleep(1);
    printf("\nYou can retrieve your card now.\n");
    printf("\nEnter your pin now for authentication:\n");
    char pw[20] = "1234";
    char epw[20];
    int pass = 1, i, ch;
    while(pass == 1) {
        i = 3;
        while(i > 0) {
            printf("PIN: ");
            fgets(epw, sizeof(epw), stdin);
            epw[strcspn(epw, "\n")] = '\0';
            if(strcmp(epw, pw) == 0) {
                pass = 0;
                break;
            }
            i--;
            printf("\nWrong pin. %d attempts remaining.\n", i);
        }
if(i == 0) {
            printf("\nYou have exhausted pin attempts.\n");
            printf("Enter 1 to reset pin, or any other number to exit- ");
            scanf("%d", &ch);
            getchar();
            while(ch == 1) {
                char str1[20], str2[20];
                printf("\n**************\n");
                printf("Enter new pin:\n");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Confirm pin:\n");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                if(strcmp(str1, str2) == 0) {
                    strcpy(pw, str1);
                    printf("\nPin change successful.\n");
                    printf("Re-enter pin for authentication.\n");
                    break;
                }
                else {
                    printf("\nPin must be same in both attempts.\n");
                    printf("Enter 1 to retry or any other number to exit: ");
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
    sleep(2);
    printf("Authentication successful.\n");
    printf("Enter a number to choose any option from below:\n");
    printf("1 for Checking balance.\n");
    printf("2 for Depositing money.\n");
    printf("3 for Withdrawing money.\n");
    printf("0 for exiting.\n");
    double bal = 0, cash;
    ch = 1;
    while(ch != 0) {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        if(ch == 1) {
            printf("Account balance: %.2lf\n", bal);
        }
        else if(ch == 2) {
            printf("Enter amount to deposit:\n");
            scanf("%lf", &cash);
            printf("Verifying");
            for(int j = 0; j < 3; j++) {
                sleep(1);
                printf(".");
                fflush(stdout);
            }
            if(cash <= 0) {
                printf("\nInvalid deposit amount.\n");
                continue;
 bal += cash;
            printf("\nAmount verified.\n");
            printf("Sum of %.2lf credited to account.\n", cash);
        }
        else if(ch == 3) {
            printf("Enter amount to withdraw:\n");
            scanf("%lf", &cash);
            printf("Verifying account balance.\n");
            sleep(2);
            if(cash > bal) {
                printf("Insufficient balance.\n");
                continue;
            }
            printf("Account balance verified. Dispensing");
            for(int j = 0; j < 3; j++) {
                sleep(2);
                printf(".");
                fflush(stdout);
            }
            bal -= cash;
            printf("\nFinished dispensing.\n");
            printf("Collect %.2lf from dispenser.\n", cash);
            printf("Sum of %.2lf has been debited from account.\n", cash);
        }
        else if(ch != 0) {
            printf("Please enter valid choice.\n");
        }
    }
    printf("EXITING.\nPLEASE VISIT AGAIN.\n");
    return 0;
    }
