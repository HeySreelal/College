#include <stdio.h>

int main() {
    // Read a character, string, and a line of input
    char c;
    scanf("%c", &c);
    printf("%c\n", c);

    char s[100];
    scanf("%s", s);
    printf("%s\n", s);

    char line[100];
    scanf("\n");
    scanf("%[^\n]", line);
    printf("%s\n", line);

    return 0;
}