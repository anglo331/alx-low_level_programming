#include "main.h"

/**
 * _isupper - to chick if the letters is upper case
 * @c: is the charchter
 * Returen: 1 if true 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
