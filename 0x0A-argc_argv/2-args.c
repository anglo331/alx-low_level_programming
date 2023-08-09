#include "main.h"
#include <stdio.h>

/**
 * main - to print the passed argument
 * @argc: the number of argument
 * @argv: array of arguments
 *
 * Return: 0 on succses
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
