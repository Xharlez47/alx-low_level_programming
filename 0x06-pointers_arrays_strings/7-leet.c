#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @c: String of variable pointer
 * Return: String that is encoded
 */

char *leet(char *c)
{
	char *ch = c;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	int values[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(letters) / sizeof(char); i++)
		{
			if (*c == letters[i] || *c == letters[i] + 32)
			{
				*c = 48 + values[i];
			}
		}
		c++;
	}
	return (ch);
}
