#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - to loop through array of numbers to do some functon
 * @arr: passed array
 * @s: size of array
 * @func: passed functon
 */
void array_iterator(int *arr, size_t s, void (*func)(int))
{
	size_t i;

	if (arr == NULL)
		exit(1);

	for (i = 0; i < s; i++)
	{
		func(arr[i]);
	}
}
