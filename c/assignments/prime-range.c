#include <stdio.h>
int main()
{
   int num1, num2, isPrime, i, j;
 
   printf("Enter two range:");
   //Store the range in variables using scanf
   scanf("%d %d", &num1, &num2);
 
   //Display prime numbers for input range
   printf("Prime numbers from %d and %d are:\n", num1, num2);
   for(i=num1+1; i < num2; i++)
   {
      isPrime=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            isPrime=1;
            break;
         }
      }
      if(isPrime==0)
         printf("%d\n",i);
  }
  return 0;
}