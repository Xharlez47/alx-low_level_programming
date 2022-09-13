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

if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
