#include "main.h"

/**
 * _strlen_recursion - to get the len of string
 * @s: input string
 * Return: the number of charchters in the string
 */

int _strlen_recursion(char *s)
{
	int temp = 0;

	if (*s)
	{
		temp++;
		temp += _strlen_recursion(s + 1);
	}
	return (temp);
}
