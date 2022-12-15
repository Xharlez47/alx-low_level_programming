#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - checks if an input is a uppercase letter
 *
 * @c: letter
 * Return: 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
