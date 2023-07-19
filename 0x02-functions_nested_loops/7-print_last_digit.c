#include "main.h"

/**
 * print_last_digit - to print the last digite
 * @n: the input value
 * Return: the last digite
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = -n;
	}
	last = n % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return (last);
}
