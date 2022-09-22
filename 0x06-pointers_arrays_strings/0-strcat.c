#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string, gets appended to *dest
 * Description: appending one string to another
 * Return: pointer to @dst
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int j = 0;

	while (dest[index] != '\0')
		index++;
	while (src[j] != '\0')
	{
		*(dest + index) = src[j];
		j++;
		index++;
	}
	*(dest + index) = '\0';
	return (dest);
}
