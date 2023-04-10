// Given a number N. Print the digits of that number from right to left separated by space.
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 10)
    {
        for (int i = 1; i <= n; i++)
        {
            int a;
            scanf("%d", &a);

            do
            {
                printf("%d ", a % 10);
                a = a / 10;
                /* code */
            } while (a != 0);
            printf("\n");
        }
    }

    return 0;
}