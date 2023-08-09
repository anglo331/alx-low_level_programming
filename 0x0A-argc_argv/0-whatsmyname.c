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
	int i;
	char letter;

	for (i = 0; letter != '\0'; i++)
	{
		letter = argv[argc - 1][i];
		_putchar(letter);
	}

	_putchar('\n');
	return (0);
}
