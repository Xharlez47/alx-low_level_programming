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
	int a = 0;

while (a < 10)
{
if (a != 2 && a != 4)
{
	_putchar('0' + a);
}
a++;
}
	_putchar('\n');
}
