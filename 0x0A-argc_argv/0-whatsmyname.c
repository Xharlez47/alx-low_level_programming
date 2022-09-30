#include "main.h"

/**
 * main - a program that prints its name, followed by a new line
 * @argv: name of the command file
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for  (i = 0; i < argc; i++)
	{
	puts(argv[i]);
	}
	return (0);
}
