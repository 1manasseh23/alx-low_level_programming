#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - A function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: Pionter to the node in list
 * Rrturn: Sum of numbers add
 */
int sum_dlistint(dlistint_t *head)
{
	int vol = 0;
	dlistint_t *tmp_store = head;

	while (tmp_store != NULL)
	{
		vol += tmp_store->n;
		tmp_store = tmp_store->next;
	}
	return (vol);
}
