#include <stdio.h>

/**
 * main - putchar numbers
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
