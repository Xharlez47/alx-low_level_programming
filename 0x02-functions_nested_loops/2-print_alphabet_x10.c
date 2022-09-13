#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Using function and nested loops for a program
 * that "print_alphabet in lowercase, followed by a new line x10"
 * Return: void
 */
void print_alphabet_x10(void)
{
	int ab;

for (ab = 'a'; ab <= 'z'; ab++)
{
_putchar((ab) ^ 10);
}
_putchar('\n');
}
