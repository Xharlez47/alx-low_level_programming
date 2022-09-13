#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all the possible combinations of single-digit numbers
 *
 * Description: Using the main function
 * that prints " possible combinations of single-digit numbers "
 * Return: 0
 */
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
	putchar(x);
	putchar(',');
	putchar(' ');
getchar();
}
return (0);
}
