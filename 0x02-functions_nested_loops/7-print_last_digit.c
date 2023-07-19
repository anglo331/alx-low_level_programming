#include "main.h"

/**
 * print_last_digite - to print the last digite
 * @n: the input value
 * Return: the last digite
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = n * -1;
	}
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
