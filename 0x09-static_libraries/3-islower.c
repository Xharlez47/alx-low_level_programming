#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: Using function and nested loops for a program
 * that "Returns 1 if c is lowercase Returns 0 otherwise"
 * @c: the integer value it receives
 * Return: 1  (if true) or 0 (if false)
 */
int _islower(int c)
{
	int za;

	for (za = 'a'; za <= 'z'; za++)
{
	if (c == za)
{
	return (1);
}
}
return (0);
}
