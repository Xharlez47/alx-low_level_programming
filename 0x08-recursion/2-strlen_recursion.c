#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer
 * Return: the length of a sting
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
	_strlen_recursion(s + 1);
	_putchar(i);
	}
	return (*(s + i));
}
