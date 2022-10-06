#include "main.h"

/**
 * str_concat - a funcrion that concatenates two strings
 * @s1: a string given
 * @s2: another string
 * Return: NUll on failure of the function or empty string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j;
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + s1_len) != '\0')
		s1_len++;
	while (*(s2 + s2_len) != '\0')
		s2_len++;
	ptr = malloc(1 + (s1_len * sizeof(s1)) + (s2_len * sizeof(s2)))
	if (ptr == NULL)
		return ('\0');
	for (i = 0; i < s1_len; i++)
		ptr[i] = *(s1 + i);
	for (j = 0; j < s2_length; j++, i++)
		ptr[i] = *(s2 + j);
		return (ptr);

}
