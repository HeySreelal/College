#include <stdio.h>

int main() {
    // Problem: Find if sum of two numbers is odd.
    // Input: Two integers.
    // Output: <NUMBER> is Odd if sum is odd.
    //         Sum is <SUM>

    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    if ( c % 2 != 0) {
        printf("%d is odd\n", c);
    }
    printf("Sum is %d", c);
    return 0;
}