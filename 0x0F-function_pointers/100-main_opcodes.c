#include "function_pointers.h"

/**
 * main - Prints the opcodes of this function
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int n, i;
	int (*p)(int, char **) = &main;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n < 0)
		{
			printf("Error\n");
			exit(2);
		}
		for (i = 0; i < n; i++)
		printf("%02x%c",
		(unsigned char)*((char *)p + i), i < n - 1 ? ' ' : '\n');
	}
	else 
	{
		printf("Error\n");
		exit(1);
	}
	return (0);
}
