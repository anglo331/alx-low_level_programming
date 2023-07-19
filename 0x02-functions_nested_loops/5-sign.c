#include "main.h"

/**
 * print_sign - to print postive or ingative number
 * @n: input to check
 * Return: 1 if +ev 0 if zero -1 if -ev number
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
