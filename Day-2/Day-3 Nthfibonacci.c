#include <stdio.h>

int main()
{
    int a,i;
    int t1= 0, t2 = 1, c;

    printf("Enter a");
    scanf("%d", &a);

    if (a== 1)
        printf("Nth Fibonacci term = %d",t1);
    else if (a == 2)
        printf("Nth Fibonacci term = %d",t2);
    else
    {
        for (i = 3; i <= a; i++)
        {
            c = t1 + t2;
            t1= t2;
            t2 =c;
        }
        printf("Nth Fibonacci term = %d",t2);
    }

    return 0;
}
