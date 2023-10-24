#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - A function that prints a listint_t linked list
 * @head: Pointer to the node struct list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cur = head;
	size_t counter = 0;
	const listint_t **addrs = NULL;

	while (cur)
	{
		size_t i;
		int found = 0;

		for (i = 0; i < counter; i++)
		{
			if (cur == addrs[i])
			{
				found = 1;
				break;
			}
		}

		if (found)
		{
			printf("[%p] %d\n", (void *)cur, cur->n);
			break;
		}

		printf("[%p] %d\n", (void *)cur, cur->n);

		counter++;
		addrs = realloc(addrs, counter * sizeof(listint_t *));
		if (!addrs)
		{
			free(addrs);
			exit(98);
		}
		addrs[counter - 1] = cur;
		cur = cur->next;
	}

	free(addrs);

	return (counter);
}
