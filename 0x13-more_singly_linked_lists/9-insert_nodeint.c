#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - A function thatinserts a new node
 * at a given position
 * @head: Pointer to the struct
 * @idx: Index to be inserted
 * @n: An input new node
 * Return: 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *cur = *head;
	unsigned int i = 0;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (cur != NULL && i < idx - 1)
	{
		cur = cur->next;
		i++;
	}

	if (cur == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = cur->next;
	cur->next = new_node;

	return (new_node);
}
