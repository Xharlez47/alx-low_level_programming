#include "main.h"

/**
 * str_concat - a funcrion that concatenates two strings
 * @s1: a string given
 * @s2: another string
 * Return: NUll on failure of the function or empty string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j;
	unsigned int k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	l = j;
	for (j = 0; j <= l; k++, j++)
		str[k] = s2[j];
	return (str);
}
