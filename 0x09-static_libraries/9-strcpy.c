#include "main.h"

/**
 * *_strcpy - that copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = -1;

	do {
	l++;
	dest[l] = src[l];
}
	while (src[l] != '\0');
	return (dest);
}
