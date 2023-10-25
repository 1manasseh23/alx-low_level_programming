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
	listint_t *temp;
	unsigned int i;
	listint_t *cnode;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	else
	{
		temp = *head;
		for (i = 0; i < index - 1; i++)
		{
			if (temp->next != NULL)
			{
				return (-1);
			}
			temp = temp->next;
		}
		cnode = temp->next;
		temp->next = cnode->next;
		free(cnode);
	}
	return (1);

}
