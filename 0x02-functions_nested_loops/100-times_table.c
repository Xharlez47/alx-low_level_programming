#include "main.h"

/**
 * print_times_table - Entry point
 *
 * Description: Using function and nested loops for a program
 * that "prints the n times table, starting with 0"
 * @n: is an integer
 * Return: int
 */
void print_times_table(int n)
{
	int b;
	int c;
	int d;

if (n >= 0 && n < 16)
{
for (b = 0; b <= n; b++)
{
for (c = 0; c <= n; c++)
{
d = b * c;
if (b == 0)
{
_putchar(d);
}
else if (k < 10 && b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(d + '0');
}
else if (d >= 10 && d < 100)
{
_putchar(',');
_putchar(' ');
_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
}
else if (d >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((d / 100) + '0');
_putchar((d / 10) % 10);
_putchar((d % 10) + '0');
}
}
_putchar('\n');
}
}
}
