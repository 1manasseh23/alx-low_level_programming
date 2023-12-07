#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - A function that adds a new
 * node at the beginning of a dlistint_t list
 * @head: Pointer to the first and second node in list
 * @n: Node to add node
 * Return: Address of the new node, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ex_add_not;

	ex_add_not = malloc(sizeof(dlistint_t));
	if (ex_add_not == NULL)
	{
		return (NULL);
	}
	ex_add_not->n = n;
	ex_add_not->prev = NULL;
	ex_add_not->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = ex_add_not;
	}
	*head = ex_add_not;

	return (ex_add_not);
}
