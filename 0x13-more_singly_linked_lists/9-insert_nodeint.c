#include "list.h"

/**
 * insert_nodeint_at_index - that inserts a new node at a given position
 * @head: the pointer
 * @n: integer number
 * @idx: the position to insert
 * Return: Null on failure to insert t at the idx position
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (; i < idx - 1 && tmp != NULL; i++)
			tmp = tmp->next;
			if (tmp == NULL)
				return (NULL);
	}
	new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
			return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
		return (new);
}
