#include "lists.h"
/**
 * listint_len - A function that returns the number of elements
 * in a linked listint_t list
 * @h: Pointer to the next note in the list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
