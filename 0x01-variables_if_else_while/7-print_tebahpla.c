#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * * main - prints alphabet in lowercase followed by a new line
 * *
 * * Description: using the main function
 * * this program prints "Prints any aiphabet in lower case"
 * * Return: 0
 */
int main(void)
{
int c;
for (c = 'z'; c >= 'a'; c--)
{
	putchar(c);
if (c == 'a')
putchar ('\n');
}
return (0);
}
