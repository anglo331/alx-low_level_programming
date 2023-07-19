#include "main.h"

/**
 * _islower - to see if the letter is lower or else
 * @c: letter to check
 * Return: 1 if lower else 0
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
