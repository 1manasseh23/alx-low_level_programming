#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - A funtion that  frees a listint_t list
 * @head: The pointer to structure list
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *free_list;

	while (*head != NULL)
	{
		free_list = *head;
		*head = (*head)->next;
		free(free_list);
	}
}
