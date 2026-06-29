#include <stdio.h>
#include <math.h>
int main() {
    int ch = 1;
    double res, e, r;
    printf("******WELCOME TO CALCULATOR******\n");
    printf("Choose operation to perform and enter values:\n");
    printf("1- Addition\n");
    printf("2- Subtraction\n");
    printf("3- Multiplication\n");
    printf("4- Division\n");
    printf("5- Exponent\n");
    printf("6- Exit\n");
    while (ch != 6) {
        printf("\n*********************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        if (ch == 1) {
            res = 0;
            e = 1;
            printf("Enter your numbers to perform addition. Enter 0 when you wish to stop.\n");
            while (e != 0) {
                printf("%.2lf + ", res);
                scanf("%lf", &e);
                res += e;
                printf("Sum = %.2lf\n", res);
            }
        }
        else if (ch == 2) {
            res = 0;
            e = 1;
            printf("Enter your numbers to perform subtraction. Enter 0 when you wish to stop.\n");
            while (e != 0) {
                printf("%.2lf - ", res);
                scanf("%lf", &e);
                res -= e;
                printf("Difference = %.2lf\n", res);
            }
        }
        else if (ch == 3) {
            res = 1;
            e = 0;
            printf("Enter your numbers to perform multiplication. Enter 1 when you wish to stop.\n");
            while (e != 1) {
                printf("%.2lf x ", res);
                scanf("%lf", &e);
                res *= e;
                printf("Product = %.2lf\n", res);
            }
        }
        else if (ch == 4) {
            printf("Enter your numbers to perform division. Enter 1 when you wish to stop.\n");
            scanf("%lf", &e);
            res = e;
            while (e != 1) {
                printf("%.2lf / ", res);
                scanf("%lf", &e);
                if (e == 0) {
                    printf("Cannot divide by 0.\n");
                    continue;
                }
                r = fmod(res, e);
                res /= e;
                printf("Division = %.2lf\n", res);
                printf("Remainder = %.2lf\n", r);
            }
        }
        else if (ch == 5) {
            double b;
            printf("Base: ");
            scanf("%lf", &b);
            printf("Exponent: ");
            scanf("%lf", &e);
            res = pow(b, e);
            printf("%.2lf raised to the power of %.2lf is: %.2lf\n", b, e, res);
        }
        else if (ch != 6) {
            printf("Wrong choice. Please choose only from given options.\n");
        }
    }
    printf("EXITING.\n");
    printf("Thank you for using this system.\n");
    return 0;
}
