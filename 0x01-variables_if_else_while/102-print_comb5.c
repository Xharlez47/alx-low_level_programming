#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all possible combinations of 2 two-digit numbers.
 *
 * Description: Using the main function
 * that prints "The numbers should range from 0 to 99"
 * Return: 0
 */
int main(void)
{
int x, y;
for (x = 0; x < 100; x++)
{
	for (y = x + 1; y < 100; y++)
{
	putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		putchar(' ');
		putchar((y / 10) + '0');
			putchar((y % 10) + '0');
	if (x != 98 || y != 99)
{
	putchar(',');
		putchar(' ');
}
}
}
putchar('\n');
return (0);
}
