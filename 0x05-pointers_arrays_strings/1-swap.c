#include "main.h"

/**
 * swap_int - to swap the values betwen two valsue
 * @a: first input
 * @b: seconde input
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
