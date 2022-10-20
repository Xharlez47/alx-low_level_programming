#include "lists.h"

/**
 * free_list -  function that frees a list_t list
 * @head: double pointer to the list_t list
 * Return: the address of the new element, or NULL if it fails
 */

void free_list(list_t *head)
{
	unsigned int index = 0;

	while(head)
	free(head->str);	
	head = head->next;
	free(head);
}
