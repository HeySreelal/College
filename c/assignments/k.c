#include <stdio.h>

/* 
    Problem:
        Find largest among two numbers using conditional operator

    Expected Output:
        Enter two numbers:
        2 5
        5 is the largest number
*/


int main() {
    int a, b, largest;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    largest = (a > b) ? a : b;

    printf("%d is the largest number\n", largest);

    return 0;
}