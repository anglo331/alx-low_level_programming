#include "main.h"

/**
 * _strncpy - to copy n bytes to new var
 * @dest: the new destnation
 * @src: the sourese string
 * @n: the number of bytes to copy
 * Return: the final string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
