#include <stdio.h>

int main() {
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