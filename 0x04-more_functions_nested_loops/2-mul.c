#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * mul - multiples two integers
 *
 * @a: integer
 * @b: integer
 * Return: 0
 */
int mul(int a, int b)
{
	int multi;

	while (a >= 48 && a <= 57 && b >= 48 && b <= 57)
	{
		multi = a * b;
		_putchar(multi);
	}
	return (0);
}
