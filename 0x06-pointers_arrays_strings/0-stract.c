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
	int i, len;

	len = string_length(dest);
	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
