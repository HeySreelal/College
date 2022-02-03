#include <stdio.h>

int main() {
    // Problem: Convert between Fahrenheit and Celsius values on user's choice.

    char ch;
    float temp, converted;

    printf("Enter C for Celsius to Fahrenheit and F for Fahrenheit to Celsius: ");
    scanf("%c", &ch);

    if (ch == 'C') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit is %f\n", converted);
    } else if (ch == 'F') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32) * 5 / 9;
        printf("Temperature in Celsius is %f\n", converted);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
