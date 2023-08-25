#include "lists.h"
/**
 * list_len - A function that get the nodes of linked list
 * @h: head of linkd list
 * Return: number of nodes as size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
