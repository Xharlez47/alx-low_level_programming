#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @src: pointer
 * @dest: destination pointer
 * @n: the amount of the memory byte
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
