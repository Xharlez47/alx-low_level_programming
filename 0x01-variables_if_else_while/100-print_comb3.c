#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program prints all possible different combinations of two digits
 *
 * Description: Using the main function
 * that prints "all possible different combinations of two digits"
 * Return: 0
 */
int main(void)
{
int x, y;
for (x = 0; x < 9; x++)
{
	for (y = x + 1; y <= 9; y++)
{
		putchar((x % 10) + '0');
			putchar((y % 10) + '0');
	if (x != 8 && y != 9)
{
	putchar(',');
		putchar(' ');
}
}
}
putchar('\n');
return (0);
}
