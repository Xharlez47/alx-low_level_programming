#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers form 0 to 14 (x10)
 *
 * Return: void
 */

void print_numbers(void)
{
	int a;
	int b;

for (b = 0; b < 10; b++)
{
	a = 0;
	while (a <= 14)
{
	if (a >= 10)
{
	_putchar(a / 10 + '0');
}
	_putchar(a % 10 + '0');
a++;
}
_putchar('\n');
}
}
