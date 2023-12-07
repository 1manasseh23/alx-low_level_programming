#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - A function that deletes the
 * node at index index of a dlistint_t linked list.
 * @head: Pointer to first and second node
 * @index: The position whare to delete node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int j;
	dlistint_t *tmp_store;

	if (*head == NULL)
	{
		return (-1);
	}

	tmp_store = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp_store);
		return (1);
	}
	for (j = 0; j < index; j++)
	{
		if (tmp_store == NULL)
		{
			return (-1);
		}
		tmp_store = tmp_store->next;
	}
	if (tmp_store == NULL)
	{
		return (-1);
	}

	tmp_store->prev->next = tmp_store->next;
	if (tmp_store->next != NULL)
	{
		tmp_store->next->prev = tmp_store->prev;
	}
	free(tmp_store);
	return (1);
}
