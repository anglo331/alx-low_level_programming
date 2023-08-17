#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - to return the index
 * @arr: array of numbers
 * @s: the size of the array
 * @comp: pointer to function
 * Return: the index of wanted number
 */

int int_index(int *arr, int s, int (*comp)(int))
{
	int i;

	if (arr == NULL)
		exit(1);

	if (s <= 0)
		return (-1);

	for (i = 0; i < s; i++)
	{
		if (comp(arr[i]))
			return (i);
	}

	return (-1);
}
