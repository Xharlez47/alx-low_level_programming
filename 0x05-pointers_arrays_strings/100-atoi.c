#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: pointer
 * Return: 0
 */

int _atoi(char *s)
{
	int i = 1;
	int j = 0, k, num;

	for (num = 0; !(s[num] >= 48 && s[num] <= 57); num++)
		{
		if (s[num] == '-')
		{
		i *= -1;
		}
		}
		for (k = num; s[k] >= 48 && s[k] <= 57; k++)
		{
		j *= 10;
		j += (s[k] - 48);
		}
		return (i * j);
}
