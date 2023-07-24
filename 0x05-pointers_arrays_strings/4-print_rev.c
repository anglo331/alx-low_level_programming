#include "main.h"

/**
 * print_rev - to print string reversed
 * @s: input string
 */

void print_rev(char *s)
{
	int i, o;

	i = 0;
	while (*(s + 0))
	{
		i++;
		s++;
	}

	s--;

	for (o = i; o > 0; o--)
	{
		char letter = *s;

		_putchar(letter);
		s--;
	}
	_putchar('\n');
}
