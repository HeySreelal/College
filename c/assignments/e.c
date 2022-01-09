#include <stdio.h>

int main() {
    // Problem: Find smallest among two numbers.
    // Input: Two numbers.
    // Output: The smallest number.

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("The smallest number is %d\n", a);
    } else {
        printf("The smallest number is %d\n", b);
    }

    return 0;
}