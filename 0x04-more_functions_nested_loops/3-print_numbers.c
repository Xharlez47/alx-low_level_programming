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

for (a = 0; a < 10; a++)
{
	_putchar('0' + a);
}
	_putchar ('\n');
}
