#include "main.h"

/**
 * main - the main function
 * @argc: the number of passed inpust
 * @argv: the arguments as array
 *
 * Return: 0 on succses
 */

int main(int argc, char *argv[])
{
	int i, x;

	for (i = 0; i <= (argc - 1); i++)
	{
		for (x = 0; argv[i][x]; x++)
		{
			_putchar(argv[i][x]);
		}
	}

	return (0);
}
