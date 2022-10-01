#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number of the arguments on the command line
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
