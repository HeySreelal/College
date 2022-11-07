#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[50], i, j;

    printf("Enter a string: ");
    gets(str);

    j = strlen(str);

    for (i = 0, j = j - 1; i < j; i++, j--)
    {
        if (toupper(str[i]) != toupper(str[j]))
        {
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}