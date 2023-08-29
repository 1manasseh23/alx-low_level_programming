#include "lists.h"
/**
 * pop_listint - A function that deleted head of node of a listint_t,
 * and return the head node's data n.
 * @head: A pointer to listint_t structure
 * Return: The head node's datafrom deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *first_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	first_node = (*head)->next;
	free(*head);
	*head = first_node;
	return (n);
}
