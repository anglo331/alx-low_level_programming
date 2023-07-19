#include "main.h"

/**
 * _abs - to get the absoliute function of the number
 * @n: input number
 * Return: the absulete number
 */

int _abs(int n)
{
	if (n == 0)
		return (n);
	else if (n < 0)
		return (n * -1);
	else
		return (n);
}
