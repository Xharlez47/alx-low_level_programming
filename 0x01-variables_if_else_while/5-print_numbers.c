#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -program that prints all single digit numbers of base ten starting
 *
 * Description: Using the main function
 * this program prints "single digits from base ten beginning from zero"
 * Return: 0
 */
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
	putchar(x);
if (x == '9')
	putchar('\n');
}
return (0);
}
