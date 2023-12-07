#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - A function that adds a new
 * node at the end of a dlistint_t list
 * @head: Pointto a point of the node list
 * @n: Value of the new adding node
 * Retun: Address of new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_end_node, *tmp_store;

	add_end_node = malloc(sizeof(dlistint_t));
	if (add_end_node == NULL)
	{
		return (NULL);
	}

	add_end_node->n = n;
	add_end_node->next = NULL;

	if (*head == NULL)
	{
		add_end_node->prev = NULL;
		*head = add_end_node;
		return (add_end_node);
	}

	tmp_store = *head;
	while (tmp_store->next != NULL)
	{
		tmp_store = tmp_store->next;
	}
	tmp_store->next = add_end_node;
	add_end_node->prev = tmp_store;

	return (add_end_node);
}
