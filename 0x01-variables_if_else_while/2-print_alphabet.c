#include <stdio.h>

/**
 * main - it is the main entry point
 *
 * Return: 0 always on success
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
