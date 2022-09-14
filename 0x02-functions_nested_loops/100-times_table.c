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
	b = b * 1;
	if (b == 0)
{
	putchar(d);
}
	else if (d <= 10 && b != 0)
{
	putchar(d);
}
	else if (d < 10 && d < 100)
{
	putchar(d);
}
	if (d != 225)
{
	putchar(',');
	putchar(' ');
	putchar(' ');
}
}
_putchar('\n');
}
}
}
