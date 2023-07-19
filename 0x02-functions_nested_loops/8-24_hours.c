#include "main.h"

/**
 * jack_bauer - to print 24 hours
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		int h1, h2, m1, m2;

		h1 = h / 10;
		h2 = h % 10;

		for (m = 0; m <= 59; m++)
		{
			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			m1 = m / 10;
			m2 = m % 10;
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
		}
	}
}
