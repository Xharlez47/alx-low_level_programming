#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string, gets appended to *dest
 * Description: appending one string to another
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int index  = 0;
	int len = 0;

	while (dest[index++])
		len++;
		for (index = 0; src[index]; index++)
		dest[len++] = src[index];
	return (dest);
}
