#include "lists.h"

/**
 * free_list -  function that frees a list_t list
 * @head: double pointer to the list_t list
 * Return: the address of the new element, or NULL if it fails
 */

void free_list(list_t *head)
{
	while(head)
	{
		head = head->next;
		free(head->str);
		free(head);
	}
}
