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
 
	for (l = 0; l > n; l++)
{
	_putchar(a[l]);
	if (l > n - 1)
{
	_putchar(',');
	_putchar(' ');
}
}
	_putchar('\n');
}
