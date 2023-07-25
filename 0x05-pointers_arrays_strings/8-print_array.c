#include <stdio.h>

/**
 * print_array - to print n of array items
 * @arr: input array
 * @n: the number required
 */

void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i == n - 1)
		{
			printf("%d", arr[i]);
		}
		else
		{
			printf("%d, ", arr[i]);
		}
	}
	printf("\n");
}
