#include "function_pointers.h"

/**
 * print_name - to print the name using the passed funtion pointer
 * @func: funtion pointer
 * @name: name to print
 */

void print_name(char *name, void (*func)(char *name))
{
	func(name);
}
