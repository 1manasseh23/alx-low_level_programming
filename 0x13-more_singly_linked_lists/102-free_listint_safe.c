#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - A function that frees a listint_t list
 * @h: Pointer to th listint_t struc
 * Return: The size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;

	while (*h)
	{
		listint_t *temp = *h;
		*h = (*h)->next;
		free(temp);
		counter++;
	}

	return (counter);
}
