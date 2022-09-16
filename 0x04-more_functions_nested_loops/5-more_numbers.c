#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_numbers - print numbers form 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int a;
	int b;

for (a = 0; a <= 14; a++)
{
	b = 0;
	while (b <= 10)
{
	_putchar('0' + a);
}
b++;
}
_putchar ('\n');
}
