#include <stdio.h>

int main() {
    // Problem: Find if the given number is odd or even.
    // Input: One integer.
    // Output: <NUMBER> is Odd if number is odd.
    //         <NUMBER> is Even if number is even.

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("%d is even\n", a);
    } else {
        printf("%d is odd\n", a);
    }
    return 0;
}