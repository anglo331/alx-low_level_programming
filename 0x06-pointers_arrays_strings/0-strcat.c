#include "main.h"

/**
 * _strcat - to combine two strings
 * @dest: the string that will be expanded
 * @src: the string to add on the text
 * Return: the final string
 */

char *_strcat(char *dest, char *src)
{
	int i, o;

	o = 0;
	while (*(dest + o) != '\0')
		o++;

	for (i = 0; src[i] != '\0'; i++)
	{
		char temp = src[i];

		if (temp == '\0')
			break;

		*(dest + o) = temp;
		o++;
	}
	*(dest + o) = '\0';

	return (dest);
}
