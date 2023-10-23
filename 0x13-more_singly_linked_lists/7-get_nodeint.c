#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the node
 * of a listint_t linked list
 * @head: Pointerto data struct
 * @index: An input to count length
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index_count = 0;

	while (head != NULL)
	{
		if (index_count == index)
		{
			return (head);
		}

		head = head->next;
		index_count++;
	}

	return (NULL);
}
