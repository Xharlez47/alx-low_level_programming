#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers form 0 to 14 (x10)
 *
 * Return: void
 */

void print_numbers(void)
{
int n, c, a;

for (n = 0; n < 10; n++)
{
	for (c = 0; c <= 14; c++)
{
	a = c;
	if (c > 9)
{
	_putchar(1 + 48);
	a = c % 10;
}
_putchar(a + 48);
}
_putchar('\n');
}
}
