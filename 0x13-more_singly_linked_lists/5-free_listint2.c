#include "lists.h"

/**
 * free_listint -  function that frees a list_t list
 * @head: double pointer to the list_t list
 */

void free_listint2(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (!*head)
	{
		tmp = head->next;
		free(*head);
		*head = tmp ;
	}
}
