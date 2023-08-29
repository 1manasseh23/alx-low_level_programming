#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - A function that print all the element in the list
 * @h: A pointer to listint structure
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
