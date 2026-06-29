#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#define delay(ms) Sleep(ms)
#else
#include <unistd.h>
#define delay(ms) usleep((ms) * 1000)
#endif
int main() {
    int arr[1000];
    int size = 0;
    int ch = 1;
    int e, x, pos;
    printf("******WELCOME TO ARRAY OPERATIONS******\n");
    printf("Choose operation to perform:\n");
    printf("1- Display array\n");
    printf("2- Input array\n");
    printf("3- Insert element\n");
    printf("4- Delete element\n");
    printf("5- Search element\n");
    printf("6- Sort array\n");
    printf("7- Exit\n");
    while (ch != 7) {
        printf("\n*********************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        if (ch == 1) {
            if (size < 1) {
                printf("Empty array. Enter some elements.\n");
                continue;
            }
            printf("Array:\n");
            for (int i = 0; i < size; i++) {
                printf("%d", arr[i]);
                if (i != size - 1)
                    printf(",");
                else
                    printf("\n");
            }
        }
        else if (ch == 2) {
            if (size != 0) {
                printf("Array already has elements, inputting array will overwrite previous elements. Enter 0 if you wish to proceed: ");
                int c;
                scanf("%d", &c);
                if (c == 0) {
                    printf("Canceling array input.\n");
                    continue;
                }
            }
            printf("Enter number of elements: ");
            scanf("%d", &size);
            printf("Enter %d elements for array:\n", size);
            for (int i = 0; i < size; i++)
                scanf("%d", &arr[i]);
            printf("Input complete.\n");
        }
        else if (ch == 3) {
            if (size == 1000) {
                printf("Array has no space for insertion. Make space first.\n");
                continue;
            }
            printf("Enter element to insert: ");
            scanf("%d", &e);
            printf("Enter index to insert at: ");
            scanf("%d", &x);
            if (x > size) {
                x = size;
                printf("Index goes beyond current array size, hence inserting at end of array.\n");
            }
            for (int i = size; i > x; i--)
                arr[i] = arr[i - 1];
            arr[x] = e;
            size++;
            printf("Inserted. No. of elements in array: %d\n", size);
        }
        else if (ch == 4) {
            if (size == 0) {
                printf("Array has no element for deletion.\n");
                continue;
            }
            printf("Enter index to delete at: ");
            scanf("%d", &x);
            if (x < 0 || x >= size) {
                printf("Invalid index.\n");
                continue;
            }
            for (int i = x; i < size - 1; i++)
                arr[i] = arr[i + 1];
            size--;
            printf("Deleted. No. of elements in array: %d\n", size);
        }
        else if (ch == 5) {
            printf("Enter search element: ");
            scanf("%d", &x);
            pos = -1;
            for (int i = 0; i < size; i++) {
                if (arr[i] == x) {
                    pos = i;
                    break;
                }
            }
            if (pos == -1)
                printf("%d was not found in array.\n", x);
            else
                printf("%d found in array at index %d.\n", x, pos);
        }
        else if (ch == 6) {
            printf("Sorting");
            for (int j = 0; j < 3; j++) {
                delay(1000);
                printf(".");
                fflush(stdout);
            }
            int t;
            int s;
            for (int i = 0; i < size - 1; i++) {
                s = 0;
                for (int j = 0; j < size - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        t = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = t;
                        s++;
                    }
                }
                if (s == 0)
                    break;
            }
            printf("\nSorted array:\n");
            for (int i = 0; i < size; i++) {
                printf("%d", arr[i]);
                if (i != size - 1)
                    printf(",");
                else
                    printf("\n");
            }
        }
        else if (ch != 7) {
            printf("Wrong choice. Please choose only from given options.\n");
        }
    }
    printf("EXITING.\n");
    printf("Thank you for using this system.\n");
    return 0;
}
