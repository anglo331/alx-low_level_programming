#include "main.h"

/**
 * _isalpha - to check if the char passed is alphabet char
 * @c: passed var to check
 * Return: 0 if false else 1
 */

int _isalpha(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else if ('A' <= c && c <= 'z')
		return (1);
	return (0);
}
