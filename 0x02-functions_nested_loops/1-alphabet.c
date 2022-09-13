#include "main.h"
/**
 * main - Entry point
 *
 * Description: Using function and nested loops
 * that prints " Prototype: void print_alphabet(void)"
 * Return: 0
 */
void print_alphabet(void);
int main (void)
{
	int ab;

	for (ab = 'a'; ab <= 'z'; ab++)
{
		_putchar(ab);
}
_putchar('\n');

return (0);
}
