#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 * @h: pointer to the node (first node)
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int index;

	for (index = 0; index < h->len; index++)
		h = h->next;
	return (index);
}
