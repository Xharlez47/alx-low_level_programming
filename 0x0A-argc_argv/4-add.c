#include "main.h"

/**
 * main - a  program that adds positive numbers.
 * @argv: name of the command file
 * @argc: number of the arguments on the command line
 * Return: 0 if no umber i input , 1 if the numbers are not 2
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 + num2;
	printf("%d\n", sum);
	return (0);
}
