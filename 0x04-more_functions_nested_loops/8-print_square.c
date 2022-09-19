#include "main.h"
#include <stdio.h>

/**
 * print_square - print a square using the character #
 * @size: size of the square
 * Return: nothing
 */
void print_square(int size)
{
	int r, c;

for (r = 1; r <= size; ++r)
{
for (c = 1; c <= size; ++c)
	_putchar('#');
	_putchar('\n');
}
}
