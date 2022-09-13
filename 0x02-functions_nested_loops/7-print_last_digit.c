#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: Using function and nested loops for a program
 * that "the last digit of a number"
 * @x: is an integer
 * Return: x
 */
int print_last_digit(int x)
{
int z = x % 10;

if (x < 0)
{
	z = z * -1;
}
_putchar(z + '0');
return (z);
}
