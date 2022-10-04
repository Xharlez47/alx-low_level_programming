#include "main.h"

/**
 * create_array -  a function that creates an array of chars, and
 * initializes it with a specific char
 * @size: size of function
 * @c: string
 * Return: Null if size is 0 or it fails, or pointer of array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = (char *)malloc(size);
	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
		return (ar);
}
