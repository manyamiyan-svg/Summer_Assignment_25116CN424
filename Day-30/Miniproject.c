#include <stdio.h>
#include <string.h>
void display(char name[][100], int id[], float per[], char div[][100], int count){
    printf("Displaying student information...\n");
    printf("%-22s %-10s %-15s %-15s\n","NAME","ID No.","DIVISION","PERCENTAGE(ANNUAL)");
    for(int i = 0; i < count; i++)
        printf("%-22s %-10d %-15s %-15f\n", name[i], id[i], div[i], per[i]);
}
int add(char name[][100], int id[], float per[], char div[][100], int count){
    int pos = -1;
    printf("ID No.: ");
    scanf("%d", &id[count]);
    getchar();
    for(int i = 0; i < count; i++){
        if(id[i] == id[count]){
            pos = i;
            break;
        }
    }
    if(pos != -1){
        printf("Student with ID No. %d already exists in records.\n", id[count]);
        return count;
    }
    printf("Let's add a student.\n");
    printf("NAME: ");
    fgets(name[count], 100, stdin);
    name[count][strcspn(name[count], "\n")] = '\0';
    printf("DIVISION: ");
    fgets(div[count], 100, stdin);
    div[count][strcspn(div[count], "\n")] = '\0';
    printf("PERCENTAGE(ANNUAL): ");
    scanf("%f", &per[count]);
    getchar();
    count++;
    printf("New student added. No. of students in record is: %d\n", count);
    return count;
}
int deleteStudent(char name[][100], int id[], float per[], char div[][100], int count){
    int eid, pos = -1, ech;
    printf("Enter ID No. of student, whose records you wish to delete: ");
    scanf("%d", &eid);
    getchar();
    for(int i = 0; i < count; i++){
        if(id[i] == eid){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        printf("Student with ID No. %d does not exist in records.\n", eid);
        return count;
    }
    printf("Student found, verify details:\n");
    printf("%-22s %-10s %-15s %-15s\n","NAME","ID No.","DIVISION","PERCENTAGE(ANNUAL)");
    printf("%-22s %-10d %-15s %-15f\n", name[pos], id[pos], div[pos], per[pos]);
    printf("Enter 1 to proceed with deletion: ");
    scanf("%d", &ech);
    getchar();
    if(ech != 1){
        printf("Canceling deletion.\n");
        return count;
    }
    for(int i = pos; i < count - 1; i++){
        strcpy(name[i], name[i + 1]);
        id[i] = id[i + 1];
        strcpy(div[i], div[i + 1]);
        per[i] = per[i + 1];
    }
    count--;
    printf("Student record deleted. No. of students in record is: %d\n", count);
    return count;
}
void update(char name[][100], int id[], float per[], char div[][100], int count){
    int eid, pos = -1, ech;
    printf("Enter ID No. of student, whose records you wish to update: ");
    scanf("%d", &eid);
    getchar();
    for(int i = 0; i < count; i++){
        if(id[i] == eid){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        printf("Student with ID No. %d does not exist in records.\n", eid);
        return;
    }
    printf("Student found, verify details:\n");
    printf("%-22s %-10s %-15s %-15s\n","NAME","ID No.","DIVISION","PERCENTAGE(ANNUAL)");
    printf("%-22s %-10d %-15s %-15f\n", name[pos], id[pos], div[pos], per[pos]);
    printf("Enter 1 to proceed with updation: ");
    scanf("%d", &ech);
    getchar();
    if(ech != 1){
        printf("Canceling updation.\n");
        return;
    }
    printf("Enter new information:\n");
    printf("NAME: ");
    fgets(name[pos], 100, stdin);
    name[pos][strcspn(name[pos], "\n")] = '\0';
    printf("ID No.: ");
    scanf("%d", &id[pos]);
    getchar();
    printf("DIVISION: ");
    fgets(div[pos], 100, stdin);
    div[pos][strcspn(div[pos], "\n")] = '\0';
    printf("PERCENTAGE(ANNUAL): ");
    scanf("%f", &per[pos]);
    getchar();
    printf("Updation complete.\n");
}
void search(char name[][100], int id[], float per[], char div[][100], int count){
    int eid, pos = -1;
    printf("Enter ID No. of student, whom you wish to search: ");
    scanf("%d", &eid);
    getchar();
    for(int i = 0; i < count; i++){
        if(id[i] == eid){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        printf("Student with ID No. %d does not exist in records.\n", eid);
        return;
    }
    printf("Student found, details:\n");
    printf("%-22s %-10s %-15s %-15s\n","NAME","ID No.","DIVISION","PERCENTAGE(ANNUAL)");
    printf("%-22s %-10d %-15s %-15f\n", name[pos], id[pos], div[pos], per[pos]);
}
int main() {
    char name[100][100];
    int id[100];
    double per[100];
    char div[100][50];
    int ch = 1, count = 0;
    printf("******WELCOME TO STUDENT RECORDS******\n");
    printf("This system currently only handles 100 students.(Upgrading soon...)\n");
    printf("So, you can navigate the system, using numbers and perform given options:\n");
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
            display(name, id, per, div, count);
        }
        else if (ch == 2) {
            if (count == 100) {
                printf("System record full!!. Delete some records to add new student.\n");
                continue;
            }
            count = add(name, id, per, div, count);
        }
        else if (ch == 3) {
            if (count == 0) {
                printf("No students in record for deletion!!\n");
                continue;
            }
            count = delete(name, id, per, div, count);
        }
        else if (ch == 4) {
            if (count == 0) {
                printf("No students in record for updation!!\n");
                continue;
            }
            update(name, id, per, div, count);
        }
        else if (ch == 5) {
            if (count == 0) {
                printf("No students in record for searching!!\n");
                continue;
            }
            search(name, id, per, div, count);
        }
        else if (ch != 6) {
            printf("Please enter valid choice.\n");
        }
    }
    printf("EXITING.\n");
    printf("Thank you for using this system.\n");
    return 0;
}
