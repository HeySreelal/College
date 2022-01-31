#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, r1, r2;

    printf("Enter coefficients a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);

    int d = (b * b )- (4 * a * c);

    if(d == 0) {
        r1 = -b / (2 * a);
        printf("Roots are real and equal: (x + %d)", r1);
    }
    else if(d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: (x + %d) and (x - %d)", r1, r2);
    }
    else {
        printf("Roots are imaginary");
    }

    printf("\n");

    return 0;
}