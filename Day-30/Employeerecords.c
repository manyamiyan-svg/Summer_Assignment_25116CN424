#include <stdio.h>
#include <string.h>
int main() {
    char name[100][100];
    int id[100];
    double sal[100];
    char des[100][100];
    printf("******WELCOME TO EMPLOYEE RECORDS******\n");
    printf("This system currently only handles 100 employees.(Upgrading soon...)\n");
    printf("So, you can navigate the system, using numbers and perform given options:\n");
    printf("1- Display employee list.\n");
    printf("2- Add a employee.\n");
    printf("3- Remove a employee.\n");
    printf("4- Update employee information.\n");
    printf("5- Search for a employee.\n");
    printf("6- Exit.\n");
    int ch = 1, count = 0;
    while(ch != 6){
        printf("\n*********************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        if(ch == 1){
            if(count == 0){
                printf("No employee in records yet, please add employee info first.\n");
                continue;
            }
            printf("Displaying employee information...\n");
            printf("%-22s %-10s %-15s %-15s\n",
                   "NAME","ID No.","DESIGNATION","SALARY(ANNUAL)");
            for(int i = 0; i < count; i++)
                printf("%-22s %-10d %-15s %-15lf\n",
                       name[i], id[i], des[i], sal[i]);
        }
        else if(ch == 2){
            if(count == 100){
                printf("System record full!!. Delete some records to add new employee.\n");
                continue;
            }
            printf("ID No.: ");
            scanf("%d", &id[count]);
            int pos = -1;
            for(int i = 0; i < count; i++){
                if(id[i] == id[count]){
                    pos = i;
                    break;
                }
            }
            if(pos != -1){
                printf("Employee with ID No. %d already exists in records.\n", id[count]);
                continue;
            }
            getchar();
            printf("Let's add a employee.\n");
            printf("NAME: ");
            fgets(name[count], sizeof(name[count]), stdin);
            name[count][strcspn(name[count], "\n")] = '\0';
            printf("DESIGNATION: ");
            fgets(des[count], sizeof(des[count]), stdin);
            des[count][strcspn(des[count], "\n")] = '\0';
            printf("SALARY(ANNUAL): ");
            scanf("%lf", &sal[count]);
            count++;
            printf("New employee added. No. of employees in record is: %d\n", count);
        }
        else if(ch == 3){
            if(count == 0){
                printf("No employees in record for deletion!!\n");
                continue;
            }
            int eid;
            printf("Enter ID No. of employee, whose records you wish to delete: ");
            scanf("%d", &eid);
            int pos = -1;
            for(int i = 0; i < count; i++){
                if(id[i] == eid){
                    pos = i;
                    break;
                }
            }
            if(pos == -1){
                printf("Employee with ID No. %d does not exist in records.\n", eid);
                continue;
            }
            printf("Employee found, verify details:\n");
            printf("%-22s %-10s %-15s %-15s\n",
                   "NAME","ID No.","DESIGNATION","SALARY(ANNUAL)");
            printf("%-22s %-10d %-15s %-15lf\n",
                   name[pos], id[pos], des[pos], sal[pos]);
            int ech;
            printf("Enter 1 to proceed with deletion: ");
            scanf("%d", &ech);
            if(ech != 1){
                printf("Canceling deletion.\n");
                continue;
            }
            for(int i = pos; i < count - 1; i++){
                strcpy(name[i], name[i + 1]);
                id[i] = id[i + 1];
                strcpy(des[i], des[i + 1]);
                sal[i] = sal[i + 1];
            }
            count--;
            printf("Employee record deleted. No. of employees in record is: %d\n", count);
        }
        else if(ch == 4){
            if(count == 0){
                printf("No employees in record for updation!!\n");
                continue;
            }
            int eid;
            printf("Enter ID No. of employee, whose records you wish to update: ");
            scanf("%d", &eid);
            int pos = -1;
            for(int i = 0; i < count; i++){
                if(id[i] == eid){
                    pos = i;
                    break;
                }
            }
            if(pos == -1){
                printf("Employee with ID No. %d does not exist in records.\n", eid);
                continue;
            }
            printf("Employee found, verify details:\n");
            printf("%-22s %-10s %-15s %-15s\n",
                   "NAME", "ID No.", "DESIGNATION", "SALARY(ANNUAL)");
            printf("%-22s %-10d %-15s %-15lf\n",
                   name[pos], id[pos], des[pos], sal[pos]);
            int ech;
            printf("Enter 1 to proceed with updation: ");
            scanf("%d", &ech);
            if(ech != 1){
                printf("Canceling updation.\n");
                continue;
            }
            getchar();
            printf("Enter new information:\n");
            printf("NAME: ");
            fgets(name[pos], sizeof(name[pos]), stdin);
            name[pos][strcspn(name[pos], "\n")] = '\0';
            printf("ID No.: ");
            scanf("%d", &id[pos]);
            getchar();
            printf("DESIGNATION: ");
            fgets(des[pos], sizeof(des[pos]), stdin);
            des[pos][strcspn(des[pos], "\n")] = '\0';
            printf("SALARY(ANNUAL): ");
            scanf("%lf", &sal[pos]);
            printf("Updation complete.\n");
        }
        else if(ch == 5){
            if(count == 0){
                printf("No employees in record for searching!!\n");
                continue;
            }
            int eid;
            printf("Enter ID No. of employee, whom you wish to search: ");
            scanf("%d", &eid);
            int pos = -1;
            for(int i = 0; i < count; i++){
                if(id[i] == eid){
                    pos = i;
                    break;
                }
            }
            if(pos == -1){
                printf("Employee with ID No. %d does not exist in records.\n", eid);
                continue;
            }
            printf("Employee found, details:\n");
            printf("%-22s %-10s %-15s %-15s\n",
                   "NAME", "ID No.", "DESIGNATION", "SALARY(ANNUAL)");
            printf("%-22s %-10d %-15s %-15lf\n",
                   name[pos], id[pos], des[pos], sal[pos]);
        }
        else if(ch != 6){
            printf("Please enter valid choice.\n");
        }
    }
    printf("EXITING.\n");
    printf("Thank you for using this system.\n");
    return 0;
}
