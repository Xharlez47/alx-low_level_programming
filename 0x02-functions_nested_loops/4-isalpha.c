#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: Using function and nested loops for a program
 * that "Returns 1 if c is alphabetic Returns 0 otherwise"
 * @c: the integer value it receives
 * Return: 1  (if true) or 0 (if false)
 */
int _isalpha(int c)
{
	int za;
	int zb;

for (za = 'A'; za <= 'Z'; za++)
{
	if (c == za)
{
	return (1);
}
}
for (zb = 'a'; zb <= 'z'; zb++)
{
	if (c == zb)
{
	return (1);
}
}
return (0);
}
