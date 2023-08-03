#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - to calculate the power using recursion function
 * @x: is the beas
 * @y: is the power
 * Return: the the final ansser
 */

int _pow_recursion(int x, int y)
{
	int temp = 1;

	if (y == 0)
		return (1);
	else if (x == 1)
		return (1);
	else if (y < 0)
		return (-1);

	if (y > 0)
	{
		temp *= _pow_recursion(x, y - 1);
		temp *= x;
	}

	return (temp);
}
