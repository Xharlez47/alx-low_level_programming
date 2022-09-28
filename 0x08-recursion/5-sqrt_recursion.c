#include "main.h"

/**
 * sqrt_check - Checks for the square root of c
 * @i: integer
 * @j: Number to find sqrt of
 * Return: -1 or sqrt of c
 */

int sqrt_check(int i, int j)
{

	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (sqrt_check(i + 1, j));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 * Return: -1 if y is lower than 0
 */

int _sqrt_recursion(int n)
{

	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
