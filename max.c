#include <stdio.h>
#include <limits.h>

int main()
{
    int a;
    int max = INT_MIN, min = INT_MAX;
    scanf("%d", &a);

    if (a >= 1 && a <= 1000)
    {
        for (int i = 1; i <= a; i++)
        {
            int b;
            scanf("%d", &b);
            if (b >= 0)
            {
                if (b >= max)
                {
                    max = b;
                }
                if (b <= min)
                {
                    min = b;
                }
            }
        }
        printf("%d %d", min, max);
    }
    return 0;
}