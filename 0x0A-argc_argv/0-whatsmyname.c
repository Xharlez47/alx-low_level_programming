#include "main.h"

/**
 * main - a program that prints its name, followed by a new line
 * @argv: name of the command file
 * @argc: number of the arguments on the command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for  (i = 0; i < argc; i++)
	{
	puts(argv[i]);
	}
	_putchar('\n');
	return (0);
}
