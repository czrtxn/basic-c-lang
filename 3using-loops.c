// IGNACIO, CHRISTIAN PAUL R. DIT 1-2
#include <stdio.h>
int main(void)
{

    // Using Loops

    // WHILE loop: 1 to 10
    int i = 1;
    printf("WHILE loop:\n");
    while (i <= 10)
    {
        printf("%d ", i); // Prints each number
        i++;              // Adds 1 to i each time
    }
    printf("\n");

    // FOR loop: even numbers 2 to 20
    printf("FOR loop:\n");
    for (int j = 2; j <= 20; j += 2)
    {
        printf("%d ", j); // Prints each even number
    }
    printf("\n");

    // DO-WHILE loop: 1 to 5
    int k = 1;
    printf("DO-WHILE loop:\n");
    do
    {
        printf("%d ", k); // Adds 1 to k each time
        k++;              // Adds 1 to k each time
    } while (k <= 5); // Keeps going until k is more than 5
    printf("\n");

    return 0;
}
