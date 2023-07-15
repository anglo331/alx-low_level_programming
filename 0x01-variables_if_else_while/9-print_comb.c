#include <stdio.h>

/**
 * main - main entry
 * Return: 0 is success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 9)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
