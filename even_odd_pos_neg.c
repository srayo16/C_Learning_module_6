// Given N numbers. Count how many of these values are even, odd, positive and negative.

// Input
// First line contains one number N (1 ≤ N ≤ 103) number of values.

// Second line contains N numbers (-105 ≤ Xi ≤ 105).

// Output
// Print four lines with the following format:

// First Line: "Even: X", where X is the number of even numbers in the given input.

// Second Line: "Odd: X", where X is the number of odd numbers in the given input.

// Third Line: "Positive: X", where X is the number of positive numbers in the given input.

// Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

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