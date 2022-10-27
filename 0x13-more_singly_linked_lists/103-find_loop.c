#include "lists.h"

/**
 * find_listint_loop - that finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *out = head;
	listint_t *in = head;

	if (!head)
		return (NULL);
	while (out && in && in->next)
	{
		in = in->next->next;
		out = out->next;
		if (in == out)
		{
			out = head;
			while (out != in)
			{
				out = out->next;
				in = in->next;
			}
			return (in);
		}
	}
	return (NULL);
}
