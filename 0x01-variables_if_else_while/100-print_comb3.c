#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Description: Using the main function
 * that prints " prints all the numbers of base 16 in lowercase"
 * Return: 0
 */
int main(void)
{
int x, y;
for (x = 0; x <= 9; x++)
{
for (y = 1; y <= 8; y++)
	while (x != y)
		putchar(x);
			putchar(y);
}
return (0);
}
