#include "main.h"

/**
 * main - a  program that adds positive numbers.
 * @argv: name of the command file
 * @argc: number of the arguments on the command line
 * Return: 0 if number i input , 1 if the numbers are not integers
 */

int main(int argc, char *argv[])
{
	int i;
	int res;

	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
			return (printf("Error\n"), 1);
			}
		res += atoi(argv[i]);
		}
	}
	printf("%d\n", res);
	return (0);
}
