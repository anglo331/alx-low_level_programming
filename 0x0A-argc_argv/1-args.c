#include "main.h"
#include <stdio.h>

/**
 * main - to print the number of arguments
 * @argc: the number of arguments
 * @argv: the valuse
 * Return: 0 on succses
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
