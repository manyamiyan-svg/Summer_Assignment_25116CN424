#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
    int seats[80] = {0};
    char cn[80][100];
    int ts = 80;
    int ch = 1;
    int t, s;
    srand(time(NULL));
    printf("******WELCOME TO TICKET BOOKING SYSTEM******\n");
    printf("This system currently only handles ticket booking for only one coach for now.(Upgrading soon...)\n");
    printf("You can navigate the system, using numbers and perform given options:\n");
    printf("1- Book ticket.\n");
    printf("2- Cancel ticket.\n");
    printf("3- View booking.\n");
    printf("4- Check seat availability.\n");
    printf("5- View all bookings.\n");
    printf("6- Exit.\n");
    while(ch != 6){
        printf("\n*********************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();
        if(ch == 1){
            if(ts == 0){
                printf("Coach full. No seats available.\n");
                continue;
            }
            printf("Enter no. of tickets: ");
            scanf("%d", &t);
            getchar();
            if(t > ts){
                printf("Only %d seats available.\n", ts);
                continue;
            }
            ts -= t;
            for(int i = 0; i < t; ){
                s = rand() % 80;
                while(seats[s] != 1){
                    seats[s] = 1;
                    i++;
                    printf("Enter traveller's name: ");
                    fgets(cn[s], sizeof(cn[s]), stdin);
                    cn[s][strcspn(cn[s], "\n")] = '\0';
                    printf("Seat assigned: %d\n", s + 1);
                    break;
                }
            }
            printf("Tickets booked. No. of seats left for reservation is: %d\n", ts);
        }
        else if(ch == 2){
            if(ts == 80){
                printf("Coach empty. No tickets to cancel.\n");
                continue;
            }
            int esno;
            printf("Enter Seat no. of traveller, whose ticket you wish to delete: ");
            scanf("%d", &esno);
            getchar();
            if(esno < 1 || esno > 80 || seats[esno-1] == 0){
                printf("Ticket with Seat No. %d is not booked.\n", esno);
                continue;
            }
            printf("Ticket found, verify details:\n");
            printf("%-22s %-20s\n","NAME","SEAT No.");
            printf("%-22s %-20d\n", cn[esno-1], esno);
            int ech;
            printf("Enter 1 to proceed with deletion: ");
            scanf("%d", &ech);
            getchar();
            if(ech != 1){
                printf("Canceling deletion.\n");
                continue;
            }
            seats[esno-1] = 0;
            cn[esno-1][0] = '\0';
            ts++;
            printf("Ticket canceled. No. of seats left for reservation is: %d\n", ts);
        }
        else if(ch == 3){
            if(ts == 80){
                printf("Coach empty.\n");
                continue;
            }
            int esno;
            printf("Enter Seat no. of traveller, whose ticket you wish to view: ");
            scanf("%d", &esno);
            getchar();
            if(esno < 1 || esno > 80 || seats[esno-1] == 0){
                printf("Ticket with Seat No. %d is not booked.\n", esno);
                continue;
            }
            printf("Ticket found, verify details:\n");
            printf("%-22s %-20s\n","NAME","SEAT No.");
            printf("%-22s %-20d\n", cn[esno-1], esno);
            int ech;
            printf("Enter 1 to proceed with updation: ");
            scanf("%d", &ech);
            getchar();
            if(ech != 1){
                printf("Canceling updation.\n");
                continue;
            }
            printf("Enter new name: ");
            fgets(cn[esno-1], sizeof(cn[esno-1]), stdin);
            cn[esno-1][strcspn(cn[esno-1], "\n")] = '\0';
        }
        else if(ch == 4){
            printf("Total seats: 80\n");
            printf("Booked seats: %d\n", 80 - ts);
            printf("Available seats: %d\n", ts);
        }
        else if(ch == 5){
            if(ts == 80){
                printf("No reservations made yet, please book tickets first.\n");
                continue;
            }
            printf("Displaying reservation information...\n");
            printf("%-22s %-20s\n","NAME","SEAT No.");
            for(int i = 0; i < 80; i++){
                if(seats[i] != 0){
                    printf("%-22s %-20d\n", cn[i], i + 1);
                }
            }
        }
        else if(ch != 6){
            printf("Please enter valid choice.\n");
        }
    }
    printf("EXITING.\n");
    printf("Thank you for using this system.\n");
    return 0;
}
