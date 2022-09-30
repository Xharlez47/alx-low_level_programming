#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - checks if an input is a uppercase letter
 *
 * @c: letter
 * Return: 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
