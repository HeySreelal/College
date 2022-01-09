#include <stdio.h>

int main() {
    // Problem: Find if the entered character is vowel.
    // Input: A character.
    // Output: Whether the character is vowel.

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("The character is vowel\n");
    } 

    return 0;
}