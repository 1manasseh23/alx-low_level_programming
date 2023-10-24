#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - A funtion that deletes the node
 * at index index of a listint_t linked list.
 * @head: APointer to th struct
 * @index: The index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *cur;
	unsigned int i = 0;

	if (*head == NULL || index <= 0)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	cur = *head;
	prev = NULL;

	while (cur != NULL && i < index)
	{
		prev = cur;
		cur = cur->next;
		i++;
	}
	if (cur == NULL)
		return (-1);

	prev->next = cur->next;
	free(cur);
	return (1);
}
