#include <stdio.h>

int main() {
    // Problem: Check if the entered year is leap year or not.
    // Input: An integer.
    // Output: Year is leap year or not.
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ( year % 4 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
