#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - A function that  reverses a listint_t linked list
 * @head: Pointer to listint_t to be free
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;

		(*head)->next = prev;

		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
