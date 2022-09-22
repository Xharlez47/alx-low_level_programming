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
	int first_string = 0;
	int second_string = 0;

	while (dest[first_string] != '\0')
		first_string++;
	while (src[second_string] != '\0')
	{
		*(dest + first_string) = src[second_string];
		first_string++;  
		second_string++;
	}
	*(dest + first_string) = '\0';
		return (dest);
}
