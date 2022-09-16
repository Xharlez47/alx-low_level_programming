#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers form 0 to 14 (x10)
 *
 * Return: void
 */

void print_numbers(void)
{
	int aa, bb, cc;

for (bb = 1; bb < 10; bb++)
{
	for (cc = 0; c <= 14; ++cc)
{
	aa = cc;
	if (cc > 9)
{
	_putchar(1 + 48);
	aa = cc % 10;
}
_putchar(aa + 48);
}
_putchar('\n');
}
}
