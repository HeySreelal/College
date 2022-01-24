#include <stdio.h>

/* 
    Problem: 
        Write a program to print whether entered two numbers' sum is even or odd using if else.

    Expected Output:
        Enter two numbers:
        1 2
        Sum is 3 and it is odd.
*/

int main() {
    int a, b, sum;

    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    sum = a + b;

    if (sum % 2 == 0) {
        printf("Sum is %d and it is even\n", a, b, sum);
    } else {
        printf("Sum is %d and it is odd\n", a, b, sum);
    }

    return 0;
}