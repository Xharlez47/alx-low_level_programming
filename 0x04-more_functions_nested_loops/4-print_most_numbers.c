#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_most_numbers - print numbers from 0 to 9
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int a;

for (a = 0; a < 10; a++)
{
	while (a != 2 && a != 4)
{
	_putchar(a);
	_putchar('\n');
}
}
}
