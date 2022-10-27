#include "main.h"

/**
 * flip_bits - that number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: parameter
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flip_num = 0;
	unsigned long int j;

	j = sizeof(unsigned long int) * 8;
	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			flip_num = flip_num + 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (flip_num);
}
