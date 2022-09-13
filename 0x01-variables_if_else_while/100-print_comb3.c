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
while ('x' != 'y')
{
	for (x = '0'; x <= '8'; x++)
		putchar(x);
	for (y = '1'; y <= '9'; y++)
		putchar(y);
if ('x' != '8' && 'y' != '9')
{
	putchar(',');
putchar(' ');
}
}
return (0);
}
