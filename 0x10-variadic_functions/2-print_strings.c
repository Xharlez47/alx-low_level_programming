#include "variadic_functions.h"

/**
 * print_strings -  function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n:  the number of integers passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		str = va_arg(ap, char *);
		if (!separator)
			printf("%s", str ? str : "(nil)");
		else
			printf("%s%s", str ? str : "(nil)", separator);
	}
	if (n)
	{
		str = va_arg(ap, char *);
		printf("%s\n", str ? str : "(nil)");
	}
	else
		printf("\n");
	va_end(ap);
}
