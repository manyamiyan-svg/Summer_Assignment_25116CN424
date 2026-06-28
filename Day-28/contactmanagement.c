#include <stdio.h>
#include <string.h>
int main() {
    char name[100][100];
    long long pno[100];
    printf("******WELCOME TO CONTACT MANAGEMENT SYSTEM******\n");
    printf("This system currently only handles 100 contacts.(Upgrading soon...)\n");
    printf("You can navigate the system, using numbers and perform given options:\n");
    printf("1- Display contact list.\n");
    printf("2- Add a contact.\n");
    printf("3- Remove a contact.\n");
    printf("4- Update contact information.\n");
    printf("5- Search for a contact.\n");
    printf("6- Exit.\n");
    int ch = 1, count = 0;
    while(ch != 6) {
        printf("\n*********************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();
        if(ch == 1) {
            if(count == 0) {
                printf("No contact in records yet, please add contact info first.\n");
                continue;
            }
            printf("Displaying contact information...\n");
            printf("%-22s %-20s\n", "NAME", "PHONE No.");
            for(int i = 0; i < count; i++)
                printf("%-22s %-20lld\n", name[i], pno[i]);
        }
        else if(ch == 2) {
            if(count == 100) {
                printf("System record full!!. Delete some records to add new contact.\n");
                continue;
            }
            printf("PHONE No.: ");
            scanf("%lld", &pno[count]);
            getchar();
            long long temp = pno[count];
            int digits = 0;
            while(temp != 0) {
                digits++;
                temp /= 10;
            }
            if(digits != 10) {
                printf("Invalid phone number.\n");
                continue;
            }
            int pos = -1;
            for(int i = 0; i < count; i++) {
                if(pno[i] == pno[count]) {
                    pos = i;
                    break;
                }
            }
            if(pos != -1) {
                printf("Contact with Phone No. %lld already exists in records.\n", pno[count]);
                continue;
            }
            printf("Let's add the contact.\n");
            printf("NAME: ");
            fgets(name[count], sizeof(name[count]), stdin);
            name[count][strcspn(name[count], "\n")] = '\0';
            count++;
            printf("New contact added. No. of contacts in record is: %d\n", count);
        }
        else if(ch == 3) {
            if(count == 0) {
                printf("No contacts in record for deletion!!\n");
                continue;
            }
            long long epno;
            printf("Enter PHONE No. of contact, whose records you wish to delete: ");
            scanf("%lld", &epno);
            getchar();
            int pos = -1;
            for(int i = 0; i < count; i++) {
                if(pno[i] == epno) {
                    pos = i;
                    break;
                }
            }
            if(pos == -1) {
                printf("Contact with Phone No. %lld does not exist in records.\n", epno);
                continue;
            }
            printf("Contact found, verify details:\n");
            printf("%-22s %-20s\n", "NAME", "PHONE No.");
            printf("%-22s %-20lld\n", name[pos], pno[pos]);
            int ech;
            printf("Enter 1 to proceed with deletion: ");
            scanf("%d", &ech);
            getchar();
            if(ech != 1) {
                printf("Canceling deletion.\n");
                continue;
            }
            for(int i = pos; i < count - 1; i++) {
                strcpy(name[i], name[i + 1]);
                pno[i] = pno[i + 1];
            }
            count--;
            printf("Contact record deleted. No. of contacts in record is: %d\n", count);
        }
        else if(ch == 4) {
            if(count == 0) {
                printf("No contacts in record for updation!!\n");
                continue;
            }
            long long epno;
            printf("Enter PHONE No. of contact, whose records you wish to update: ");
            scanf("%lld", &epno);
            getchar();
            int pos = -1;
            for(int i = 0; i < count; i++) {
                if(pno[i] == epno) {
                    pos = i;
                    break;
                }
            }
            if(pos == -1) {
                printf("Contact with PHONE No. %lld does not exist in records.\n", epno);
                continue;
            }
            printf("Contact found, verify details:\n");
            printf("%-22s %-20s\n", "NAME", "PHONE No.");
            printf("%-22s %-20lld\n", name[pos], pno[pos]);
            int ech;
            printf("Enter 1 to proceed with updation: ");
            scanf("%d", &ech);
            getchar();
            if(ech != 1) {
                printf("Canceling updation.\n");
                continue;
            }
            printf("Enter new information:\n");
            printf("NAME: ");
            fgets(name[pos], sizeof(name[pos]), stdin);
            name[pos][strcspn(name[pos], "\n")] = '\0';
            printf("PHONE No.: ");
            scanf("%lld", &pno[pos]);
            getchar();
            printf("Updation complete.\n");
        }
        else if(ch == 5) {
            if(count == 0) {
                printf("No contacts in record for searching!!\n");
                continue;
            }
            long long epno;
            printf("Enter PHONE No. of contact, whom you wish to search: ");
            scanf("%lld", &epno);
            getchar();
            int pos = -1;
            for(int i = 0; i < count; i++) {
                if(pno[i] == epno) {
                    pos = i;
                    break;
                }
            }
            if(pos == -1) {
                printf("Contact with PHONE No. %lld does not exist in records.\n", epno);
                continue;
            }
            printf("Contact found, details:\n");
            printf("%-22s %-20s\n", "NAME", "PHONE No.");
            printf("%-22s %-20lld\n", name[pos], pno[pos]);
        }
        else if(ch != 6) {
            printf("Please enter valid choice.\n");
        }
    }
    printf("EXITING.\n");
    printf("Thank you for using this system.\n");
    return 0;
}
