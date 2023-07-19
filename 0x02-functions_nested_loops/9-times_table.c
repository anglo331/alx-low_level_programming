#include "main.h"

/**
 * times_table - to print times table
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int m, m1, m2;

			m = x * y;
			m1 = m / 10;
			m2 = m % 10;
			if (y < 9)
			{
				if (m <= 9)
				{
					_putchar(m + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (m > 9)
				{
					_putchar(m1 + '0');
					_putchar(m2 + '0');
				}
				else
				{
					_putchar(m + '0');
				}
			}
		}
		_putchar('\n');
	}
}