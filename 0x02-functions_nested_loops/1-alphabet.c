#include "main.h"

/**
 * main - is to test the alphabet function
 * Return: 0 on succsess
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
