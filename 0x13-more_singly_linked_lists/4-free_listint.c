#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - A function that frees a listint_t list
 * @head: Pointer to list to print
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *free_node;

	while (head != NULL)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}
