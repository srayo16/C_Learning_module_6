#include <stdio.h>

int main()
{
    int a;
    printf("Please enter quantity: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {

        for (int q = 1; q <= 5; q++)
        {
            printf("%d ", q);
        }
        printf("\n");
    }

    return 0;
}