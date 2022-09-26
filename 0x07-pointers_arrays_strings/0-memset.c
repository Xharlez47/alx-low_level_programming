#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: pointer
 * @b: the constant byte
 * @n: the amount of the memory byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	*s = b;

	while (n > i)
		_putchar(s[i]);
	i++;
return (s);
}
