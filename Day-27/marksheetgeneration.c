#include <stdio.h>
#include <string.h>
#include <windows.h>
int main() {
    printf("******WELCOME TO MARKSHEET GENERATOR******\n");
    printf("This system will generate marksheet, after receiving relevant information.\n");
    int ch = 1;
    while (ch == 1) {
        char name[100], div[50];
        double phy, chem, bio, math, eng, cs, max, per;
        int id;
        char gr;
        printf("\nEnter details as prompted:\n");
        printf("Name: ");
        getchar();
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        printf("ID No.: ");
        scanf("%d", &id);
        printf("Division: ");
        getchar();
        fgets(div, sizeof(div), stdin);
        div[strcspn(div, "\n")] = '\0';
        printf("\nEnter marks of-\n");
        printf("Mathematics: ");
        scanf("%lf", &math);
        printf("Physics: ");
        scanf("%lf", &phy);
        printf("Chemistry: ");
        scanf("%lf", &chem);
        printf("Biology: ");
        scanf("%lf", &bio);
        printf("English: ");
        scanf("%lf", &eng);
        printf("Computer Science: ");
        scanf("%lf", &cs);
        printf("Maximum marks obtainable: ");
        scanf("%lf", &max);
        per = (math + phy + chem + bio + eng + cs) * 100 / max / 6;
        if (per >= 90)
            gr = 'A';
        else if (per >= 80)
            gr = 'B';
        else if (per >= 60)
            gr = 'C';
        else if (per >= 50)
            gr = 'D';
        else if (per > 33)
            gr = 'E';
        else
            gr = 'F';
        printf("Generating");
        for (int i = 0; i < 3; i++) {
            Sleep(500);
            printf(".");
        }
        printf("\n Generation complete.");
        printf("\n\n**************************************************************************************\n");
        printf("%50s\n", "MARKSHEET");
        printf("%-15s %-10s\n", "NAME:", name);
        printf("%-15s %-10s\n", "DIVISION:", div);
        printf("%-15s %-10d\n\n", "ID No.:", id);
        printf("%-15s %-15s %-15s %-15s %-15s %-15s\n",
               "Mathematics", "Physics", "Chemistry",
               "Biology", "English", "Computer Science");
        printf("%-15.2lf %-15.2lf %-15.2lf %-15.2lf %-15.2lf %-15.2lf\n",
               math, phy, chem, bio, eng, cs);
        printf("\nPERCENTAGE: %.2lf\n", per);
        printf("GRADE: %c\n", gr);
        printf("**************************************************************************************\n");
        printf("\nEnter 1 to calculate again, or any other number to quit.\n");
        scanf("%d", &ch);
    }
    printf("EXITING.\n");
    printf("Thank you for using this system.\n");
    return 0;
}
