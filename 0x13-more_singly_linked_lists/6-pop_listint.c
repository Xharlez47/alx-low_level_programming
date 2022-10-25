#include "lists.h"

/**
 *  pop_listint -  function that deletes the head node of a listint_t
 *  @head: double pointer
 *  Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *todel;
	int data;

	if (!*head)
		return (0);
	todel = *head;
	*head = head->next;
	data = todel->n;
	free(todel);
	return (data);
}
