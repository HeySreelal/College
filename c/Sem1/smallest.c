#include <stdio.h>

int main() {
    // Problem: Smallest of two numbers with if-else

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if ( a < b ) {
        printf("%d is smallest", a);
    } else {
        printf("%d is smallest", b);
    }
    return 0;
}