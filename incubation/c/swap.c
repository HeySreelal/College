#include <stdio.h>

int main() {
    int a, b;
    
    // 5 6
    scanf("%d %d", &a, &b);

    // A = 5, B = 6
    printf("A = %d, B = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    // A = 6, B = 5
    printf("A = %d, B = %d\n", a, b);

}