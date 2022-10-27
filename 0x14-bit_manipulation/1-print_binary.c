#include "main.h"

/**
 * print_binary - that prints the binary representation of a number
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int position;

	for (i = 63; i >= 0; i--)
	{
		position = n >> i;
		if (position & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
		if (!j)
			_putchar('0');
}
