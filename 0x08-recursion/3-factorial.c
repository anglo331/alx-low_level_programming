#include "main.h"
#include <stdio.h>
/**
 * factorial - to claculate hte factorial of givin number
 * @n: the input number
 * Return: return the final ansser
 */

int factorial(int n)
{
	int x, temp = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	x = factorial(n - 1);
	temp = n * x;
	return (temp);
}
