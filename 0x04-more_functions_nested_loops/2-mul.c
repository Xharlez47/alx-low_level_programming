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

	if (a <= '9')
	{
	if (b <= '9')
	{
		multi = a * b;
		putchar(multi);
	}
	return (0);
	}
}
