#include "main.h"

char rev(char *);
char _strcat(char *, char *);

/**
 * is_palindrome - to compare betwen the worde and its revers
 * @s: the input string
 * Return: 1 if true else 0
 */

int is_palindrome(char *s)
{
	char str = rev(s);

	if (str == s)
		return (1);

	return (0);
}

/**
 * rev - to revers the string
 * @s: input string
 * @i: iterator
 * Return: reversed string
 */

char rev(char *s)
{
	char x[], temp;

	if (*s)
	{
		temp = rev(s + 1);
		_strcat(x, temp) return (x);
	}
	return;
}

/**
 * _strcat - to add letter by letter
 * @i: iterator
 * @dist: destination string
 * @src: source char
 * Return: the new chenges
 */