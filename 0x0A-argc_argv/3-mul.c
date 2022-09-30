#include "main.h"

/**
 * main - a program that multiplies two numbers
 * @argv: name of the command file
 * @argc: number of the arguments on the command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}
