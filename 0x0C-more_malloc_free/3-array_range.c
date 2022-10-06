#include "main.h"

/**
 * array_range - creates an array of integers, ordered from @min to @max
 * @min: first and minimum value of array
 * @max: last and maximum value of array
 * Return: pointer to the newly created array (SUCCESS),
 * NULL if @min > @max (FAILURE) ,
 * NULL if insufficient memory was available (FAILURE)
 */

int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
	return ('\0');
	j = (max - min) + 1;
	ptr = malloc(sizeof(int) * j);
	if (ptr == NULL)
		return ('\0');
	for (i = 0; i < j; i++)
		ptr[i] = min + i;
	return (ptr);
}
