#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new;
	unsigned int index;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		new->str = strdup(str);
		new->len = len;
		new->next = (*head);
		(*head) = new;
	}
	return (*head);
}
