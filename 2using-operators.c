// IGNACIO, CHRISTIAN PAUL R. DIT 1-2
#include <stdio.h>
int main(void)
{
    // Using Arithmetic and Logical Operators
    int a = 5, b = 3;
    int sum = a + b;  // Adds a and b
    int diff = a - b; // Subtracts b from a
    int prod = a * b; // Multiplies a and b
    int quot = a / b; // Divides a by b to get integer part

    // result of arithmetic operations
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quot);

    // Logical (comparison) operators examples:
    if ((a > b) && (sum > diff))
    {
        printf("AND operator: Both conditions are true.\n");
    }
    if ((a == 5) || (b == 5))
    {
        printf("OR operator: At least one condition is true.\n");
    }
    if (!(a < b))
    {
        printf("NOT operator: 'a' is NOT less than 'b'.\n");
    }
    return 0;
}
