#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: pointer to the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	;
	for (l /= 2; str[l] != '\0'; l++)
{
	_putchar(str[l]);
}
	_putchar('\n');
}
