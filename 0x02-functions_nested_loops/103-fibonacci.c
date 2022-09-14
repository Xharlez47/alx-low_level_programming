#include "main.h"

/**
 *  main - Entry point
 *
 * Description: Using function and nested loops for a program
 * that "prints the sum of the even-valued terms, followed by a new line"
 * Return: 0
 */
int main(void)
{
int w;
unsigned long int x, y, next, sum;
x = 1;
y = 2;
sum = 0;
for (w = 1; w <= 33; ++w)
{
if (x < 4000000 && (x % 2) == 0)
{
sum = sum + x;
}
next = x + y;
x = y;
y = next;
}
printf("%lu\n", sum);
return (0);
}
