#include "main.h"

/**
 * _strncat - to copy the n bytes of src string to dest
 * @str: to copy string
 * @dest: the destination to past the string
 * @n: number of byets
 * Retrun: the final string
 */

char *_strncat(char *dest, char *str, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n && str[i] != '\0'; i++)
	{
		dest[len] = str[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
