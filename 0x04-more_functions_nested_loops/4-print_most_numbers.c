#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_most_numbers - print numbers form 0 to 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

for (a = 0; a <= 9; a++)
{
	if (a != 2 && a != 4)
{
	putchar(a);
}
}
	if (a == 9)
{
	putchar('\n');
}
}
