#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers form 0 to 14 (x10)
 *
 * Return: void
 */

void print_numbers(void)
{
char n, c;

int aa = 0;

while (aa < 10)
{
for (n = 0; n <= 14; n++)
{
c = n;
if (n > 9)
{
	_putchar('1');
	c = n % 10;
}
_putchar('0' + c);
}
_putchar('\n');
aa++;
}
}
