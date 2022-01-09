#include <stdio.h>

int main() {
    // Problem: Find whether the sum of given two numbers is odd
    // Input: Two numbers.
    // Output: Whether the sum is odd.

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("The sum is %d\n", sum);

    if(sum % 2 == 1) {
        printf("The sum is odd\n");
    }

    return 0;
}