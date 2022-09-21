#include "main.h"
#include <stdio.h>

/**
 * print_square - print a square using the character #
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int r, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
		else
		{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
