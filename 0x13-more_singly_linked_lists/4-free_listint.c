#include "lists.h"

/**
 * free_listint -  function that frees a list_t list
 * @head: double pointer to the list_t list
 * Return: the address of the new element, or NULL if it fails
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
