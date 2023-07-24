#include "main.h"

/**
 * _puts - my own puts function like the one form stdio.h
 * @str: the input string
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (*(str + i))
	{
		char letter;

		letter = *(str + i);
		_putchar(letter);
		i++;
	}
	_putchar('\n');
}
