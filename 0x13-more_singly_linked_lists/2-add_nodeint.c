#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - A function that add a new node at the begining of a list
 * @head: A pointer to list_t structure
 * @n: An intefer data to put into the node
 * Return: the adress of the new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node;

	first_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = first_node;
	return (*head);
}
