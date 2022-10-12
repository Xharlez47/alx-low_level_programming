#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer
 * @array: is the pointer
 * @size: is the size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, *j;

	if (array == NULL || cmp == NULL)
		return;
	if (size <= 0)
		return (-1);
	for (i = 0; i <= size; i++)
		(*cmp)(array[i]) = j[i];
	return (0);
}
