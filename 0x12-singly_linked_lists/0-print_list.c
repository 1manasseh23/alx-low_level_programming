#include "lists.h"
#include <stdio.h>
/**
 * print_list - A functin that print all the element of list_t list
 * @h: A pointer to the first element of the list
 * Return: List of node
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;

		count++;
	}
	return (count);
}
