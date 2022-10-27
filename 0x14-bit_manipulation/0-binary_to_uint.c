#include "main.h"

/**
 * binary_to_uint - that converts a binary number to unsigned int
 * @b: points to a string
 * Return: the converted number binary
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int bval = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		bval = 2 * bval + (b[i] - '0');
	}
	return (bval);
}
