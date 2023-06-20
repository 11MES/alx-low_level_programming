

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*this code generates random number

**/

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf("Random number: %d\n", n);

    return 0;
}
