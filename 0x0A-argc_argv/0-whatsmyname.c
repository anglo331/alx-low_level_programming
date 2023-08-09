#include "main.h"

int _putchar(char);

int main(int argc, char *argv[])
{
	int i,x;
	char *temp[] = argv[argc-1];
	char letter;

	
	for (i = 0 ; letter!= '\0'; i++)
	{
		_putchar(*temp[i]);
	}
	
	_putchar('\n');
	return (0);
}
