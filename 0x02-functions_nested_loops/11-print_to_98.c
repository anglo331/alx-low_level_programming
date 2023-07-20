#include "main.h"

/**
 * print_to_98 - to add or subtract from the input
 * @n: the input number
 */

void print_to_98(int n)
{
	while (n > 98 || n < 98)
	{
		if (n < 0)
		{
			_putchar('-');
			if (-n >= 100)
				_putchar((-n / 100) + '0');
			if (-n >= 10)
				_putchar((-n / 10) % 10 + '0');
			if (-n >= 0)
				_putchar((-n % 10) + '0');
		}
		if (n >= 100)
			_putchar((n / 100) + '0');
		if (n >= 10)
			_putchar((n / 10) % 10 + '0');
		if (n >= 0)
			_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(32);

		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar(9 + '0');
	_putchar(8 + '0');
	_putchar('\n');
}
