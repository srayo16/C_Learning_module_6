#include <stdio.h>

int even, odd, positive, negative;
void checking(int a)
{
    if (a % 2 == 0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    if (a > 0)
    {
        positive++;
    }
    else if (a < 0)
    {
        negative++;
    }
}

int main()
{
    int a;
    scanf("%d", &a);

    if (a >= 1 && a <= 1000)
    {
        for (int i = 1; i <= a; i++)
        {
            int b;
            scanf("%d", &b);
            checking(b);
        }
        printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);
    }

    return 0;
}