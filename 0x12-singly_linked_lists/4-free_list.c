#include "lists.h"
#include <stdlib.h>
/**
 * free_list - A function free all list_t list
 * @head: Pointer to the first element
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
