#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - A function that returns the nth
 * node of a dlistint_t linked list
 * @head: Pointer to the first node in the list
 * @index: Index of returning node
 * Return: Address of the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int reader = 0;

	while (head != NULL)
	{
		if (reader == index)
		{
			return (head);
		}

		head = head->next;
		reader++;
	}

	return (NULL);
}
