#include <stdio.h>

int main() {
    int a, b, smallest;
    printf("Enter two numbers: ");
    scanf("%d\n%d", &a, &b);
    smallest = a < b ? a : b;
    printf("The smallest number is %d\n", smallest);
    return 0;
}