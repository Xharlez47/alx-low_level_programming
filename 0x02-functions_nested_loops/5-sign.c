#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: Using function and nested loops for a program
 * that "prints the sign of a number"
 * @n: the integer value it receives
 * Return: 1 and prints '+', 0 and prints 0 or '-1' and prints '-'
 */
int print_sign(int n)
{
	int x = 0;
	int y;
	int z;

for (y < 0; y != 0; y--)
{
	if (n == y)
{
	_putchar('-');
	return (-1);
}
}
for (z > 0; z > 10; z++)
{
	if (n == z)
{
		_putchar('+');
	return (1);
}
}
if (n == x)
{
	_putchar('0');
	return (0);
}
}
