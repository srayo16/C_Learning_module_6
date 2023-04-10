// Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

// Note: The "Correct" password is the number 1999.

// Input
// The input contains several passwords.

// Each line contains a number X (103 ≤ X ≤ 104 - 1).

// Output
// Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is typed correctly.

#include <stdio.h>

int main()
{

    for (int i = 0; i > -1; i++)
    {
        int a;
        scanf("%d", &a);
        if (a == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }

        /* code */
    }

    return 0;
}