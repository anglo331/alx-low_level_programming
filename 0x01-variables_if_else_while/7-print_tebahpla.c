#include <stdio.h>

/**
 * main - nice troll man
 * Return: 0 as always
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
