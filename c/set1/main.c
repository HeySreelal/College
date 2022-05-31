#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char str3[100];

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2);

    // Length
    printf("Length of string 1: %d\n", strlen(str1));

    // Compare
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // Copy
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // Concatenate
    strcat(str3, str2);
    printf("Concatenated string: %s\n", str3);

    // Reverse
    printf("Reverse of string 1: %s\n", strrev(str1));

    return 0;
}
