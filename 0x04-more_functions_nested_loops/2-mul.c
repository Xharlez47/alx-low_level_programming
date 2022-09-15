#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * mul - multiples two integers
 *
 * @a: integer
 * @b: integer
 * Return: 1
 */
int mul(int a, int b)
{
	int multi;

	if (a >= 48 && a <= 57 && b >= 48 && b <= 57)
	{
		multi = a * b;
		putchar(multi);
	}
		return (1);
}
