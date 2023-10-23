#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - A function that  prints all the elements of a listint_t list
 * @h: Head of the first node of the list
 *
 * Return: Number of the node
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
