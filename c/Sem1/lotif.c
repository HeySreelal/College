
#include <stdio.h>

int main() {
    // Problem: Largest of three numbers with if else.
    // Input: Three integers.
    // Output: Largest of three numbers.
    
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) 
        if (a > c)
            largest = a;
        else
            largest = c;
    else 
        if (b > c)
            largest = b;
        else
            largest = c;
    printf("The largest number is %d\n", largest);
    return 0;
}