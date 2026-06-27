#include <stdio.h>
#include <string.h>
int main() {
    char name[100][50];
    int id[100];
    float per[100];
    char div[100][20];
    int ch = 1, count = 0;
    printf("******WELCOME TO STUDENT RECORDS******\n");
    printf("This system currently only handles 100 students.(Upgrading soon...)\n");
    printf("So, you can navigate the system using numbers and perform given options:\n");
    printf("1- Display student list.\n");
    printf("2- Add a student.\n");
    printf("3- Remove a student.\n");
    printf("4- Update student information.\n");
    printf("5- Search for a student.\n");
    printf("6- Exit.\n");
    while (ch != 6) {
        printf("\n*********************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();
        if (ch == 1) {
            if (count == 0) {
                printf("No students in records yet, please add student info first.\n");
                continue;
            }
            printf("Displaying student information...\n");
            printf("%-22s %-10s %-15s %-15s\n",
                   "NAME", "ID No.", "DIVISION", "PERCENTAGE");
            for (int i = 0; i < count; i++) {
                printf("%-22s %-10d %-15s %-15.2f\n",
                       name[i], id[i], div[i], per[i]);
            }
        }
        else if (ch == 2) {
            if (count == 100) {
                printf("System record full!!. Delete some records to add new student.\n");
                continue;
            }
            printf("ID No.: ");
            scanf("%d", &id[count]);
            getchar();
            int pos = -1;
            for (int i = 0; i < count; i++) {
                if (id[i] == id[count]) {
                    pos = i;
                    break;
                }
            }
            if (pos != -1) {
                printf("Student with ID No. %d already exists in records.\n", id[count]);
                continue;
            }
            printf("Let's add a student.\n");
            printf("NAME: ");
            fgets(name[count], sizeof(name[count]), stdin);
            name[count][strcspn(name[count], "\n")] = '\0';
            printf("DIVISION: ");
            fgets(div[count], sizeof(div[count]), stdin);
            div[count][strcspn(div[count], "\n")] = '\0';
            printf("PERCENTAGE(ANNUAL): ");
            scanf("%f", &per[count]);
            getchar();
            count++;
            printf("New student added. No. of students in record is: %d\n", count);
        }
        else if (ch == 3) {
            if (count == 0) {
                printf("No students in record for deletion!!\n");
                continue;
            }
            int eid;
            printf("Enter ID No. of student whose records you wish to delete: ");
            scanf("%d", &eid);
            getchar();
            int pos = -1;
            for (int i = 0; i < count; i++) {
                if (id[i] == eid) {
                    pos = i;
                    break;
                }
            }
            if (pos == -1) {
                printf("Student with ID No. %d does not exist in records.\n", eid);
                continue;
            }
            printf("Student found, verify details:\n");
            printf("%-22s %-10s %-15s %-15s\n",
                   "NAME", "ID No.", "DIVISION", "PERCENTAGE");
            printf("%-22s %-10d %-15s %-15.2f\n",
                   name[pos], id[pos], div[pos], per[pos]);
            int ech;
            printf("Enter 1 to proceed with deletion: ");
            scanf("%d", &ech);
            getchar();
            if (ech != 1) {
                printf("Cancelling deletion.\n");
                continue;
            }
            for (int i = pos; i < count - 1; i++) {
                strcpy(name[i], name[i + 1]);
                strcpy(div[i], div[i + 1]);
                id[i] = id[i + 1];
                per[i] = per[i + 1];
            }
            count--;
            printf("Student record deleted. No. of students in record is: %d\n", count);
        }
        else if (ch == 4) {
            if (count == 0) {
                printf("No students in record for updation!!\n");
                continue;
            }
            int eid;
            printf("Enter ID No. of student, whose records you wish to update: ");
            scanf("%d", &eid);
            getchar();
            int pos = -1;
            for (int i = 0; i < count; i++) {
                if (id[i] == eid) {
                    pos = i;
                    break;
                }
            }
            if (pos == -1) {
                printf("Student with ID No. %d does not exist in records.\n", eid);
                continue;
            }
            printf("Student found, verify details:\n");
            printf("%-22s %-10s %-15s %-15s\n",
                   "NAME", "ID No.", "DIVISION", "PERCENTAGE");
            printf("%-22s %-10d %-15s %-15.2f\n",
                   name[pos], id[pos], div[pos], per[pos]);
            int ech;
            printf("Enter 1 to proceed with updation: ");
            scanf("%d", &ech);
            getchar();
            if (ech != 1) {
                printf("Cancelling updation.\n");
                continue;
            }
            printf("Enter new information:\n");
            printf("NAME: ");
            fgets(name[pos], sizeof(name[pos]), stdin);
            name[pos][strcspn(name[pos], "\n")] = '\0';
            printf("ID No.: ");
            scanf("%d", &id[pos]);
            getchar();
            printf("DIVISION: ");
            fgets(div[pos], sizeof(div[pos]), stdin);
            div[pos][strcspn(div[pos], "\n")] = '\0';
            printf("PERCENTAGE(ANNUAL): ");
            scanf("%f", &per[pos]);
            getchar();
            printf("Updation complete.\n");
        }
        else if (ch == 5) {
            if (count == 0) {
                printf("No students in record for searching!!\n");
                continue;
            }
            int eid;
            printf("Enter ID No. of student, whom you wish to search: ");
            scanf("%d", &eid);
            getchar();
            int pos = -1;
            for (int i = 0; i < count; i++) {
                if (id[i] == eid) {
                    pos = i;
                    break;
                }
            }
            if (pos == -1) {
                printf("Student with ID No. %d does not exist in records.\n", eid);
                continue;
            }
            printf("Student found, details:\n");
            printf("%-22s %-10s %-15s %-15s\n",
                   "NAME", "ID No.", "DIVISION", "PERCENTAGE");
            printf("%-22s %-10d %-15s %-15.2f\n",
                   name[pos], id[pos], div[pos], per[pos]);
        }
        else if (ch != 6) {
            printf("Please enter a valid choice.\n");
        }
    }
    printf("EXITING.\n");
    printf("Thank you for using this system.\n");
    return 0;
}
