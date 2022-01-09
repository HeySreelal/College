#include <stdio.h>

int main() {
    // Problem: Find whether the sum of two numbers is greater than 100.
    // Input: Two numbers.
    // Output: Whether the sum is greater than 100.

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("The sum is %d\n", sum);

    if(sum > 100) {
        printf("The sum is greater than 100\n");
    }

    return 0;
}