#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
