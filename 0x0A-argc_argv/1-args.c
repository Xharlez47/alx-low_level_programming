#include "main.h"

/**
 * arrayv - Prints the number of string
 * @i: integer index
 * Return: void
 */

void arrayv(int i)
{
	if (i / 10)
	{
		arrayv(i / 10);
		_putchar(i + 48);
	}
}
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number of the arguments on the command line
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	arrayv(argc - 1);
	_putchar(argc);
	_putchar('\n');
	return (0);
}
