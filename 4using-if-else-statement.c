// IGNACIO, CHRISTIAN PAUL R. DIT 1-2
#include <stdio.h>
int main(void)
{
    int num = 4; // Whole number variable ( can try different number)

    if (num % 2 == 0)
    {                                 // Checks if the number can be divided by 2 without a remainder
        printf("%d is even.\n", num); // If true, print "even"
    }
    else
    {                                // If not true
        printf("%d is odd.\n", num); // Print "odd"
    }

    return 0; // End of the program
}
