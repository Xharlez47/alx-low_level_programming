#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Description: Using function and nested loops for a program
 * that "all natural numbers from n to 98, followed by a new line"
 * @n: is an integer
 * Return: int
 */
void print_to_98(int n)
{
int x, y;

if (n <= 98)
{
for (x = n; x <= 98; x++)
{
if (x != 98)
_putchar(x);
else if (x == 98)
_putchar('\n');
}
}
else if (n >= 98)
{
for (y = n; y >= 98; y--)
{
if (y != 98)
_putchar(y);
else if (y == 98)
_putchar('\n');
}
}
}
