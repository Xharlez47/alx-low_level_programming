#include "lists.h"

/**
 * insert_nodeint_at_index - that inserts a new node at a given position
 * @head: the pointer
 * @n: integer number
 * @idx: the position to insert
 * Return: Null on failure to insert t at the idx position
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
			return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;
		return (new);
}
