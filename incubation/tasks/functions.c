#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int land = 0, lor = 0, lxor = 0;
    int a, b;
    for ( a = 1; a <= n; a++) {
        for (b = a + 1; b <= n; b++) {

            int and = a & b;
            int or = a | b;
            int xor = a ^ b;

            if (and > land && and < k) land = and;
            if (or > lor && or < k) lor = or;
            if (xor > lxor && xor < k) lxor = xor;
        }
    }
    printf("%d\n%d\n%d\n", land, lor, lxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}


/*

    n       n       n
    n      n-1      n
    n       n       n

    
    2 2 2
    2 1 2
    2 2 2

    i == 1 | 2n-1 => n
    i == 2 | 2n-2 => n - 1
    i == 3 => 2n-3 - 2

    for ( i = 1; i <= 2n -1; i++ ) {
        for (j = 1; j <= 2n; j++ ) {
            printf(6)
        }
    }

    n           n           n              n                n       |        11      12      13      14      15

    n          n-1         n-1            n-1               n       |        21      22      23      24      25

    n          n-1         n-2            n-1               n       |        31      32      33      34      35

    n          n-1         n-1            n-1               n       |        41      42      43      44      45

    n           n           n              n                n       |        51      52      53      54      55


    3 3 3 3 3
    3 2 2 2 3
    3 2 1 2 3
    3 2 2 2 3
    3 3 3 3 3

    4 4 4 4 4 4 4
    4 3 3 3 3 3 4   
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4
*/