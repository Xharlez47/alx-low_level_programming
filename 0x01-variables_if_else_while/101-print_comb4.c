#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints all possible different combinations of 3 digits
 *
 * Description: Using the main function
 * that prints "all possible different combinations of three digits."
 * Return: 0
 */
int main(void)
{
int x, y, z;
for (x = 0; x < 8; x++)
{
	for (y = x + 1; y < 9; y++)
{
	for (z = y + 1; z <= 9; z++)
{
		putchar(x % 10);
			putchar(y % 10);
			putchar(z % 10);
	if (x != 7)
{
	putchar(',');
		putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}