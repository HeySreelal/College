#include <stdio.h>

/*
    Problem: 
        Check whether the triangle is equilateral, scalene, or isosceles
    Expected Output:
        Enter three sides of the triangle:
        3 4 5
        Triangle is scalene

*/

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Triangle is equilateral\n");
    } else if (a != b && b != c && a != c) {
        printf("Triangle is scalene\n");
    } else {
        printf("Triangle is isosceles\n");
    }

    return 0;
}