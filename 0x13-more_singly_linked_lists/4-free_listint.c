#include "lists.h"
/**
 * free_listint - A function that free a linked list
 * @head: A pointer to listint_t structure
 * Return: 0 success.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}