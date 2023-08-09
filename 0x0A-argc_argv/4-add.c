#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - to add args numbers
 * @argc: n of args
 * @argv: array of args
 * Return: 0 if succsess
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *y = argv[i];

		if (*y <= 'z' && *y >= 'a')
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(y);
	}
	printf("%d\n", sum);
	return 0;
}
