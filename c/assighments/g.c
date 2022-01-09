#include <stdio.h>

int main() {
    // Problem: Find the whether the sum of two numbers is odd or even.
    // Input: Two numbers.
    // Output: Whether the sum is odd or even.

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("The sum is %d\n", sum);

    if(sum % 2 == 0) {
        printf("The sum is even\n");
    } else {
        printf("The sum is odd\n");
    }

    return 0;
}