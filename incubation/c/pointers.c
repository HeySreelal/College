#include <stdio.h>


int main() {

    int alwin = 10;

    int *raju = &alwin;

    *raju = *raju + 10;

    printf("Alwin => %d\n", alwin);
    printf("Raju => %d\n", *raju);

    // print addresses
    printf("&alwin => %p\n", &alwin);
    printf("&raju => %p\n", raju);

    return 0;
}