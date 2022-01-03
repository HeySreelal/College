#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("Greater number is %d", (a > b) ? a : b);
    return 0;
}

int largestAmongThree(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}