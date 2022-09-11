#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -prints alphabet is lowercase and then in uppercase
 *
 * Description: using main function
 * this program prints "alphabets in lower case and then in uppercase"
 * Return: 0
 */
int main(void)
{
int xh;
int cj;
for (xh = 'a'; xh <= 'z'; xh++)
{
	putchar(xh);
for (cj = 'A'; cj <= 'Z'; cj++)
	putchar(cj);
if (cj == 'Z')
	putchar('\n');
}
return (0);
}
