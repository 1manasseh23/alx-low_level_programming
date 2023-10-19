#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - A function that add a new node at the begining of list_t list
 * @head: A 2 pointers to the first element of the list
 * @str: The string to add to new node
 * Return: Address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node;

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
	first_node->next = *head;
	*head = first_node;
	return (first_node);
}
