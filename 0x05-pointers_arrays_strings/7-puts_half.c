#include "main.h"
/**
 * puts_half - to print the seconde half of given string
 * @str: input string
 */

void puts_half(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
		len += 1;

	if (len != 0)
	{
		for (i = len / 2; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
