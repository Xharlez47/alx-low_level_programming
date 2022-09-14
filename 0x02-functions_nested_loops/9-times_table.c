#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: Using function and nested loops for a program
 * that "the 9 times table, starting with 0"
 * Return: void
 */
void times_table(void)
{
int a, b, c, d, e;

for (a = 0; a <= 9; a++)
{
for (c = 0; c <= 9; c++)
{
	d = a * c;
	b = d / 10;
	e = d % 10;
if (c == 0)
{
	_putchar('0');
}
else if (d < 10)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(e + '0');
}
else
{
	_putchar(',');
	_putchar(' ');
	_putchar(b + '0');
	_putchar(e + '0');
}
}
_putchar('\n');
}
}
