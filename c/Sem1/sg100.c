#include <stdio.h>

int main(){
    // Problem: Find if sum of two numbers is greater than 100.
    
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("Sum is %d\n", c);
    if(c > 100){
        printf("%d is greater than 100\n", c);
    }
    return 0;
}