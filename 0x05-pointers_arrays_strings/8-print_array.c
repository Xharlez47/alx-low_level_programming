#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: pointer
 * @n: is the number of elements of the array to be printed (integer)
 * Description: numbers must be separated by comma and space
 * Return: void
 */

void print_array(int *a, int n)
{
	int l = 0;

	for (n--; n >= 0; n--, l++)
{
	_putchar(a[l]);
	if (n > 0)
{
	_putchar(',');
	_putchar(' ');
}
}
	_putchar('\n');
}
