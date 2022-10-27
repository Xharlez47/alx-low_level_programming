#include "main.h"

/**
 * get_bit - that returns value of a bit at a given index
 * @n: decimal parameter
 * @index: index
 * Return: value or -1 if err0r occur
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
