#include <stdio.h>

int main() {
    // Problem: Find the sum of two numbers if the entered character is ‘+’, else find the difference difference 
    // Input: Two numbers and a character.
    // Output: The sum or difference of the two numbers.

    int a, b;
    char c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c == '+') {
        printf("The sum is %d\n", a + b);
    } else {
        printf("The difference is %d\n", a - b);
    }

    return 0;
}