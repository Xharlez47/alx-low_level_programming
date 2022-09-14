#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: Using function and nested loops for a program
 * that " every minute of the day of Jack Bauer, starting from 00:00 to 23:59"
 * Return: void
 */
void jack_bauer(void)
{
	int x;
	int y;

	for (x = 00; x <= 23; x++)
{
	putchar(x);
	for (y = 00; y <= 59; y++)
{
			putchar(':');
		putchar(y);
		putchar('\n');
}
}
}
