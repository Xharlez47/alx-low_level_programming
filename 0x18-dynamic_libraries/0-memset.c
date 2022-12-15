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
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
