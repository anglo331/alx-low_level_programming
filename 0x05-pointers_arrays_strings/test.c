#include <stdio.h>

int main(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		char j = i + '0';

		float x = i + '0';

		float f = x / 2;

		printf("%c = %f\n", j, f);
	}
	return (0);
}