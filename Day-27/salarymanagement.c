#include <stdio.h>
#include <windows.h>
int main() {
    int ch = 1;
    printf("******WELCOME TO SALARY MANAGER******\n");
    printf("This system will take input about your salary details and calculate the relevant gross salary for you.\n");
    while (ch == 1) {
        printf("************************************************\n");
        printf("Enter the following details (monthly):\n");
        double bs, dap, hra, bos, pf;
        printf("Basic salary: ");
        scanf("%lf", &bs);
        printf("Dearness Allowance%% (DA): ");
        scanf("%lf", &dap);
        printf("House Rent Allowance (HRA): ");
        scanf("%lf", &hra);
        printf("Any bonuses received: ");
        scanf("%lf", &bos);
        printf("Provident Fund: ");
        scanf("%lf", &pf);
        double gs = bs + hra + bos + (dap * bs / 100);
        double ns = gs - pf;
        double taxp, tax;
        if (ns * 12 <= 250000)
            taxp = 0;
        else if (ns * 12 <= 500000)
            taxp = 0.05;
        else if (ns * 12 <= 750000)
            taxp = 0.10;
        else if (ns * 12 <= 1000000)
            taxp = 0.15;
        else if (ns * 12 <= 1250000)
            taxp = 0.20;
        else if (ns * 12 <= 1500000)
            taxp = 0.25;
        else
            taxp = 0.30;
        tax = ns * taxp;
        printf("Calculating");
        for (int i = 0; i < 3; i++) {
            Sleep(500);
            printf(".");
        }
        printf("\n\nYour salary details:\n");
        printf("Gross Salary (Basic Salary + Allowances): %.2lf\n", gs);
        printf("Net Salary (Gross Salary - Deductions): %.2lf\n", ns);
        printf("According to your salary, your income tax for the month comes out to: %.2lf (Income Tax Rate: %.0lf%%)\n",
               tax, taxp * 100);
        printf("\nEnter 1 to calculate again, or any other number to quit: ");
        scanf("%d", &ch);
    }
    printf("EXITING.\n");
    printf("Thank you for using this system.\n");
    return 0;
}
