#include "main.h"

/**
 *  main - Entry point
 *
 * Description: Using function and nested loops for a program
 * that print "the first 50 Fibonacci numbers, starting with 1 and 2"
 * Return: 0
 */
int main(void)
{
long int a, b, c, next;
b = 1;
c = 2;
for (a = 1; a <= 50; ++a)
{
if (b != 20365011074)
{
printf("%ld, ", b);
}
else
{
printf("%ld\n", b);
}
next = b + c;
b = c;
c = next;
}
return (0);
}
