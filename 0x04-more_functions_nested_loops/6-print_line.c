#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of lines
 * Return: n
 */
void print_line(int n)
{
	for (n = 1; n > 1; ++n)
{
	_putchar('_');
	if (n <= 0)
{
	_putchar('\n');
}
}
}
