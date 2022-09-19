#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers form 0 to 14 (x10)
 *
 * Return: void
 */

void print_numbers(void)
{
int n, c, t;

for (t = 0; t <= 10; ++t)
{
	for (c = 0; c <= 14 ++c)
{
	n = c;
	if (c > 9)
{
	_putchar(1 + 48);
	n = c % 10;
}
	_putchar(n + 48);
}
_putchar('\n');
}
}
