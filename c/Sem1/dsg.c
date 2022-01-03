#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    if(c > 100) {
        printf("Sum is %d\nSum is greater than 100.", c);
    } else {
        printf("Sum is %d\n", c);
    }
    return 0;
}