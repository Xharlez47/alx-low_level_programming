#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Using function and nested loops for a program
 * that "print_alphabet in lowercase, followed by a new line"
 * Return: void
 */
void print_alphabet(void)
{
	int ab;

	for (ab = 'a'; ab <= 'z'; ab++)
{
		_putchar(ab);
}
_putchar('\n');
}
