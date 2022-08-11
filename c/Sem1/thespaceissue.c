#include <stdio.h>

int main() {
    char name1[100], name2[100];
    int spaces = 10;

    char spaceStr = ' ';

    printf("Enter first name: ");
    scanf("%[^\n]%*c", name1);

    printf("Enter second name: ");
    scanf("%[^\n]%*c", name2);

    for (int i = spaces; i >= 0; i--) {
        printf("%s%*c🚀%*c%s\n", name1, i, spaceStr, i, spaceStr, name2);
    }

    return 0;

}