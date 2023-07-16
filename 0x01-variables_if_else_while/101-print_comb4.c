#include <stdio.h>

/**
 * main - is the main function
 * Return: 0 as always
 */

int main(void)
{
	int x, y, z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				if (x != y && y != z && x != z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x < 7 || y < 8 || z < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}

	putchar('\n');

	return (0);
}
