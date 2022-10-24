#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list_t
 * @h: pointer to the node (first node)
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int index;

	for (index = 0; h; index++)
		h = h->next;
	return (index);
}
