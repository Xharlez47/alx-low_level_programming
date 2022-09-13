#include "main.h"
/**
 * main - Entry point
 *
 * Description: Using function and nested loops
 * that prints " Prototype: void print_alphabet(void)"
 * Return: 0
 */
int main(void)
{
	void print_alphabet(void);
	int ab;

	for (ab = 'a'; ab <= 'z'; ab++)
{
		_putchar(ab);
}
_putchar('\n');

return (0);
}
