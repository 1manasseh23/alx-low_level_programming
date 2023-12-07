#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - A function that print stint_t list
 * @h: A pionter to first node
 * Return: Numbers of list
 */
size_t print_dlistint(const dlistint_t *h)
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
