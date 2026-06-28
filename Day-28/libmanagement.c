#include <stdio.h>
#include <string.h>
int main() {
    char name[100][100];
    int id[100];
    int q[100];
    char aname[100][100];
    printf("******WELCOME TO LIBRARY RECORDS******\n");
    printf("This system currently only handles 100 books.(Upgrading soon...)\n");
    printf("So, you can navigate the system, using numbers and perform given options:\n");
    printf("1- Display book list.\n");
    printf("2- Add a book.\n");
    printf("3- Remove a book.\n");
    printf("4- Update book information.\n");
    printf("5- Search for a book.\n");
    printf("6- Exit.\n");
    int ch = 1, count = 0;
    while(ch != 6){
        printf("\n*********************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();
        if(ch == 1){
            if(count == 0){
                printf("No books in records yet, please add book info first.\n");
                continue;
            }
            printf("Displaying book information...\n");
            printf("%-22s %-10s %-22s %-15s\n",
                   "NAME","ID No.","AUTHOR'S NAME","QUANTITY");
            for(int i=0;i<count;i++)
                printf("%-22s %-10d %-22s %-15d\n",
                       name[i],id[i],aname[i],q[i]);
        }
        else if(ch == 2){
            if(count == 100){
                printf("System record full!!. Delete some records to add new book.\n");
                continue;
            }
            printf("ID No.: ");
            scanf("%d",&id[count]);
            getchar();
            int pos = -1;
            for(int i=0;i<count;i++){
                if(id[i] == id[count]){
                    pos = i;
                    break;
                }
            }
            if(pos != -1){
                printf("Book with ID No. %d already exists in records.\n",id[count]);
                continue;
            }
            printf("Let's add a book.\n");
            printf("NAME: ");
            fgets(name[count],100,stdin);
            name[count][strcspn(name[count],"\n")] = '\0';
            printf("AUTHOR'S NAME: ");
            fgets(aname[count],100,stdin);
            aname[count][strcspn(aname[count],"\n")] = '\0';
            printf("QUANTITY: ");
            scanf("%d",&q[count]);
            getchar();
            count++;
            printf("New book added. No. of books in record is: %d\n",count);
        }
        else if(ch == 3){
            if(count == 0){
                printf("No books in record for deletion!!\n");
                continue;
            }
            int eid;
            printf("Enter ID No. of book, whose records you wish to delete: ");
            scanf("%d",&eid);
            getchar();
            int pos = -1;
            for(int i=0;i<count;i++){
                if(id[i] == eid){
                    pos = i;
                    break;
                }
            }
            if(pos == -1){
                printf("Book with ID No. %d does not exist in records.\n",eid);
                continue;
            }
            printf("Book found, verify details:\n");
            printf("%-22s %-10s %-22s %-15s\n",
                   "NAME","ID No.","AUTHOR'S NAME","QUANTITY");
            printf("%-22s %-10d %-22s %-15d\n",
                   name[pos],id[pos],aname[pos],q[pos]);
            int ech;
            printf("Enter 1 to proceed with deletion: ");
            scanf("%d",&ech);
            getchar();
            if(ech != 1){
                printf("Canceling deletion.\n");
                continue;
            }
            for(int i=pos;i<count-1;i++){
                strcpy(name[i],name[i+1]);
                id[i] = id[i+1];
                strcpy(aname[i],aname[i+1]);
                q[i] = q[i+1];
            }
            count--;
            printf("Book record deleted. No. of books in record is: %d\n",count);
        }
        else if(ch == 4){
            if(count == 0){
                printf("No books in record for updation!!\n");
                continue;
            }
            int eid;
            printf("Enter ID No. of book, whose records you wish to update: ");
            scanf("%d",&eid);
            getchar();
            int pos = -1;
            for(int i=0;i<count;i++){
                if(id[i] == eid){
                    pos = i;
                    break;
                }
            }
            if(pos == -1){
                printf("Book with ID No. %d does not exist in records.\n",eid);
                continue;
            }
            printf("Book found, verify details:\n");
            printf("%-22s %-10s %-22s %-15s\n",
                   "NAME","ID No.","AUTHOR'S NAME","QUANTITY");
            printf("%-22s %-10d %-22s %-15d\n",
                   name[pos],id[pos],aname[pos],q[pos]);
            int ech;
            printf("Enter 1 to proceed with updation: ");
            scanf("%d",&ech);
            getchar();
            if(ech != 1){
                printf("Canceling updation.\n");
                continue;
            }
            printf("Enter new information:\n");
            printf("NAME: ");
            fgets(name[pos],100,stdin);
            name[pos][strcspn(name[pos],"\n")] = '\0';
            printf("ID No.: ");
            scanf("%d",&id[pos]);
            getchar();
            printf("AUTHOR'S NAME: ");
            fgets(aname[pos],100,stdin);
            aname[pos][strcspn(aname[pos],"\n")] = '\0';
            printf("QUANTITY: ");
            scanf("%d",&q[pos]);
            getchar();
            printf("Updation complete.\n");
        }
        else if(ch == 5){
            if(count == 0){
                printf("No books in record for searching!!\n");
                continue;
            }
            int eid;
            printf("Enter ID No. of book, whom you wish to search: ");
            scanf("%d",&eid);
            getchar();
            int pos = -1;
            for(int i=0;i<count;i++){
                if(id[i] == eid){
                    pos = i;
                    break;
                }
            }
            if(pos == -1){
                printf("Book with ID No. %d does not exist in records.\n",eid);
                continue;
            }
            printf("Book found, details:\n");
            printf("%-22s %-10s %-22s %-15s\n",
                   "NAME","ID No.","AUTHOR'S NAME","QUANTITY");
            printf("%-22s %-10d %-22s %-15d\n",
                   name[pos],id[pos],aname[pos],q[pos]);
        }
        else if(ch != 6){
            printf("Please enter valid choice.\n");
        }
    }
    printf("EXITING.\n");
    printf("Thank you for using this system.\n");
    return 0;
}
