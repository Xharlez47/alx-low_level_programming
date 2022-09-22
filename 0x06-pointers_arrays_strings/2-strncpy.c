#include "main.h"

/**
 * *_strncpy - Write a function that copies a string
 * @dest: destination string
 * @src: source string, gets copied into *dest
 * @n: Number of bytes of src that should be concatenated with dest
 * Description: appending one string to another
 * Return: pointer to @dst
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0' && index < n)
	{
		*(dest + index) = src[index];
		index++;
	}
	while (n > index)
	dest[index] = '\0';
	return (dest);
}
