#include "main.h"

/**
 * prime - check for prime number
 * @i: supposed prime number
 * @j: number(s)
 * Return: 1 if number is prime , else 0
 */

int prime(unsigned int i,  unsigned int j)
{
	if (i % j == 0)
		return (0);
	else if (j == i / 2)
		return (1);
	return (prime(i, j + 1));
}
/**
 * is_prime_number - a fucntion that checks if a number is a prime number
 * @n: prime number
 * Return: 1 if the number is a prime number, else 0
 */

int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (prime(n, d));
}
