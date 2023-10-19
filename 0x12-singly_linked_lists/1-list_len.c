#include "lists.h"
#include <stdio.h>

/**
 * list_len - A function that return the number of list_t element
 * @h: THe pointer to the first node
 * Return: the number of the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
