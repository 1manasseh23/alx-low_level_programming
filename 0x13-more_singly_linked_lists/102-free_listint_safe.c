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
	listint_t *cur = *h;
	listint_t *addrs[1024];

	while (*h != NULL)
	{
		size_t i;
		listint_t *temp;

		for (i = 0; i < counter; i++)
		{
			if (cur == addrs[i])
			{
				*h = NULL;
				exit(98);
			}
		}

		addrs[counter] = cur;
		counter++;
		temp = cur->next;
		free(cur);
		cur = temp;
	}

	*h = NULL;
	
	return (counter);
}
