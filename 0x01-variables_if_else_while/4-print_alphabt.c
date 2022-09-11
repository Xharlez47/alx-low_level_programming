#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -prints the alphabet in lowercase, followed by a new line
 *
 * Description: Using the main function
 * this programs prints "all alphabets except 'q' and 'e'"
 * Return: 0
 */
int main(void)
{
int xj;
for (xj = 'a'; xj <= 'z'; xj++)
{
if (xj != 'e' && xj != 'q')
	putchar(xj);
if (xj == 'z')
	putchar('\n');
}
return (0);
}
