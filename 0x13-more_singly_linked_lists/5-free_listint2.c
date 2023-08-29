#include "lists.h"
/**
 * free_listint2 - A function that free a list and set head to NULL
 * @head: A pointer to listint_t structure
 * Return: 0 success.
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
