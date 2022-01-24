#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, largest;
    printf("Enter 8 numbers:");
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);

    largest = a;

    if (b > largest)
        largest = b;

    if (c > largest)
        largest = c;

    if (d > largest)
        largest = d;

    if (e > largest)
        largest = e;

    if (f > largest)
        largest = f;
    
    if (g > largest)
        largest = g;
    
    if (h > largest)
        largest = h;

    printf("The largest number is %d\n", largest);
    return 0;
}