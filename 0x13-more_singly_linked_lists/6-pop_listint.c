#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - A function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: The pointer to the structur
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
	{
		return (data);
	}

	temp = *head;

	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
