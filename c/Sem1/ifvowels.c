#include <stdio.h>

int main() {
    // Problem: Find if entered character is vowel.

    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("%c is a vowel\n", c);
    }
    printf("Entered character is %c", c);
    return 0;
}