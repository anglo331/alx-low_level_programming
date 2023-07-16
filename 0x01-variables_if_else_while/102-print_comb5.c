#include <stdio.h>

/**
 * main - xs a functxon ??
 *
 * Return: 0 as always
 */

int main(void)
{
	int x, y;

	x = 0;
	while (x <= 98)
	{
		y = 0 + 1;

		while (y <= 99)
		{
			if (x < y)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x < 98 || y < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
	return (0);
}
