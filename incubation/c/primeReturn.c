#include <stdio.h>

// Prime or not

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if n is prime

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {  
            printf("%d is not a prime number\n", n);
            return 0;
        }  
    }

    printf("%d is a prime number\n", n);
    return 0;
}