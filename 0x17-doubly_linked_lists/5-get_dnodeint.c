#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to be found
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
