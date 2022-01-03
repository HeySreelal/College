#include <stdio.h>

int main() {
    // Problem: Smallest of two numbers with conditional operator.

    int a, b, smallest;
    printf("Enter two numbers: ");
    scanf("%d\n%d", &a, &b);
    smallest = a < b ? a : b;
    printf("The smallest number is %d\n", smallest);
    return 0;
}