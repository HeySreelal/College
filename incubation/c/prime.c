#include <stdio.h>

// Prime or not

int main()
{
    int n, i;

    // assuming the number is prime
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if n is prime

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {  
            // if n is divisible by any number other than 1 and itself,
            // then it is not prime
            isPrime = 0; // false
            break;
        }  
    }

    if (isPrime)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}