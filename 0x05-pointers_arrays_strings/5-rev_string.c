#include "main.h"

/**
 * rev_string - to revers input string
 * @str: the input string
 */

void rev_string(char *str)
{
	int len = 0;
	int start, end;

	while (*(str + len))
	{
		len++;
	}

	start = 0;
	end = len - 1;

	while (start < len / 2)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
