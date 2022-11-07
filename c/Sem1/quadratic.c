#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double r1, r2;
    double rp, ip;

    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%d%d%d", &a, &b, &c);

    double d = (b * b) - (4 * a * c);

    if (d == 0)
    {
        r1 = -b / (2 * a);
        printf("Roots are equal %lf", r1);
    }
    else if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: R1 = %lf and R2 = %lf", r1, r2);
    }
    else
    {
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);

        printf("Roots are imaginary\n");
        printf("R1 = %lf+%lfi\n", rp, ip);
        printf("R2 = %lf-%lfi\n", rp, ip);
    }

    printf("\n");
    return 0;
}