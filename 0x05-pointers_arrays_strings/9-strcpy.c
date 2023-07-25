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

	while (str[i])
	{
		dist[i] = str[i];
		i++;
	}
	return (dist);
}
