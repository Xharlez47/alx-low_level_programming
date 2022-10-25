#include "lists.h"

/**
 * sum_listint - that returns the sum of all the data (n) of a listint_t
 * @head: pointer
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (!head)
	{
		total = total + head->n;
		head = head->next;
	}
	return (total);
}
