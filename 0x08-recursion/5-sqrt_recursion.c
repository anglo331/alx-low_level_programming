#include "main.h"

int _sqrt(int n, int g);

/**
 * _sqrt_recursion - to calculate
 * @n: intput int
 * Return: final ansser
 */

int _sqrt_recursion(int n)
{
	int f;

	if (n < 0)
		return (-1);

	f = _sqrt(n, 0);

	return (f);
}

/**
 * _sqrt - the acutale function
 * @n: input tartget jj
 * @g: the gusse of the correct ansser
 *
 * Return: the gusse if correct
 */

int _sqrt(int n, int g)
{
	int temp = g * g;

	if (temp > n)
		return (-1);
	else if (temp == n)
		return (g);

	return (_sqrt(n, g + 1));
}
