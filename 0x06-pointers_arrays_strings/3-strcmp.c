#include "main.h"

/**
 * _strcmp - to compater between two strings
 * @s1: the first string
 * @s2: the secode string
 * Return: the deffrence between the two inputs
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != '\0' && s2[i] != '\0')
			return (s1[i] - s2[i]);
	}

	return (0);
}
