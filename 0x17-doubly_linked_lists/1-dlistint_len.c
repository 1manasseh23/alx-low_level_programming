#include "lists.h"
/**
 * dlistint_len - A function that returns the number of
 * elements in a linked dlistint_t list
 * @h: a pointer to head of first node
 * Return: Numbers of node list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
