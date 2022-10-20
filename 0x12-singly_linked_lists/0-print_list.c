#include "lists.h"

/**
 *  print_list - a function that prints all the elements of a list_t list
 *  @h: pointer to the node
 *  Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num;

	for (num = 0; h; num++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (num);
}
