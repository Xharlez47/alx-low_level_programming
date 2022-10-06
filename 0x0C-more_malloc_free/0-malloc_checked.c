#include "main.h"

/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: positive integers
 * Return: 98 if it fails, a pointer if it works
 */

void *malloc_checked(unsigned int b)
{
	void *pr;

	pr = malloc(b);
	if (pr == NULL)
		exit(98);
	return (pr);
}
