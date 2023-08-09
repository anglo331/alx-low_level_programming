#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - to multply the given numbers
 * @argc: the number of args
 * @argv: array of passed args
 * Return: 0 on succses else 1
 */

int main(int argc, char *argv[])
{
	int x, y;

	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", (x * y));
	return (0);
}
