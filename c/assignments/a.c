#include <stdio.h>

int main() {
    // Problem: Find largest among two numbers with conditional operator.
    // Input: Two numbers.
    // Output: The largest number.

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int max = (a > b) ? a : b;
    printf("The largest number is %d\n", max);
    return 0;
}