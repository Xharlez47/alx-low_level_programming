#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n:  the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (separator != NULL)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	if (n)
		printf("%d\n", va_arg(ap, int));
	else
		printf("\n");
	va_end(ap);
}
