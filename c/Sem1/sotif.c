#include <stdio.h>

int main() {
    // Problem: Smallest of three numbers with if.
    // Input: Three integers.
    // Output: Smallest of three numbers.

    int a, b, c, smallest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ( a < b )
        if ( a < c )
            smallest = a;
        else
            smallest = c;
    else 
        if ( b < c )
            smallest = b;
        else
            smallest = c;
    printf("The smallest number is %d\n", smallest);
    return 0;
}