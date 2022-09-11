#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Description: using the main function
 * this programs prints " all alphabets except 'q' and 'e'"
 * return: 0
*/
int main(void)
{
int xj;
for (xj = 'a'; xj <= 'z'; xj++)
{
if (xj != 'e' && xj != 'q')
	putchar(xj);
		putchar('\n');
}
return (0);
}
