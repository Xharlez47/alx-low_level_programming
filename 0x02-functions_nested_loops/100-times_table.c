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
	int c = (b * n);

	for (n = 0; n <= 15; n++)
{
	for (b = 0; b <= 15; b++)
{
	if (b <= n)
{
	_putchar(c);
	if (c != 225)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}
}
_putchar('\n');
}
}
}
