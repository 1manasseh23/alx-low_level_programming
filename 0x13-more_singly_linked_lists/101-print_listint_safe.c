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
	const listint_t *addrs[1024];

	while (cur != NULL)
	{
		size_t i;

		for (i = 0; i < counter; i++)
		{
			if (cur == addrs[i])
			{
				printf("-> [%p] %d\n", (void *)cur, cur->n);
				return (counter);
			}
		}

		printf("[%p] %d\n", (void *)cur, cur->n);
		addrs[counter] = cur;
		counter++;
		cur = cur->next;
	}

	return (counter);
}
