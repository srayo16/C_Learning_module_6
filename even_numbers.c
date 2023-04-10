// Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
// Input
// Only one line containing a number N (1 ≤ N ≤ 103).
// Output
// Print the answer according to the required above. If there are no even numbers print -1.

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a > 1 && a <= 1000)
    {
        for (int i = 1; i <= a; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    else if (a == 1)
    {
        printf("-1");
    }

    return 0;
}