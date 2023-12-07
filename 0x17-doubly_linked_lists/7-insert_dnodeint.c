#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/**
 * insert_dnodeint_at_index - A function that inserts
 * a new node at a given position
 * @h: Pionter to the first node in the list
 * @idx: Index whare to insert the new node
 * @n: Value to asign
 * Return: Address of the insert node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int j;
	dlistint_t *tmp_store;
	dlistint_t *inst_node;

	if (h == NULL)
	{
		return (NULL);
	}
	inst_node = malloc(sizeof(dlistint_t));

	if (inst_node == NULL)
	{
		return (NULL);
	}
	inst_node->n = n;
	if (idx == 0)
	{
		inst_node->next = *h;
		inst_node->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = inst_node;
		}
		*h = inst_node;
		return (inst_node);
	}

	tmp_store = *h;
	for (j = 0; tmp_store != NULL && j < idx - 1; j++)
	{
		tmp_store = tmp_store->next;
	}
	if (tmp_store ==  NULL)
	{
		free(inst_node);
		return (NULL);
	}
	inst_node->next = tmp_store->next;
	inst_node->prev = tmp_store;
	if (tmp_store->next != NULL)
	{
		tmp_store->next->prev = inst_node;
	}
	tmp_store->next = inst_node;

	return (inst_node);
}
