#include "lists.h"

/**
 *  print_listin - a function that prints all the elements of a list_t list
 *  @h: pointer to the node
 *  Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int num;

	for (num = 0; h; num++)
	{
		printf("%d", h->n);
		h = h->next;
	}
	return (num);
}
