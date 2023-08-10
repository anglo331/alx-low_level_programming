#include "main.h"
#include <stdlib.h>

/**
 * create_array - to create array
 * @s: the size of array
 * @x: the char to fill the array with
 * Return: pointer to the array
 */

char *create_array(unsigned int s, char x)
{
	char *p = (char *)malloc(s * sizeof(char));
	unsigned int i;

	if (s == 0)
	{
		return (NULL);
	}

	for (i = 0; i < s; i++)
	{
		*(p + i) = x;
	}
	return (p);
}
