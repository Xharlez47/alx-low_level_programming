#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @n: new integer to add
 * Return: the address of the new element, or NULL if it fails
 */

stint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *temp, *temp2;

	if (n == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	if (temp->n == NULL)
	{
		free(temp);
			return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
			return (temp);
	}
	temp2 = *head;
	while (temp2->next)
	temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
