#include <stdio.h>
#include <string.h>
int main() {
    char name[100][100];
    char id[100][50];
    int q[100];
    float ppu[100];
    int ch = 1, count = 0;
    printf("******WELCOME TO INVENTORY MANAGEMENT SYSTEM******\n");
    printf("This inventory currently only handles 100 items.(Upgrading soon...)\n");
    printf("You can navigate the system, using numbers and perform given options:\n");
    printf("1- Display inventory.\n");
    printf("2- Add an item.\n");
    printf("3- Remove an item.\n");
    printf("4- Update item information.\n");
    printf("5- Search for an item.\n");
    printf("6- Exit.\n");
    while(ch != 6) {
        printf("\n*********************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();
        if(ch == 1) {
            if(count == 0) {
                printf("No item in inventory yet, please add item info first.\n");
                continue;
            }
            printf("Displaying inventory...\n");
            printf("%-22s %-10s %-15s %-15s\n",
                   "ITEM NAME","ITEM ID","QUANTITY","PRICE PER UNIT");
            for(int i=0;i<count;i++)
                printf("%-22s %-10s %-15d %-15.2f\n",
                       name[i], id[i], q[i], ppu[i]);
        }
        else if(ch == 2) {
            if(count == 100) {
                printf("System record full!!. Delete some records to add new item.\n");
                continue;
            }
            printf("ITEM ID: ");
            fgets(id[count],50,stdin);
            id[count][strcspn(id[count],"\n")] = '\0';
            int pos = -1;
            for(int i=0;i<count;i++) {
                if(strcmp(id[i], id[count]) == 0) {
                    pos = i;
                    break;
                }
            }
            if(pos != -1) {
                printf("Item with ID %s already exists.\n", id[count]);
                continue;
            }
            printf("Let's add an item.\n");
            printf("NAME: ");
            fgets(name[count],100,stdin);
            name[count][strcspn(name[count],"\n")] = '\0';
            printf("QUANTITY: ");
            scanf("%d",&q[count]);
            printf("PRICE PER UNIT: ");
            scanf("%f",&ppu[count]);
            getchar();
            count++;
            printf("New item added. No. of items in inventory is: %d\n",count);
        }
        else if(ch == 3) {
            if(count == 0) {
                printf("No items in inventory for deletion!!\n");
                continue;
            }
            char eid[50];
            printf("Enter ID of item to delete: ");
            fgets(eid,50,stdin);
            eid[strcspn(eid,"\n")] = '\0';
            int pos = -1;
            for(int i=0;i<count;i++) {
                if(strcmp(id[i],eid)==0) {
                    pos = i;
                    break;
                }
            }
            if(pos==-1) {
                printf("Item with ID %s does not exist.\n",eid);
                continue;
            }
            printf("Item found, verify details:\n");
            printf("%-22s %-10s %-15s %-15s\n",
                   "ITEM NAME","ITEM ID","QUANTITY","PRICE PER UNIT");
            printf("%-22s %-10s %-15d %-15.2f\n",
                   name[pos],id[pos],q[pos],ppu[pos]);
            int ech;
            printf("Enter 1 to proceed with deletion: ");
            scanf("%d",&ech);
            getchar();
            if(ech!=1) {
                printf("Canceling deletion.\n");
                continue;
            }
            for(int i=pos;i<count-1;i++) {
                strcpy(name[i],name[i+1]);
                strcpy(id[i],id[i+1]);
                q[i]=q[i+1];
                ppu[i]=ppu[i+1];
            }
            count--;
            printf("Item deleted. No. of items in inventory: %d\n",count);
        }
        else if(ch == 4) {
            if(count==0) {
                printf("No items in inventory for updation!!\n");
                continue;
            }
            char eid[50];
            printf("Enter ID of item to update: ");
            fgets(eid,50,stdin);
            eid[strcspn(eid,"\n")] = '\0';
            int pos=-1;
            for(int i=0;i<count;i++) {
                if(strcmp(id[i],eid)==0) {
                    pos=i;
                    break;
                }
            }
            if(pos==-1) {
                printf("Item with ID %s does not exist.\n",eid);
                continue;
            }
            printf("Item found, verify details:\n");
            printf("%-22s %-10s %-15s %-15s\n",
                   "ITEM NAME","ITEM ID","QUANTITY","PRICE PER UNIT");
            printf("%-22s %-10s %-15d %-15.2f\n",
                   name[pos],id[pos],q[pos],ppu[pos]);
            int ech;
            printf("Enter 1 to proceed with updation: ");
            scanf("%d",&ech);
            getchar();
            if(ech!=1) {
                printf("Canceling updation.\n");
                continue;
            }
            printf("Enter new information:\n");
            printf("ITEM NAME: ");
            fgets(name[pos],100,stdin);
            name[pos][strcspn(name[pos],"\n")] = '\0';
            printf("ITEM ID: ");
            fgets(id[pos],50,stdin);
            id[pos][strcspn(id[pos],"\n")] = '\0';
            printf("QUANTITY: ");
            scanf("%d",&q[pos]);
            printf("PRICE PER UNIT: ");
            scanf("%f",&ppu[pos]);
            getchar();
            printf("Updation complete.\n");
        }
        else if(ch == 5) {
            if(count==0) {
                printf("No items in inventory for searching!!\n");
                continue;
            }
            char eid[50];
            printf("Enter ID of item to search: ");
            fgets(eid,50,stdin);
            eid[strcspn(eid,"\n")] = '\0';
            int pos=-1;
            for(int i=0;i<count;i++) {
                if(strcmp(id[i],eid)==0) {
                    pos=i;
                    break;
                }
            }
            if(pos==-1) {
                printf("Item with ID %s does not exist.\n",eid);
                continue;
            }
            printf("Item found:\n");
            printf("%-22s %-10s %-15s %-15s\n",
                   "ITEM NAME","ITEM ID","QUANTITY","PRICE PER UNIT");
            printf("%-22s %-10s %-15d %-15.2f\n",
                   name[pos],id[pos],q[pos],ppu[pos]);
        }
        else if(ch != 6) {
            printf("Please enter a valid choice.\n");
        }
    }
    printf("EXITING.\n");
    printf("Thank you for using this system.\n");
    return 0;
}
