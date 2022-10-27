#include "lists.h"

/**
 * free_listint_safe - that frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int dif;
	listint_t *tmp;

	if (!h || *h == NULL)
		return (0);
	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tmp = (*h)->next;
			*h = tmp;
			i++;
		}
		else
		{
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
return (i);
}
