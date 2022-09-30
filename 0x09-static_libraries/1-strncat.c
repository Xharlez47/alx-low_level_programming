#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string, gets appended to *dest
 * @n: Number of bytes of src that should be concatenated with dest
 * Description: appending one string to another
 * Return: pointer to @dst
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int j = 0;

	while (dest[index] != '\0')
		index++;
	while (src[j] != '\0' && n != j)
	{
		*(dest + index) = src[j];
		j++;
		index++;
	}
	*(dest + index) = '\0';
	return (dest);
}
