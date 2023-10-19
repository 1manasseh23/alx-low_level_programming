#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - A function that add new at the end of list_t list
 * @head: Pointer that point to the first elment of list
 * @str: String to add
 * Return: Address or NUll
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first_node;
	list_t *tmp;

	if (str == NULL)
		return (NULL);

	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
		return (NULL);

	first_node->str = strdup(str);
	if (first_node->str == NULL)
	{
		free(first_node);
		return (NULL);
	}

	first_node->len = strlen(first_node->str);
	first_node->next = NULL;

	if (*head == NULL)
	{
		*head = first_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = first_node;
	}
	return (first_node);
}
