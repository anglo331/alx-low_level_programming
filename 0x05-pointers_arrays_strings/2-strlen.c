#include "main.h"

/**
 * _strlen - to return the lengh of string
 * @s: input string
 * Return: the lengh of the input
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s + i))
	{
		i++;
	}

	return (i);
}
