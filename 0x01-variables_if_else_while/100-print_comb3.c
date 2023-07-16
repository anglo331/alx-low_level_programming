#include <stdio.h>

/**
 * main - made to print unique numbers
 * Return: 0 is success
 */

int main(void)
{
	int i, j;

	i = 0;
	while (i < 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 8 || j < 8)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
