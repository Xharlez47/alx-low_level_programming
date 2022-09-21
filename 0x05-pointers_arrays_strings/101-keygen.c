#include "main.h"

/**
 * main - generates random valid passwords
 * Return: 0
 */

int main(void)
{
	int num = 0;
	int r = 0;
	char k[200];
	char *keygen = k;

	srand(time(NULL));
	while (num < 2645)
	{
		r = rand() % 122;
		if (r > 32)
		{
			*keygen = r;
			keygen = keygen + 1;
			num += r;
		}
	}
		*keygen = (2772 - num);
		*(keygen + 1) = '\n';
		printf("%s", k);
	return (0);
}
