#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - it is the main entry point
 * Return: return zero on success
 */

int main(void)
{
    int n;
    int last;

    srand(time(0));

    n = rand() - RAND_MAX / 2;
    last = n % 10;

    if (last > 5)
        printf("Last digit of %i and is greater than 5", last);
    else if (last == 0)
        printf("Last digit of %i and is 0", last);
    else
        printf("Last digit of %i and is less than 6 and not 0", last);
    return (0);
}
