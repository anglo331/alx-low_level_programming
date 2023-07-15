#include <stdio.h>

/**
 * main - printing from a to z except q and e
 * Return: 0 if success
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
			continue;
		}
		putchar(x);
	}

	putchar('\n');

	return (0);
}
