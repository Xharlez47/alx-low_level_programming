#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: parameters
 * Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = n; i > 0; va_arg(ap, int))
		_putchar(i);
	va_end(ap);
	_putchar('\n');
	return (0);
}
