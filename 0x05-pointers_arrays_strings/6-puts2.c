#include "main.h"

/**
 * puts2 - to print even char from input string
 * @str: input string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		char temp = str[i];

		if (i % 2 == 0)
		{
			_putchar(temp);
		}
		i++;
	}
	_putchar('\n');
}
