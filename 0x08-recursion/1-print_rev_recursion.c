#include "main.h"

/**
 * _print_rev_recursion - to print the the string reversed
 * @s: the input string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
