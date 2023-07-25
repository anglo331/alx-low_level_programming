#include "main.h"

/**
 * _strcpy - to copy string with '\0' the end
 * @dist: the distenation var
 * @str: the input string
 *
 * Return: string is returend
 */

char *_strcpy(char *dist, char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		dist[i] = str[i];
	}

	dist[i] = '\0';
	return (dist);
}
