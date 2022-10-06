#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to include of @s2
 * Return: newly allocated space in memory, NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		len1 = 0;
	for (len1 = 0; s1[len1]; ++len1)
		;
	if (s2 == NULL)
		len2 = 0;
	for (len2 = 0; s2[len2]; ++len2)
		;
	if (len2 > n)
		len2 = n;
	ptr = malloc((len1 + len2 + 1) * sizeof(char));
		if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len2; i++)
	ptr[len1 + i] = s2[i];
	ptr[len1 + len2] = '\0';
	return (ptr);
}
