#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: pointer
 * Return: 0
 */

int _atoi(char *s)
{
	int i = 1;
	int j = 0;

	while (s[0] != '\0')
	{
		if (s[0] == '-')
		i *= -1;
		else if (s[0] >= '0' && s[0] <= '9')
		j = (j * 10) + (s[0] - '0') * i;
		else if (j)
			break;
		s++;
	}
	return (j);
}
