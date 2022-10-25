#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a
 * listint_t linked list
 * @index: integer
 * @head: pointer
 * Return: nth node of a listint_t or NULL if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
