#include <stdio.h>

/* 
    Problem: 
        Write a program to perform arithmetic operations on three numbers according to the 
        operator given by the user(+, /, * and invalid operator) using Switch statement.
    
    Expected Output:
        Enter three numbers:
        2 5 3
        Enter operator:
        +
        2 + 5 + 3 = 10
        --------------------------------------------------------------------------------
        Enter three numbers:
        1 2 3
        Enter operator:
        %
        Invalid operator
*/

int main() {
    int a, b, c, result;
    char op;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Enter operator: ");
    scanf("%c", &op);

    switch (op) {
        case '+':
            result = a + b + c;
            printf("%d + %d + %d = %d\n", a, b, c, result);
            break;
        case '-':
            result = a - b - c;
            printf("%d - %d - %d = %d\n", a, b, c, result);
            break;
        case '*':
            result = a * b * c;
            printf("%d * %d * %d = %d\n", a, b, c, result);
            break;
        case '/':
            result = a / b / c;
            printf("%d / %d / %d = %d\n", a, b, c, result);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}