#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes there */
    int last = n % 10;
    if (last > 5)
        printf("Last digit of %i and is greater than 5");
    else if (last == 0)
        printf("Last digit of %i and is 0");
    else
        printf("Last digit of %i and is less than 6 and not 0");
    return (0);
}